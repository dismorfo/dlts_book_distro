core = 7.x

api = 2

projects[drupal][version] = "7.x"

projects[views_bulk_operations][version] = "3.1"

projects[apachesolr][version] = "1.4"

projects[ctools][version] = "1.3"

projects[facetapi][version] = "1.3"

projects[date][version] = "2.6"

projects[entity][version] = "1.2"

projects[features][version] = "1.0"

projects[field_group][version] = "1.3"

projects[imagemagick][version] = "1.0"

projects[libraries][version] = "2.1"

projects[link][version] = "1.1"

projects[diff][version] = "3.x"

projects[transliteration][version] = "3.x"

projects[references][version] = "2.1"

projects[services][version] = "3.3+35-dev"

projects[strongarm][version] = "2.0"

projects[views][version] = "3.7"

projects[views_datasource][version] = "1.x-dev"

projects[rubik][version] = "4.0-beta8"

projects[tao][version] = "3.0-beta4"

; Profile

projects[books][download][type] = "local"
projects[books][download][url] = "lib/profiles/books"
projects[books][type] = "profile"

; Modules

projects[dlts_image][download][type] = "local"
projects[dlts_image][download][url] = "lib/modules/dlts_image"
projects[dlts_image][type] = "module"
projects[dlts_image][version] = "7.1-dev"

projects[imageconvert][download][type] = "local"
projects[imageconvert][download][url] = "lib/modules/imageconvert"
projects[imageconvert][type] = "module"

projects[dlts_nodeapi][download][type] = "local"
projects[dlts_nodeapi][download][url] = "lib/modules/dlts_nodeapi"
projects[dlts_nodeapi][type] = "module"

projects[dlts_dmd_multiplier][download][type] = "local"
projects[dlts_dmd_multiplier][download][url] = "lib/modules/dlts_dmd_multiplier"
projects[dlts_dmd_multiplier][type] = "module"

projects[dlts_shapes][download][type] = "local"
projects[dlts_shapes][download][url] = "lib/modules/dlts_shapes"
projects[dlts_shapes][type] = "module"

projects[dlts_site_metadata][download][type] = "local"
projects[dlts_site_metadata][download][url] = "lib/modules/dlts_site_metadata"
projects[dlts_site_metadata][type] = "module"

projects[dlts_solr][download][type] = "local"
projects[dlts_solr][download][url] = "lib/modules/dlts_solr"
projects[dlts_solr][type] = "module"

projects[dlts_utilities][download][type] = "local"
projects[dlts_utilities][download][url] = "lib/modules/dlts_utilities"
projects[dlts_utilities][type] = "module"

projects[dlts_books][download][type] = "local"
projects[dlts_books][download][url] = "lib/modules/dlts_book/dlts_book_features"
projects[dlts_books][type] = "module"

projects[dlts_book_pager][download][type] = "local"
projects[dlts_book_pager][download][url] = "lib/modules/dlts_book/dlts_book_pager"
projects[dlts_book_pager][type] = "module"

projects[dlts_book_api][download][type] = "local"
projects[dlts_book_api][download][url] = "lib/modules/dlts_book/dlts_book_api"
projects[dlts_book_api][type] = "module"

projects[dlts_book_display][download][type] = "local"
projects[dlts_book_display][download][url] = "lib/modules/dlts_book/dlts_book_display"
projects[dlts_book_display][type] = "module"

; Themes

projects[dlts_book][download][type] = "local"
projects[dlts_book][download][url] = "lib/themes/dlts_book"
projects[dlts_book][type] = "theme"

; Libraries

libraries[Mobile_Detect][download][type] = "git"
libraries[Mobile_Detect][download][url] = "https://github.com/serbanghita/Mobile-Detect.git"
libraries[Mobile_Detect][directory_name] = "Mobile_Detect"
libraries[Mobile_Detect][type] = "library"

;libraries[openlayers][download][type] = ""
;libraries[openlayers][download][url] = ""
;libraries[openlayers][directory_name] = "openlayers"
;libraries[openlayers][type] = "library"