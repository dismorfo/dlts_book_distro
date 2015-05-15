#!/bin/bash

die () {
  echo $1
  exit 1
}

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

[ -d $LIBRARY ] || die "Library directory $LIBRARY does not exist"

[ -d $BUILD_DIR ] || die "Build directory $BUILD_DIR does not exist" 
  
echo Linking build name $BUILD_NAME

site_dirs=(modules themes)

# find modules/themes and symlink them to the repo code
for site_dir in "${site_dirs[@]}"
  do
    for dir in $LIBRARY/${site_dir}/*
      do
        base=${dir##*/}
        if [ -d $BUILD_DIR/$BUILD_NAME/sites/all/${site_dir}/${base} ] && [ -d $LIBRARY/${site_dir}/${base} ]
          then
            rm -rf $BUILD_DIR/$BUILD_NAME/sites/all/${site_dir}/${base}
            ln -s $LIBRARY/${site_dir}/${base} $BUILD_DIR/$BUILD_NAME/sites/all/${site_dir}/${base}
        fi  
  done
done

# find profile and symlink them to the repo code
for dir in $LIBRARY/profiles/*
  do 
    base=${dir##*/}
    rm -rf $BUILD_DIR/$BUILD_NAME/profiles/${base}
    ln -s $LIBRARY/profiles/${base} $BUILD_DIR/$BUILD_NAME/profiles/${base}    
done