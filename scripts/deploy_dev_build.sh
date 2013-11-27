#!/bin/bash

die () {
  echo $1
  exit 1
}

# run commands will look repetitive; the only reason behind this is pure laziness and
# just in case at some point I need to do something special with one of them

run_compass() {
  if hash compass 2>/dev/null; then
    compass "$@"
  else
    die "Unable to find compass. Make sure is installed."
  fi
}

[ "$#" -eq 1 ] || die "Please provide make file"

SOURCE="${BASH_SOURCE[0]}"

# resolve $SOURCE until the file is no longer a symlink
while [ -h "$SOURCE" ]; do 
  DIR="$( cd -P "$( dirname "$SOURCE" )" && pwd )"
  SOURCE="$(readlink "$SOURCE")"
  # if $SOURCE was a relative symlink, we need to resolve it relative to the path where
  # the symlink file was located
  [[ $SOURCE != /* ]] && SOURCE="$DIR/$SOURCE"
done

DIR="$( cd -P "$( dirname "$SOURCE" )" && pwd )"

. $DIR/../project.conf

[ -f $1 ] || die "File $1 does not exist"

[ -d $BUILD_DIR ] || die "Build directory $BUILD_DIR does not exist" 

[ -r $BUILD_DIR ] || die "Can not write to $BUILD_DIR" 

echo Preparing new site using $1

drush -v make --prepare-install $1 $BUILD_DIR/$BUILD_NAME

# i need to add a test to check if we have all we need

echo Install new site

cd $BUILD_DIR/$BUILD_NAME

drush -v site-install $DRUPAL_INSTALL_PROFILE_NAME --site-name=$DRUPAL_SITE_NAME --account-name=$DRUPAL_ACCOUNT_NAME --account-mail=$DRUPAL_ACCOUNT_MAIL --site-mail=$DRUPAL_SITE_MAIL --db-url=$DRUPAL_SITE_DB_TYPE://$DRUPAL_SITE_DB_USER:$DRUPAL_SITE_DB_PASS@$DRUPAL_SITE_DB_ADDRESS/$DRUPAL_DB_NAME

# while in DEV let it be 777
chmod -R 2777 $BUILD_DIR/$BUILD_NAME/sites/default/files

# Set imagemagick convert path
drush -v -r $BUILD_DIR/$BUILD_NAME vset imagemagick_convert `which convert`

drush -v -r $BUILD_DIR/$BUILD_NAME --user=1 --uri=$URI vset dlts_image_djatoka_service $DJATOKA_URL

# build OpenLayers library
sh $DIR/../scripts/build_openlayers.sh

if [ -f $BUILD_DIR/$BUILD_NAME/sites/all/libraries/openlayers/build/OpenLayers.js ]
  then
    drush -v -r $BUILD_DIR/$BUILD_NAME vset dlts_image_openlayers_source sites/all/libraries/openlayers/build/OpenLayers.js
fi

echo Generating CSS files using compass
run_compass compile --force $BUILD_DIR/$BUILD_NAME/sites/all/themes/dlts_book

echo "You can create dummy content by running:"
echo "drush -v -r $BUILD_DIR/$BUILD_NAME --user=1 --uri=$URI scr $DIR/dummy_book/import_dummy_book.php"

cd $DIR

echo "Build path: " $BUILD_DIR/$BUILD_NAME

echo Ok