core = 7.x

api = 2

; Modules

projects[drupal][version] = "7.23"

projects[views_bulk_operations][version] = "3.1"

projects[apachesolr][version] = "1.5"

projects[ctools][version] = "1.3"

projects[facetapi][version] = "1.3"

projects[date][version] = "2.6"

projects[entity][version] = "1.2"

projects[features][version] = "1.0"

projects[field_group][version] = "1.3"

projects[imagemagick][version] = "1.0"

projects[libraries][version] = "2.1"

projects[link][version] = "1.1"

projects[transliteration][version] = "3.x"

projects[references][version] = "2.1"

projects[services][version] = "3.x"

projects[strongarm][version] = "2.0"

projects[views][version] = "3.7"

projects[views_datasource][version] = "1.x-dev"

projects[pathauto][version] = "1.2"

projects[token][version] = "1.5"

projects[unique_field][version] = "1.0-rc1"

projects[node_export][version] = "3.0"

projects[devel][version] = "1.3"

projects[diff][version] = "3.2"

projects[dlts_books][download][type] = "local"
projects[dlts_books][download][source] = "lib/modules/dlts_book_features"
projects[dlts_books][type] = "module"

projects[dlts_book_pager][download][type] = "local"
projects[dlts_book_pager][download][source] = "lib/modules/dlts_book_pager"
projects[dlts_book_pager][type] = "module"

projects[dlts_book_api][download][type] = "local"
projects[dlts_book_api][download][source] = "lib/modules/dlts_book_api"
projects[dlts_book_api][type] = "module"

projects[dlts_book_display][download][type] = "local"
projects[dlts_book_display][download][source] = "lib/modules/dlts_book_display"
projects[dlts_book_display][type] = "module"

projects[dlts_dmd_multiplier][download][type] = "local"
projects[dlts_dmd_multiplier][download][source] = "lib/modules/dlts_dmd_multiplier"
projects[dlts_dmd_multiplier][type] = "module"

projects[dummy_book][download][type] = "local"
projects[dummy_book][download][source] = "lib/modules/dummy_book"
projects[dummy_book][type] = "module"

projects[dlts_image][type] = "module"
projects[dlts_image][download][type] = "git"
projects[dlts_image][download][url] = "https://github.com/dismorfo/dlts_image.git"

;projects[dlts_nodeapi][download][type] = "svn"
;projects[dlts_nodeapi][download][url] = "http://v1.home.nyu.edu/svn/dlib/drupal_modules/7/dlts_nodeapi"
;projects[dlts_nodeapi][download][username] = "aof1"
;projects[dlts_nodeapi][download][interactive] = "true"

;projects[dlts_shapes][download][type] = "svn"
;projects[dlts_shapes][download][url] = "http://v1.home.nyu.edu/svn/dlib/drupal_modules/7/dlts_shapes"
;projects[dlts_shapes][download][username] = "aof1"
;projects[dlts_shapes][download][interactive] = "true"

;projects[dlts_site_metadata][type] = "module"
;projects[dlts_site_metadata][download][type] = "svn"
;projects[dlts_site_metadata][download][url] = "http://v1.home.nyu.edu/svn/dlib/drupal_modules/7/dlts_site_metadata"
;projects[dlts_site_metadata][download][username] = "aof1"
;projects[dlts_site_metadata][download][interactive] = "true"

;projects[dlts_solr][type] = "module"
;projects[dlts_solr][download][type] = "svn"
;projects[dlts_solr][download][url] = "http://v1.home.nyu.edu/svn/dlib/drupal_modules/7/dlts_solr"
;projects[dlts_solr][download][username] = "aof1"
;projects[dlts_solr][download][interactive] = "true"

;projects[dlts_utilities][type] = "module"
;projects[dlts_utilities][download][type] = "svn"
;projects[dlts_utilities][download][url] = "http://v1.home.nyu.edu/svn/dlib/drupal_modules/7/dlts_utilities"
;projects[dlts_utilities][download][username] = "aof1"
;projects[dlts_utilities][download][interactive] = "true"

; Themes

projects[dlts_book][type] = "theme"
projects[dlts_book][download][type] = "git"
projects[dlts_book][download][url] = "https://github.com/dismorfo/dlts_book.git"

projects[rubik][version] = "4.0-beta9"

projects[tao][version] = "3.0-beta4"

; Profile

projects[books][download][type] = "local"
projects[books][download][source] = "lib/profiles/books"
projects[books][type] = "profile"

; Libraries

libraries[Mobile_Detect][download][type] = "git"
libraries[Mobile_Detect][download][url] = "https://github.com/serbanghita/Mobile-Detect.git"
libraries[Mobile_Detect][directory_name] = "Mobile_Detect"
libraries[Mobile_Detect][type] = "library"

libraries[openlayers][download][type] = "git"
libraries[openlayers][download][url] = "https://github.com/openlayers/openlayers.git"
libraries[openlayers][directory_name] = "openlayers"
libraries[openlayers][type] = "library"

;libraries[djatoka][download][type] = "get"
;libraries[djatoka][download][url] = "http://softlayer-dal.dl.sourceforge.net/project/djatoka/djatoka/1.1/adore-djatoka-1.1.tar.gz"
;libraries[djatoka][directory_name] = "adore-djatoka"
;libraries[djatoka][type] = "library"