<?php

/**
 * @file
 * hook_file and dlts_image file functions.
 */

/**
 *
 * Taken from filefield.module and modified
 *
 * An #upload_validators callback. Check that a file is an image.
 *
 * This check should allow any image that PHP can identify, including png, jpg,
 * gif, tif, bmp, psd, swc, iff, jpc, jp2, jpx, jb2, xbm, and wbmp.
 *
 * This check should be combined with filefield_validate_extensions() to ensure
 * only web-based images are allowed, however it provides a better check than
 * extension checking alone if the mimedetect module is not available.
 *
 * @param $file
 *   A Drupal file object.
 * @return
 *   An array of any errors cause by this file if it failed validation.
 */
function dlts_image_file_validate_is_image( &$file ) {
  $errors = array();
  $info = dlts_image_file_image_get_info( $file->filepath );
  if ( !$info || empty( $info['extension'] ) ) {
    $errors[] = t('The file is not a known image format.');
  }
  return $errors;
}

/**
 * Taken from includes/image.inc and modified; aof
 *
 * Get details about an image.
 */
function dlts_image_file_image_get_info( $file ) {
  if ( !is_file( $file ) ) {
    return FALSE;
  }
  $details = FALSE;
  $data = @getimagesize($file);
  $file_size = @filesize($file);

  if (isset($data) && is_array($data)) {
    $extensions = array(
      '2' => 'jpg',
      '7' => 'tif',
      '10' => 'jp2',
    );

    $extension = array_key_exists( $data[2], $extensions) ?  $extensions[$data[2]] : '';

    $details = array(
      'width' => $data[0],
      'height' => $data[1],
      'extension' => $extension,
      'file_size' => $file_size,
      'mime_type' => $data['mime'],
    );
  }
  return $details;
}

/**
 * Simple utility function to check if a file is an image.
 */
function dlts_image_file_is_image($file) {
  return in_array($file->filemime, array('image/jpg', 'image/pjpeg', 'image/jpeg', 'image/tiff', 'application/octet-stream', 'image/jp2', 'image/jpeg2000', 'image/jpeg2000-image', 'image/x-jpeg2000-image'));
}

/**
 * Is the available ImageMagick library able to work with JP2 files?
 *
 * @todo Assuming that the destination file existing is proof of this test
 * passing is probably not safe. Ideally, the destination file would be
 * created on every run of this function and then deleted.
 *
 * @param $source_file
 *   The path to a JP2 image.
 * @param $destination_file
 *   The path to a file. The path will be created if it does not exist.
 * @return
 *   TRUE if ImageMagick is able to work with JP2 files.
 *   FALSE otherwise.
 */
function dlts_image_file_test_imagemagick($source_file, $destination_file) {
  // The source file needs to exist, the imagemagick api needs to be the
  // default image toolkit, and the destination must exist and be writable.
  if (!is_file($source_file)
      || (image_get_toolkit() != 'imagemagick')
      || (!dlts_image_file_directory_exists($destination_file))) {
    return FALSE;
  }
  // Check if the destination image exists; if image exists then we already
  // pass this test.
  // Add a check to verify that the file in question is an image file.
  elseif (is_file($destination_file) && dlts_image_file_image_get_info($destination_file)) {
    return TRUE;
  }
  elseif (dlts_image_file_image_get_info($source_file)) { // Verify source is a valid image
    return dlts_image_file_create_derivative_image($source_file, $destination_file, 10, 10, 'resize'); // Try to convert JP2 image.
  }
  else {
    return FALSE;
  }
}

/*
 * Try to ensure that a directory path exists and is writable.
 *
 * If a path does not exist, try to create it. If a path is not writable, try
 * to make it writable.
 *
 * @param $file
 *   The path to a file. The path does not need to exist.
 * @return
 *   TRUE if the directory exists and is writable.
 *   FALSE otherwise.
 */
function dlts_image_file_directory_exists($file) {
  $dir = drupal_dirname($file);
  return file_prepare_directory($dir, FILE_CREATE_DIRECTORY^FILE_MODIFY_PERMISSIONS);
}

/*
 * Helper function to ensure derivative image are websafe.
 */
function dlts_image_file_filename_convert($file, $extension = 'jpg') {
  if ( in_array($extension, array('png', 'jpg', 'jpeg')) ) {
    // $short_path = pathinfo(drupal_realpath($file['filename']));
    // $filename = $short_path['filename'];
    // if ($extension != 'jpg') {
    //  $fileextension = $short_path['extension'];
    // }
    // else {
    // $fileextension = $extension;
    // }
    $pathinfo = pathinfo($file['filename']);
    return $pathinfo['filename'] . '.' . $extension;
  }
}
