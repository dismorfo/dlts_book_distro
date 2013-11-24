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

CURRENT_DIR=`pwd`

LIBRARY="$(dirname "$DIR")"/lib

. $DIR/../project.conf

[ -d $LIBRARY ] || die "Library directory $LIBRARY does not exist"

[ -d $BUILD_DIR ] || die "Build directory $BUILD_DIR does not exist" 

if [ -d $BUILD_DIR/$BUILD_NAME/sites/all/modules/dlts_image ] && [ -d $BUILD_DIR/$BUILD_NAME/sites/all/libraries/openlayers ]
  then 

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

    echo Building OpenLayers
    
    ./build.py -c none books.cfg
    
    # go back to the directory the script was ran
    cd $CURRENT_DIR
    
fi