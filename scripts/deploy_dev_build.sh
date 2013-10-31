#!/bin/bash

die () {
  echo $1
  exit 1
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

LIBRARY="$(dirname "$DIR")"/lib

. $DIR/../project.conf

[ -f $1 ] || die "File $1 does not exist"
[ -d $LIBRARY ] || die "Library directory $LIBRARY does not exist"
[ -d $BUILD_DIR ] || die "Build directory $BUILD_DIR does not exist" 

echo Preparing new site using $1
drush make --prepare-install $1 $BUILD_DIR/$BUILD_NAME
  
echo Install new site
cd $BUILD_DIR/$BUILD_NAME
drush site-install $DRUPAL_INSTALL_PROFILE_NAME --site-name=$DRUPAL_SITE_NAME --account-name=$DRUPAL_ACCOUNT_NAME --account-mail=$DRUPAL_ACCOUNT_MAIL --site-mail=$DRUPAL_SITE_MAIL --db-url=$DRUPAL_SITE_DB_TYPE://$DRUPAL_SITE_DB_USER:$DRUPAL_SITE_DB_PASS@$DRUPAL_SITE_DB_ADDRESS/$DRUPAL_DB_NAME
  
echo Linking build name $BUILD_NAME

site_dirs=(modules themes)

# find modules and themes and symlink them to the repo code
for site_dir in "${site_dirs[@]}"
  do
    for dir in $LIBRARY/${site_dir}/*
      do 
        base=${dir##*/}
        rm -rf $BUILD_DIR/$BUILD_NAME/sites/all/${site_dir}/${base}
        ln -s $LIBRARY/${site_dir}/${base} $BUILD_DIR/$BUILD_NAME/sites/all/${site_dir}/${base}
    done
done

# find profile and symlink them to the repo code
for dir in $LIBRARY/profiles/*
  do 
    base=${dir##*/}
    rm -rf $BUILD_DIR/$BUILD_NAME/profiles/${base}
    ln -s $LIBRARY/profiles/${base} $BUILD_DIR/$BUILD_NAME/profiles/${base}
done

# Test for imagemagick
imagemagick_convert_path=`which convert`

# Set $imagemagick_convert_path as imagemagick convert path
drush vset imagemagick_convert $imagemagick_convert_path

echo Building OpenLayers

cp $BUILD_DIR/$BUILD_NAME/sites/all/modules/dlts_image/js/openlayers/books.cfg $BUILD_DIR/$BUILD_NAME/sites/all/libraries/openlayers/build/books.cfg
cp $BUILD_DIR/$BUILD_NAME/sites/all/modules/dlts_image/js/openlayers/DLTS.js $BUILD_DIR/$BUILD_NAME/sites/all/libraries/openlayers/lib/OpenLayers/DLTS.js
cp $BUILD_DIR/$BUILD_NAME/sites/all/modules/dlts_image/js/openlayers/DLTSZoomIn.js $BUILD_DIR/$BUILD_NAME/sites/all/libraries/openlayers/lib/OpenLayers/Control/DLTSZoomIn.js
cp $BUILD_DIR/$BUILD_NAME/sites/all/modules/dlts_image/js/openlayers/DLTSZoomOut.js $BUILD_DIR/$BUILD_NAME/sites/all/libraries/openlayers/lib/OpenLayers/Control/DLTSZoomOut.js
cp $BUILD_DIR/$BUILD_NAME/sites/all/modules/dlts_image/js/openlayers/DLTSZoomPanel.js $BUILD_DIR/$BUILD_NAME/sites/all/libraries/openlayers/lib/OpenLayers/Control/DLTSZoomPanel.js
cp $BUILD_DIR/$BUILD_NAME/sites/all/modules/dlts_image/js/openlayers/DLTSZoomOutPanel.js $BUILD_DIR/$BUILD_NAME/sites/all/libraries/openlayers/lib/OpenLayers/Control/DLTSZoomOutPanel.js
cp $BUILD_DIR/$BUILD_NAME/sites/all/modules/dlts_image/js/openlayers/DLTSZoomInPanel.js $BUILD_DIR/$BUILD_NAME/sites/all/libraries/openlayers/lib/OpenLayers/Control/DLTSZoomInPanel.js
cp $BUILD_DIR/$BUILD_NAME/sites/all/modules/dlts_image/js/openlayers/DLTSScrollWheel.js $BUILD_DIR/$BUILD_NAME/sites/all/libraries/openlayers/lib/OpenLayers/Control/DLTSScrollWheel.js
cp $BUILD_DIR/$BUILD_NAME/sites/all/modules/dlts_image/js/openlayers/DLTSMouseWheel.js $BUILD_DIR/$BUILD_NAME/sites/all/libraries/openlayers/lib/OpenLayers/Handler/DLTSMouseWheel.js
cp $BUILD_DIR/$BUILD_NAME/sites/all/modules/dlts_image/js/openlayers/OpenURL.js $BUILD_DIR/$BUILD_NAME/sites/all/libraries/openlayers/lib/OpenLayers/Layer/OpenURL.js

cd $BUILD_DIR/$BUILD_NAME/sites/all/libraries/openlayers/build

./build.py -c none books.cfg

if [ -f $BUILD_DIR/$BUILD_NAME/sites/all/libraries/openlayers/build/OpenLayers.js ]
then
  drush vset dlts_image_openlayers_source sites/all/libraries/openlayers/build/OpenLayers.js
fi

echo Generating CSS files using compass
compass compile --force $LIBRARY/themes/dlts_book

cd $DIR

echo Build path: $BUILD_DIR/$BUILD_NAME

echo Ok