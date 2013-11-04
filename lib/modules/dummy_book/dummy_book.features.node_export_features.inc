<?php
/**
 * @file
 * dummy_book.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function dummy_book_node_export_features_default() {
  $node_export = array(
  'code_string' => '<?xml version="1.0" encoding="UTF-8" ?>
<node_export created="Thu, 31 Oct 2013 15:45:15 -0400">
  <node>
    <vid>2</vid>
    <uid>1</uid>
    <title>Romanticism</title>
    <log></log>
    <status>1</status>
    <comment>1</comment>
    <promote>0</promote>
    <sticky>0</sticky>
    <vuuid>1e9636a4-cf5f-4b05-95bb-e0b295cc7d7f</vuuid>
    <nid>2</nid>
    <type>dlts_book</type>
    <language>und</language>
    <created>1383190804</created>
    <changed>1383194384</changed>
    <tnid>0</tnid>
    <translate>0</translate>
    <uuid>058f617b-fef5-474e-a0f2-cef3b1e76b6f</uuid>
    <revision_timestamp>1383194384</revision_timestamp>
    <revision_uid>1</revision_uid>
    <field_author _numeric_keys="1"></field_author>
    <field_binding_orientation>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_binding_orientation>
    <field_call_number _numeric_keys="1"></field_call_number>
    <field_contributor _numeric_keys="1"></field_contributor>
    <field_creator _numeric_keys="1"></field_creator>
    <field_description _numeric_keys="1"></field_description>
    <field_dimensions _numeric_keys="1"></field_dimensions>
    <field_editor _numeric_keys="1"></field_editor>
    <field_handle _numeric_keys="1"></field_handle>
    <field_identifier>
      <und _numeric_keys="1">
        <n0>
          <value>romanticism</value>
          <format type="NULL"></format>
          <safe_value>romanticism</safe_value>
        </n0>
      </und>
    </field_identifier>
    <field_is_part_of_collection>
      <und _numeric_keys="1">
        <n0>
          <nid>1</nid>
        </n0>
      </und>
    </field_is_part_of_collection>
    <field_isbn _numeric_keys="1"></field_isbn>
    <field_language _numeric_keys="1"></field_language>
    <field_language_code _numeric_keys="1"></field_language_code>
    <field_number _numeric_keys="1"></field_number>
    <field_ocr_text _numeric_keys="1"></field_ocr_text>
    <field_other_version _numeric_keys="1"></field_other_version>
    <field_page_count>
      <und _numeric_keys="1">
        <n0>
          <value>10</value>
        </n0>
      </und>
    </field_page_count>
    <field_pdf_file _numeric_keys="1"></field_pdf_file>
    <field_publication_date>
      <und _numeric_keys="1">
        <n0>
          <value>2013-10-01T00:00:00</value>
          <value2>2013-10-01T00:00:00</value2>
          <timezone>America/New_York</timezone>
          <timezone_db>America/New_York</timezone_db>
          <date_type>date</date_type>
        </n0>
      </und>
    </field_publication_date>
    <field_publisher _numeric_keys="1"></field_publisher>
    <field_read_order>
      <und _numeric_keys="1">
        <n0>
          <value>0</value>
        </n0>
      </und>
    </field_read_order>
    <field_representative_image _numeric_keys="1"></field_representative_image>
    <field_scan_date>
      <und _numeric_keys="1">
        <n0>
          <value>2013-10-30T00:00:00</value>
          <timezone>America/New_York</timezone>
          <timezone_db>America/New_York</timezone_db>
          <date_type>date</date_type>
        </n0>
      </und>
    </field_scan_date>
    <field_scan_order>
      <und _numeric_keys="1">
        <n0>
          <value>0</value>
        </n0>
      </und>
    </field_scan_order>
    <field_scanning_notes _numeric_keys="1"></field_scanning_notes>
    <field_sequence_count>
      <und _numeric_keys="1">
        <n0>
          <value>10</value>
        </n0>
      </und>
    </field_sequence_count>
    <field_subject _numeric_keys="1"></field_subject>
    <field_subtitle>
      <und _numeric_keys="1">
        <n0>
          <value>Also the Romantic era or the Romantic period</value>
          <format type="NULL"></format>
          <safe_value>Also the Romantic era or the Romantic period</safe_value>
        </n0>
      </und>
    </field_subtitle>
    <field_title>
      <und _numeric_keys="1">
        <n0>
          <value>Romanticism</value>
          <format type="NULL"></format>
          <safe_value>Romanticism</safe_value>
        </n0>
      </und>
    </field_title>
    <field_volume _numeric_keys="1"></field_volume>
    <rdf_mapping>
      <rdftype _numeric_keys="1">
        <n0>sioc:Item</n0>
        <n1>foaf:Document</n1>
      </rdftype>
      <title>
        <predicates _numeric_keys="1">
          <n0>dc:title</n0>
        </predicates>
      </title>
      <created>
        <predicates _numeric_keys="1">
          <n0>dc:date</n0>
          <n1>dc:created</n1>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </created>
      <changed>
        <predicates _numeric_keys="1">
          <n0>dc:modified</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </changed>
      <body>
        <predicates _numeric_keys="1">
          <n0>content:encoded</n0>
        </predicates>
      </body>
      <uid>
        <predicates _numeric_keys="1">
          <n0>sioc:has_creator</n0>
        </predicates>
        <type>rel</type>
      </uid>
      <name>
        <predicates _numeric_keys="1">
          <n0>foaf:name</n0>
        </predicates>
      </name>
      <comment_count>
        <predicates _numeric_keys="1">
          <n0>sioc:num_replies</n0>
        </predicates>
        <datatype>xsd:integer</datatype>
      </comment_count>
      <last_activity>
        <predicates _numeric_keys="1">
          <n0>sioc:last_activity_date</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </last_activity>
    </rdf_mapping>
    <cid>0</cid>
    <last_comment_timestamp>1383190804</last_comment_timestamp>
    <last_comment_name type="NULL"></last_comment_name>
    <last_comment_uid>1</last_comment_uid>
    <comment_count>0</comment_count>
    <name>aortiz</name>
    <picture>0</picture>
    <data>b:0;</data>
    <path>
      <pid>2</pid>
      <source>node/2</source>
      <alias>books/romanticism</alias>
      <language>und</language>
    </path>
    <menu type="NULL"></menu>
    <node_export_drupal_version>7</node_export_drupal_version>
  </node>
  <node>
    <vid>10</vid>
    <uid>1</uid>
    <title>Liberty Leading the People</title>
    <log></log>
    <status>1</status>
    <comment>1</comment>
    <promote>0</promote>
    <sticky>0</sticky>
    <vuuid>1ba69a1a-de23-49d5-9357-298f8956c6a3</vuuid>
    <nid>10</nid>
    <type>dlts_book_page</type>
    <language>und</language>
    <created>1383192811</created>
    <changed>1383244049</changed>
    <tnid>0</tnid>
    <translate>0</translate>
    <uuid>16debba5-d431-4015-abff-3fac3074cea6</uuid>
    <revision_timestamp>1383244049</revision_timestamp>
    <revision_uid>1</revision_uid>
    <field_book>
      <und _numeric_keys="1">
        <n0>
          <nid>2</nid>
        </n0>
      </und>
    </field_book>
    <field_cropped_master>
      <und _numeric_keys="1">
        <n0>
          <fid type="NULL"></fid>
          <uid>1</uid>
          <filename>peuple.tif</filename>
          <uri>public://peuple.tif</uri>
          <filemime>image/tiff</filemime>
          <filesize>23336696</filesize>
          <status>0</status>
          <timestamp>1383244049</timestamp>
          <uuid>301323ee-9201-4751-a735-ecd995ee398b</uuid>
          <rdf_mapping _numeric_keys="1"></rdf_mapping>
          <djakota_width>3133</djakota_width>
          <djakota_height>2480</djakota_height>
          <djakota_levels>6</djakota_levels>
          <djakota_dwtLevels>6</djakota_dwtLevels>
          <djakota_compositingLayerCount>1</djakota_compositingLayerCount>
          <width>3133</width>
          <height>2480</height>
          <node_export_file_url>http://localhost/books-1383190464/public%3A//peuple.tif</node_export_file_url>
        </n0>
      </und>
    </field_cropped_master>
    <field_hand_side>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_hand_side>
    <field_is_part_of>
      <und _numeric_keys="1">
        <n0>
          <value>romanticism</value>
          <format type="NULL"></format>
          <safe_value>romanticism</safe_value>
        </n0>
      </und>
    </field_is_part_of>
    <field_ocr_text _numeric_keys="1"></field_ocr_text>
    <field_page_type>
      <und _numeric_keys="1">
        <n0>
          <value>0</value>
        </n0>
      </und>
    </field_page_type>
    <field_real_page_number>
      <und _numeric_keys="1">
        <n0>
          <value>8</value>
          <format type="NULL"></format>
          <safe_value>8</safe_value>
        </n0>
      </und>
    </field_real_page_number>
    <field_sequence_number>
      <und _numeric_keys="1">
        <n0>
          <value>8</value>
        </n0>
      </und>
    </field_sequence_number>
    <field_service_copy>
      <und _numeric_keys="1">
        <n0>
          <fid type="NULL"></fid>
          <uid>1</uid>
          <filename>peuple.jpg</filename>
          <uri>public://peuple.jpg</uri>
          <filemime>image/jpeg</filemime>
          <filesize>1728494</filesize>
          <status>1</status>
          <timestamp>1383192811</timestamp>
          <uuid>0e893665-0a12-4267-aa5c-711fcfa096a8</uuid>
          <rdf_mapping _numeric_keys="1"></rdf_mapping>
          <alt></alt>
          <title></title>
          <width>3133</width>
          <height>2480</height>
          <node_export_file_url>http://localhost/books-1383190464/public%3A//peuple.jpg</node_export_file_url>
        </n0>
      </und>
    </field_service_copy>
    <field_visible>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_visible>
    <rdf_mapping>
      <rdftype _numeric_keys="1">
        <n0>sioc:Item</n0>
        <n1>foaf:Document</n1>
      </rdftype>
      <title>
        <predicates _numeric_keys="1">
          <n0>dc:title</n0>
        </predicates>
      </title>
      <created>
        <predicates _numeric_keys="1">
          <n0>dc:date</n0>
          <n1>dc:created</n1>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </created>
      <changed>
        <predicates _numeric_keys="1">
          <n0>dc:modified</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </changed>
      <body>
        <predicates _numeric_keys="1">
          <n0>content:encoded</n0>
        </predicates>
      </body>
      <uid>
        <predicates _numeric_keys="1">
          <n0>sioc:has_creator</n0>
        </predicates>
        <type>rel</type>
      </uid>
      <name>
        <predicates _numeric_keys="1">
          <n0>foaf:name</n0>
        </predicates>
      </name>
      <comment_count>
        <predicates _numeric_keys="1">
          <n0>sioc:num_replies</n0>
        </predicates>
        <datatype>xsd:integer</datatype>
      </comment_count>
      <last_activity>
        <predicates _numeric_keys="1">
          <n0>sioc:last_activity_date</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </last_activity>
    </rdf_mapping>
    <cid>0</cid>
    <last_comment_timestamp>1383192811</last_comment_timestamp>
    <last_comment_name type="NULL"></last_comment_name>
    <last_comment_uid>1</last_comment_uid>
    <comment_count>0</comment_count>
    <prevpage></prevpage>
    <nextpage></nextpage>
    <togglepage></togglepage>
    <name>aortiz</name>
    <picture>0</picture>
    <data>b:0;</data>
    <path>
      <pid>10</pid>
      <source>node/10</source>
      <alias>books/romanticism/8</alias>
      <language>und</language>
    </path>
    <menu type="NULL"></menu>
    <node_export_drupal_version>7</node_export_drupal_version>
  </node>
  <node>
    <vid>9</vid>
    <uid>1</uid>
    <title>Ossian receiving the Ghosts of the French Heroes</title>
    <log></log>
    <status>1</status>
    <comment>1</comment>
    <promote>0</promote>
    <sticky>0</sticky>
    <vuuid>492eb7f6-886b-43fe-bd8b-8a406f14eefb</vuuid>
    <nid>9</nid>
    <type>dlts_book_page</type>
    <language>und</language>
    <created>1383192597</created>
    <changed>1383244067</changed>
    <tnid>0</tnid>
    <translate>0</translate>
    <uuid>1ad3f62e-dcca-4e3e-83ae-59d6385f8fbc</uuid>
    <revision_timestamp>1383244067</revision_timestamp>
    <revision_uid>1</revision_uid>
    <field_book>
      <und _numeric_keys="1">
        <n0>
          <nid>2</nid>
        </n0>
      </und>
    </field_book>
    <field_cropped_master>
      <und _numeric_keys="1">
        <n0>
          <fid type="NULL"></fid>
          <uid>1</uid>
          <filename>girodet.tif</filename>
          <uri>public://girodet.tif</uri>
          <filemime>image/tiff</filemime>
          <filesize>12832400</filesize>
          <status>0</status>
          <timestamp>1383244067</timestamp>
          <uuid>d9807598-0256-4fa7-8f33-3fee4a4392b7</uuid>
          <rdf_mapping _numeric_keys="1"></rdf_mapping>
          <djakota_width>2024</djakota_width>
          <djakota_height>2107</djakota_height>
          <djakota_levels>5</djakota_levels>
          <djakota_dwtLevels>5</djakota_dwtLevels>
          <djakota_compositingLayerCount>1</djakota_compositingLayerCount>
          <width>2024</width>
          <height>2107</height>
          <node_export_file_url>http://localhost/books-1383190464/public%3A//girodet.tif</node_export_file_url>
        </n0>
      </und>
    </field_cropped_master>
    <field_hand_side>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_hand_side>
    <field_is_part_of>
      <und _numeric_keys="1">
        <n0>
          <value>romanticism</value>
          <format type="NULL"></format>
          <safe_value>romanticism</safe_value>
        </n0>
      </und>
    </field_is_part_of>
    <field_ocr_text _numeric_keys="1"></field_ocr_text>
    <field_page_type>
      <und _numeric_keys="1">
        <n0>
          <value>0</value>
        </n0>
      </und>
    </field_page_type>
    <field_real_page_number>
      <und _numeric_keys="1">
        <n0>
          <value>7</value>
          <format type="NULL"></format>
          <safe_value>7</safe_value>
        </n0>
      </und>
    </field_real_page_number>
    <field_sequence_number>
      <und _numeric_keys="1">
        <n0>
          <value>7</value>
        </n0>
      </und>
    </field_sequence_number>
    <field_service_copy>
      <und _numeric_keys="1">
        <n0>
          <fid type="NULL"></fid>
          <uid>1</uid>
          <filename>girodet.jpg</filename>
          <uri>public://girodet.jpg</uri>
          <filemime>image/jpeg</filemime>
          <filesize>1918484</filesize>
          <status>1</status>
          <timestamp>1383192597</timestamp>
          <uuid>bdc30e28-0036-415d-aad1-8d71057fbd2f</uuid>
          <rdf_mapping _numeric_keys="1"></rdf_mapping>
          <alt></alt>
          <title></title>
          <width>2024</width>
          <height>2107</height>
          <node_export_file_url>http://localhost/books-1383190464/public%3A//girodet.jpg</node_export_file_url>
        </n0>
      </und>
    </field_service_copy>
    <field_visible>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_visible>
    <rdf_mapping>
      <rdftype _numeric_keys="1">
        <n0>sioc:Item</n0>
        <n1>foaf:Document</n1>
      </rdftype>
      <title>
        <predicates _numeric_keys="1">
          <n0>dc:title</n0>
        </predicates>
      </title>
      <created>
        <predicates _numeric_keys="1">
          <n0>dc:date</n0>
          <n1>dc:created</n1>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </created>
      <changed>
        <predicates _numeric_keys="1">
          <n0>dc:modified</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </changed>
      <body>
        <predicates _numeric_keys="1">
          <n0>content:encoded</n0>
        </predicates>
      </body>
      <uid>
        <predicates _numeric_keys="1">
          <n0>sioc:has_creator</n0>
        </predicates>
        <type>rel</type>
      </uid>
      <name>
        <predicates _numeric_keys="1">
          <n0>foaf:name</n0>
        </predicates>
      </name>
      <comment_count>
        <predicates _numeric_keys="1">
          <n0>sioc:num_replies</n0>
        </predicates>
        <datatype>xsd:integer</datatype>
      </comment_count>
      <last_activity>
        <predicates _numeric_keys="1">
          <n0>sioc:last_activity_date</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </last_activity>
    </rdf_mapping>
    <cid>0</cid>
    <last_comment_timestamp>1383192597</last_comment_timestamp>
    <last_comment_name type="NULL"></last_comment_name>
    <last_comment_uid>1</last_comment_uid>
    <comment_count>0</comment_count>
    <prevpage></prevpage>
    <nextpage></nextpage>
    <togglepage></togglepage>
    <name>aortiz</name>
    <picture>0</picture>
    <data>b:0;</data>
    <path>
      <pid>9</pid>
      <source>node/9</source>
      <alias>books/romanticism/7</alias>
      <language>und</language>
    </path>
    <menu type="NULL"></menu>
    <node_export_drupal_version>7</node_export_drupal_version>
  </node>
  <node>
    <vid>5</vid>
    <uid>1</uid>
    <title>La Mort de Sardanapale</title>
    <log></log>
    <status>1</status>
    <comment>1</comment>
    <promote>0</promote>
    <sticky>0</sticky>
    <vuuid>f91ed12e-6605-4808-aeaa-b6ee73d4eaa6</vuuid>
    <nid>5</nid>
    <type>dlts_book_page</type>
    <language>und</language>
    <created>1383191311</created>
    <changed>1383244155</changed>
    <tnid>0</tnid>
    <translate>0</translate>
    <uuid>3047c77e-413f-4791-b6d8-55e358b00a5b</uuid>
    <revision_timestamp>1383244155</revision_timestamp>
    <revision_uid>1</revision_uid>
    <field_book>
      <und _numeric_keys="1">
        <n0>
          <nid>2</nid>
        </n0>
      </und>
    </field_book>
    <field_cropped_master>
      <und _numeric_keys="1">
        <n0>
          <fid type="NULL"></fid>
          <uid>1</uid>
          <filename>la-mort.tif</filename>
          <uri>public://la-mort.tif</uri>
          <filemime>image/tiff</filemime>
          <filesize>35409308</filesize>
          <status>0</status>
          <timestamp>1383244155</timestamp>
          <uuid>922366b0-c1f3-40ec-9cdc-fe510e026aa9</uuid>
          <rdf_mapping _numeric_keys="1"></rdf_mapping>
          <djakota_width>3873</djakota_width>
          <djakota_height>3045</djakota_height>
          <djakota_levels>6</djakota_levels>
          <djakota_dwtLevels>6</djakota_dwtLevels>
          <djakota_compositingLayerCount>1</djakota_compositingLayerCount>
          <width>3873</width>
          <height>3045</height>
          <node_export_file_url>http://localhost/books-1383190464/public%3A//la-mort.tif</node_export_file_url>
        </n0>
      </und>
    </field_cropped_master>
    <field_hand_side>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_hand_side>
    <field_is_part_of>
      <und _numeric_keys="1">
        <n0>
          <value>romanticism</value>
          <format type="NULL"></format>
          <safe_value>romanticism</safe_value>
        </n0>
      </und>
    </field_is_part_of>
    <field_ocr_text _numeric_keys="1"></field_ocr_text>
    <field_page_type>
      <und _numeric_keys="1">
        <n0>
          <value>0</value>
        </n0>
      </und>
    </field_page_type>
    <field_real_page_number>
      <und _numeric_keys="1">
        <n0>
          <value>3</value>
          <format type="NULL"></format>
          <safe_value>3</safe_value>
        </n0>
      </und>
    </field_real_page_number>
    <field_sequence_number>
      <und _numeric_keys="1">
        <n0>
          <value>3</value>
        </n0>
      </und>
    </field_sequence_number>
    <field_service_copy>
      <und _numeric_keys="1">
        <n0>
          <fid type="NULL"></fid>
          <uid>1</uid>
          <filename>la-mort.jpg</filename>
          <uri>public://la-mort.jpg</uri>
          <filemime>image/jpeg</filemime>
          <filesize>9434631</filesize>
          <status>1</status>
          <timestamp>1383191311</timestamp>
          <uuid>d7cb5f09-83e5-4c2a-9d01-14112478a374</uuid>
          <rdf_mapping _numeric_keys="1"></rdf_mapping>
          <alt></alt>
          <title></title>
          <width>3873</width>
          <height>3045</height>
          <node_export_file_url>http://localhost/books-1383190464/public%3A//la-mort.jpg</node_export_file_url>
        </n0>
      </und>
    </field_service_copy>
    <field_visible>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_visible>
    <rdf_mapping>
      <rdftype _numeric_keys="1">
        <n0>sioc:Item</n0>
        <n1>foaf:Document</n1>
      </rdftype>
      <title>
        <predicates _numeric_keys="1">
          <n0>dc:title</n0>
        </predicates>
      </title>
      <created>
        <predicates _numeric_keys="1">
          <n0>dc:date</n0>
          <n1>dc:created</n1>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </created>
      <changed>
        <predicates _numeric_keys="1">
          <n0>dc:modified</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </changed>
      <body>
        <predicates _numeric_keys="1">
          <n0>content:encoded</n0>
        </predicates>
      </body>
      <uid>
        <predicates _numeric_keys="1">
          <n0>sioc:has_creator</n0>
        </predicates>
        <type>rel</type>
      </uid>
      <name>
        <predicates _numeric_keys="1">
          <n0>foaf:name</n0>
        </predicates>
      </name>
      <comment_count>
        <predicates _numeric_keys="1">
          <n0>sioc:num_replies</n0>
        </predicates>
        <datatype>xsd:integer</datatype>
      </comment_count>
      <last_activity>
        <predicates _numeric_keys="1">
          <n0>sioc:last_activity_date</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </last_activity>
    </rdf_mapping>
    <cid>0</cid>
    <last_comment_timestamp>1383191311</last_comment_timestamp>
    <last_comment_name type="NULL"></last_comment_name>
    <last_comment_uid>1</last_comment_uid>
    <comment_count>0</comment_count>
    <prevpage></prevpage>
    <nextpage></nextpage>
    <togglepage></togglepage>
    <name>aortiz</name>
    <picture>0</picture>
    <data>b:0;</data>
    <path>
      <pid>5</pid>
      <source>node/5</source>
      <alias>books/romanticism/3</alias>
      <language>und</language>
    </path>
    <menu type="NULL"></menu>
    <node_export_drupal_version>7</node_export_drupal_version>
  </node>
  <node>
    <vid>3</vid>
    <uid>1</uid>
    <title>Wanderer Above the Sea of Fog</title>
    <log></log>
    <status>1</status>
    <comment>1</comment>
    <promote>0</promote>
    <sticky>0</sticky>
    <vuuid>cccc8847-46ba-493b-b492-b75562a563cb</vuuid>
    <nid>3</nid>
    <type>dlts_book_page</type>
    <language>und</language>
    <created>1383190972</created>
    <changed>1383244203</changed>
    <tnid>0</tnid>
    <translate>0</translate>
    <uuid>306fe0ad-b049-4048-8498-f51aec581034</uuid>
    <revision_timestamp>1383244203</revision_timestamp>
    <revision_uid>1</revision_uid>
    <field_book>
      <und _numeric_keys="1">
        <n0>
          <nid>2</nid>
        </n0>
      </und>
    </field_book>
    <field_cropped_master>
      <und _numeric_keys="1">
        <n0>
          <fid type="NULL"></fid>
          <uid>1</uid>
          <filename>caspar.tif</filename>
          <uri>public://caspar.tif</uri>
          <filemime>image/tiff</filemime>
          <filesize>20835732</filesize>
          <status>0</status>
          <timestamp>1383244203</timestamp>
          <uuid>787635af-c770-4565-89a6-30d01cc607de</uuid>
          <rdf_mapping _numeric_keys="1"></rdf_mapping>
          <djakota_width>2327</djakota_width>
          <djakota_height>2980</djakota_height>
          <djakota_levels>5</djakota_levels>
          <djakota_dwtLevels>5</djakota_dwtLevels>
          <djakota_compositingLayerCount>1</djakota_compositingLayerCount>
          <width>2327</width>
          <height>2980</height>
          <node_export_file_url>http://localhost/books-1383190464/public%3A//caspar.tif</node_export_file_url>
        </n0>
      </und>
    </field_cropped_master>
    <field_hand_side>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_hand_side>
    <field_is_part_of>
      <und _numeric_keys="1">
        <n0>
          <value>romanticism</value>
          <format type="NULL"></format>
          <safe_value>romanticism</safe_value>
        </n0>
      </und>
    </field_is_part_of>
    <field_ocr_text _numeric_keys="1"></field_ocr_text>
    <field_page_type>
      <und _numeric_keys="1">
        <n0>
          <value>0</value>
        </n0>
      </und>
    </field_page_type>
    <field_real_page_number>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
          <format type="NULL"></format>
          <safe_value>1</safe_value>
        </n0>
      </und>
    </field_real_page_number>
    <field_sequence_number>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_sequence_number>
    <field_service_copy>
      <und _numeric_keys="1">
        <n0>
          <fid type="NULL"></fid>
          <uid>1</uid>
          <filename>caspar.jpg</filename>
          <uri>public://caspar_0.jpg</uri>
          <filemime>image/jpeg</filemime>
          <filesize>1037696</filesize>
          <status>1</status>
          <timestamp>1383190972</timestamp>
          <uuid>db59f0c7-97b5-4ee4-a0b8-af1d1991ed87</uuid>
          <rdf_mapping _numeric_keys="1"></rdf_mapping>
          <alt></alt>
          <title></title>
          <width>2327</width>
          <height>2980</height>
          <node_export_file_url>http://localhost/books-1383190464/public%3A//caspar_0.jpg</node_export_file_url>
        </n0>
      </und>
    </field_service_copy>
    <field_visible>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_visible>
    <rdf_mapping>
      <rdftype _numeric_keys="1">
        <n0>sioc:Item</n0>
        <n1>foaf:Document</n1>
      </rdftype>
      <title>
        <predicates _numeric_keys="1">
          <n0>dc:title</n0>
        </predicates>
      </title>
      <created>
        <predicates _numeric_keys="1">
          <n0>dc:date</n0>
          <n1>dc:created</n1>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </created>
      <changed>
        <predicates _numeric_keys="1">
          <n0>dc:modified</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </changed>
      <body>
        <predicates _numeric_keys="1">
          <n0>content:encoded</n0>
        </predicates>
      </body>
      <uid>
        <predicates _numeric_keys="1">
          <n0>sioc:has_creator</n0>
        </predicates>
        <type>rel</type>
      </uid>
      <name>
        <predicates _numeric_keys="1">
          <n0>foaf:name</n0>
        </predicates>
      </name>
      <comment_count>
        <predicates _numeric_keys="1">
          <n0>sioc:num_replies</n0>
        </predicates>
        <datatype>xsd:integer</datatype>
      </comment_count>
      <last_activity>
        <predicates _numeric_keys="1">
          <n0>sioc:last_activity_date</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </last_activity>
    </rdf_mapping>
    <cid>0</cid>
    <last_comment_timestamp>1383190972</last_comment_timestamp>
    <last_comment_name type="NULL"></last_comment_name>
    <last_comment_uid>1</last_comment_uid>
    <comment_count>0</comment_count>
    <prevpage></prevpage>
    <nextpage></nextpage>
    <togglepage></togglepage>
    <name>aortiz</name>
    <picture>0</picture>
    <data>b:0;</data>
    <path>
      <pid>3</pid>
      <source>node/3</source>
      <alias>books/romanticism/1</alias>
      <language>und</language>
    </path>
    <menu type="NULL"></menu>
    <node_export_drupal_version>7</node_export_drupal_version>
  </node>
  <node>
    <vid>12</vid>
    <uid>1</uid>
    <title>Eruption of Vesuvius</title>
    <log></log>
    <status>1</status>
    <comment>1</comment>
    <promote>0</promote>
    <sticky>0</sticky>
    <vuuid>1f54ddd8-1c48-4ef3-bf5e-aac09e6b54e0</vuuid>
    <nid>12</nid>
    <type>dlts_book_page</type>
    <language>und</language>
    <created>1383193329</created>
    <changed>1383243996</changed>
    <tnid>0</tnid>
    <translate>0</translate>
    <uuid>42985dfc-1ff9-49fe-af91-f04610dcd267</uuid>
    <revision_timestamp>1383243996</revision_timestamp>
    <revision_uid>1</revision_uid>
    <field_book>
      <und _numeric_keys="1">
        <n0>
          <nid>2</nid>
        </n0>
      </und>
    </field_book>
    <field_cropped_master>
      <und _numeric_keys="1">
        <n0>
          <fid type="NULL"></fid>
          <uid>1</uid>
          <filename>vesuv.tif</filename>
          <uri>public://vesuv.tif</uri>
          <filemime>image/tiff</filemime>
          <filesize>9104948</filesize>
          <status>0</status>
          <timestamp>1383243996</timestamp>
          <uuid>7f6ec094-539f-4459-a1bb-8a1b3f8969ab</uuid>
          <rdf_mapping _numeric_keys="1"></rdf_mapping>
          <djakota_width>2024</djakota_width>
          <djakota_height>1494</djakota_height>
          <djakota_levels>5</djakota_levels>
          <djakota_dwtLevels>5</djakota_dwtLevels>
          <djakota_compositingLayerCount>1</djakota_compositingLayerCount>
          <width>2024</width>
          <height>1494</height>
          <node_export_file_url>http://localhost/books-1383190464/public%3A//vesuv.tif</node_export_file_url>
        </n0>
      </und>
    </field_cropped_master>
    <field_hand_side>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_hand_side>
    <field_is_part_of>
      <und _numeric_keys="1">
        <n0>
          <value>romanticism</value>
          <format type="NULL"></format>
          <safe_value>romanticism</safe_value>
        </n0>
      </und>
    </field_is_part_of>
    <field_ocr_text _numeric_keys="1"></field_ocr_text>
    <field_page_type>
      <und _numeric_keys="1">
        <n0>
          <value>0</value>
        </n0>
      </und>
    </field_page_type>
    <field_real_page_number>
      <und _numeric_keys="1">
        <n0>
          <value>10</value>
          <format type="NULL"></format>
          <safe_value>10</safe_value>
        </n0>
      </und>
    </field_real_page_number>
    <field_sequence_number>
      <und _numeric_keys="1">
        <n0>
          <value>10</value>
        </n0>
      </und>
    </field_sequence_number>
    <field_service_copy>
      <und _numeric_keys="1">
        <n0>
          <fid type="NULL"></fid>
          <uid>1</uid>
          <filename>vesuv.jpg</filename>
          <uri>public://vesuv.jpg</uri>
          <filemime>image/jpeg</filemime>
          <filesize>1409278</filesize>
          <status>1</status>
          <timestamp>1383193329</timestamp>
          <uuid>f4c2af19-af6c-4bc8-a95d-0df08bb9309a</uuid>
          <rdf_mapping _numeric_keys="1"></rdf_mapping>
          <alt></alt>
          <title></title>
          <width>2024</width>
          <height>1494</height>
          <node_export_file_url>http://localhost/books-1383190464/public%3A//vesuv.jpg</node_export_file_url>
        </n0>
      </und>
    </field_service_copy>
    <field_visible>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_visible>
    <rdf_mapping>
      <rdftype _numeric_keys="1">
        <n0>sioc:Item</n0>
        <n1>foaf:Document</n1>
      </rdftype>
      <title>
        <predicates _numeric_keys="1">
          <n0>dc:title</n0>
        </predicates>
      </title>
      <created>
        <predicates _numeric_keys="1">
          <n0>dc:date</n0>
          <n1>dc:created</n1>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </created>
      <changed>
        <predicates _numeric_keys="1">
          <n0>dc:modified</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </changed>
      <body>
        <predicates _numeric_keys="1">
          <n0>content:encoded</n0>
        </predicates>
      </body>
      <uid>
        <predicates _numeric_keys="1">
          <n0>sioc:has_creator</n0>
        </predicates>
        <type>rel</type>
      </uid>
      <name>
        <predicates _numeric_keys="1">
          <n0>foaf:name</n0>
        </predicates>
      </name>
      <comment_count>
        <predicates _numeric_keys="1">
          <n0>sioc:num_replies</n0>
        </predicates>
        <datatype>xsd:integer</datatype>
      </comment_count>
      <last_activity>
        <predicates _numeric_keys="1">
          <n0>sioc:last_activity_date</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </last_activity>
    </rdf_mapping>
    <cid>0</cid>
    <last_comment_timestamp>1383193329</last_comment_timestamp>
    <last_comment_name type="NULL"></last_comment_name>
    <last_comment_uid>1</last_comment_uid>
    <comment_count>0</comment_count>
    <prevpage></prevpage>
    <nextpage></nextpage>
    <togglepage></togglepage>
    <name>aortiz</name>
    <picture>0</picture>
    <data>b:0;</data>
    <path>
      <pid>12</pid>
      <source>node/12</source>
      <alias>books/romanticism/10</alias>
      <language>und</language>
    </path>
    <menu type="NULL"></menu>
    <node_export_drupal_version>7</node_export_drupal_version>
  </node>
  <node>
    <vid>11</vid>
    <uid>1</uid>
    <title>Crusaders Thirsting near Jerusalem</title>
    <log></log>
    <status>1</status>
    <comment>1</comment>
    <promote>0</promote>
    <sticky>0</sticky>
    <vuuid>1fe6fb0b-3101-4824-9696-459e1615f706</vuuid>
    <nid>11</nid>
    <type>dlts_book_page</type>
    <language>und</language>
    <created>1383193012</created>
    <changed>1383244009</changed>
    <tnid>0</tnid>
    <translate>0</translate>
    <uuid>470e6aaa-f787-4dca-b6a2-59a26c7d51c0</uuid>
    <revision_timestamp>1383244009</revision_timestamp>
    <revision_uid>1</revision_uid>
    <field_book>
      <und _numeric_keys="1">
        <n0>
          <nid>2</nid>
        </n0>
      </und>
    </field_book>
    <field_cropped_master>
      <und _numeric_keys="1">
        <n0>
          <fid type="NULL"></fid>
          <uid>1</uid>
          <filename>jerusalem.tif</filename>
          <uri>public://jerusalem.tif</uri>
          <filemime>image/tiff</filemime>
          <filesize>2657204</filesize>
          <status>0</status>
          <timestamp>1383244009</timestamp>
          <uuid>7c5de2cd-5b89-4f2b-a4b7-b4fc3d10a950</uuid>
          <rdf_mapping _numeric_keys="1"></rdf_mapping>
          <djakota_width>1253</djakota_width>
          <djakota_height>700</djakota_height>
          <djakota_levels>4</djakota_levels>
          <djakota_dwtLevels>4</djakota_dwtLevels>
          <djakota_compositingLayerCount>1</djakota_compositingLayerCount>
          <width>1253</width>
          <height>700</height>
          <node_export_file_url>http://localhost/books-1383190464/public%3A//jerusalem.tif</node_export_file_url>
        </n0>
      </und>
    </field_cropped_master>
    <field_hand_side>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_hand_side>
    <field_is_part_of>
      <und _numeric_keys="1">
        <n0>
          <value>romanticism</value>
          <format type="NULL"></format>
          <safe_value>romanticism</safe_value>
        </n0>
      </und>
    </field_is_part_of>
    <field_ocr_text _numeric_keys="1"></field_ocr_text>
    <field_page_type>
      <und _numeric_keys="1">
        <n0>
          <value>0</value>
        </n0>
      </und>
    </field_page_type>
    <field_real_page_number>
      <und _numeric_keys="1">
        <n0>
          <value>9</value>
          <format type="NULL"></format>
          <safe_value>9</safe_value>
        </n0>
      </und>
    </field_real_page_number>
    <field_sequence_number>
      <und _numeric_keys="1">
        <n0>
          <value>9</value>
        </n0>
      </und>
    </field_sequence_number>
    <field_service_copy>
      <und _numeric_keys="1">
        <n0>
          <fid type="NULL"></fid>
          <uid>1</uid>
          <filename>jerusalem.jpg</filename>
          <uri>public://jerusalem.jpg</uri>
          <filemime>image/jpeg</filemime>
          <filesize>135869</filesize>
          <status>1</status>
          <timestamp>1383193012</timestamp>
          <uuid>423d707c-91f4-4f7c-9142-b9ef9a660266</uuid>
          <rdf_mapping _numeric_keys="1"></rdf_mapping>
          <alt></alt>
          <title></title>
          <width>1253</width>
          <height>700</height>
          <node_export_file_url>http://localhost/books-1383190464/public%3A//jerusalem.jpg</node_export_file_url>
        </n0>
      </und>
    </field_service_copy>
    <field_visible>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_visible>
    <rdf_mapping>
      <rdftype _numeric_keys="1">
        <n0>sioc:Item</n0>
        <n1>foaf:Document</n1>
      </rdftype>
      <title>
        <predicates _numeric_keys="1">
          <n0>dc:title</n0>
        </predicates>
      </title>
      <created>
        <predicates _numeric_keys="1">
          <n0>dc:date</n0>
          <n1>dc:created</n1>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </created>
      <changed>
        <predicates _numeric_keys="1">
          <n0>dc:modified</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </changed>
      <body>
        <predicates _numeric_keys="1">
          <n0>content:encoded</n0>
        </predicates>
      </body>
      <uid>
        <predicates _numeric_keys="1">
          <n0>sioc:has_creator</n0>
        </predicates>
        <type>rel</type>
      </uid>
      <name>
        <predicates _numeric_keys="1">
          <n0>foaf:name</n0>
        </predicates>
      </name>
      <comment_count>
        <predicates _numeric_keys="1">
          <n0>sioc:num_replies</n0>
        </predicates>
        <datatype>xsd:integer</datatype>
      </comment_count>
      <last_activity>
        <predicates _numeric_keys="1">
          <n0>sioc:last_activity_date</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </last_activity>
    </rdf_mapping>
    <cid>0</cid>
    <last_comment_timestamp>1383193012</last_comment_timestamp>
    <last_comment_name type="NULL"></last_comment_name>
    <last_comment_uid>1</last_comment_uid>
    <comment_count>0</comment_count>
    <prevpage></prevpage>
    <nextpage></nextpage>
    <togglepage></togglepage>
    <name>aortiz</name>
    <picture>0</picture>
    <data>b:0;</data>
    <path>
      <pid>11</pid>
      <source>node/11</source>
      <alias>books/romanticism/9</alias>
      <language>und</language>
    </path>
    <menu type="NULL"></menu>
    <node_export_drupal_version>7</node_export_drupal_version>
  </node>
  <node>
    <vid>6</vid>
    <uid>1</uid>
    <title>ThevLady of Shallot</title>
    <log></log>
    <status>1</status>
    <comment>1</comment>
    <promote>0</promote>
    <sticky>0</sticky>
    <vuuid>5173795c-b77d-4162-9c4a-622e2e334a83</vuuid>
    <nid>6</nid>
    <type>dlts_book_page</type>
    <language>und</language>
    <created>1383191465</created>
    <changed>1383244139</changed>
    <tnid>0</tnid>
    <translate>0</translate>
    <uuid>502942f8-fae3-450a-8325-d0aee564dc44</uuid>
    <revision_timestamp>1383244139</revision_timestamp>
    <revision_uid>1</revision_uid>
    <field_book>
      <und _numeric_keys="1">
        <n0>
          <nid>2</nid>
        </n0>
      </und>
    </field_book>
    <field_cropped_master>
      <und _numeric_keys="1">
        <n0>
          <fid type="NULL"></fid>
          <uid>1</uid>
          <filename>lady-shallot.tif</filename>
          <uri>public://lady-shallot.tif</uri>
          <filemime>image/tiff</filemime>
          <filesize>3861312</filesize>
          <status>0</status>
          <timestamp>1383244139</timestamp>
          <uuid>8cb9a3a9-5bd5-471a-a2b6-b436668b9927</uuid>
          <rdf_mapping _numeric_keys="1"></rdf_mapping>
          <djakota_width>1296</djakota_width>
          <djakota_height>986</djakota_height>
          <djakota_levels>4</djakota_levels>
          <djakota_dwtLevels>4</djakota_dwtLevels>
          <djakota_compositingLayerCount>1</djakota_compositingLayerCount>
          <width>1296</width>
          <height>986</height>
          <node_export_file_url>http://localhost/books-1383190464/public%3A//lady-shallot.tif</node_export_file_url>
        </n0>
      </und>
    </field_cropped_master>
    <field_hand_side>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_hand_side>
    <field_is_part_of>
      <und _numeric_keys="1">
        <n0>
          <value>romanticism</value>
          <format type="NULL"></format>
          <safe_value>romanticism</safe_value>
        </n0>
      </und>
    </field_is_part_of>
    <field_ocr_text _numeric_keys="1"></field_ocr_text>
    <field_page_type>
      <und _numeric_keys="1">
        <n0>
          <value>0</value>
        </n0>
      </und>
    </field_page_type>
    <field_real_page_number>
      <und _numeric_keys="1">
        <n0>
          <value>4</value>
          <format type="NULL"></format>
          <safe_value>4</safe_value>
        </n0>
      </und>
    </field_real_page_number>
    <field_sequence_number>
      <und _numeric_keys="1">
        <n0>
          <value>4</value>
        </n0>
      </und>
    </field_sequence_number>
    <field_service_copy>
      <und _numeric_keys="1">
        <n0>
          <fid type="NULL"></fid>
          <uid>1</uid>
          <filename>lady-shallot.jpg</filename>
          <uri>public://lady-shallot.jpg</uri>
          <filemime>image/jpeg</filemime>
          <filesize>306507</filesize>
          <status>1</status>
          <timestamp>1383191465</timestamp>
          <uuid>1b20156b-a689-4c0c-90c1-489262888e89</uuid>
          <rdf_mapping _numeric_keys="1"></rdf_mapping>
          <alt></alt>
          <title></title>
          <width>1296</width>
          <height>986</height>
          <node_export_file_url>http://localhost/books-1383190464/public%3A//lady-shallot.jpg</node_export_file_url>
        </n0>
      </und>
    </field_service_copy>
    <field_visible>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_visible>
    <rdf_mapping>
      <rdftype _numeric_keys="1">
        <n0>sioc:Item</n0>
        <n1>foaf:Document</n1>
      </rdftype>
      <title>
        <predicates _numeric_keys="1">
          <n0>dc:title</n0>
        </predicates>
      </title>
      <created>
        <predicates _numeric_keys="1">
          <n0>dc:date</n0>
          <n1>dc:created</n1>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </created>
      <changed>
        <predicates _numeric_keys="1">
          <n0>dc:modified</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </changed>
      <body>
        <predicates _numeric_keys="1">
          <n0>content:encoded</n0>
        </predicates>
      </body>
      <uid>
        <predicates _numeric_keys="1">
          <n0>sioc:has_creator</n0>
        </predicates>
        <type>rel</type>
      </uid>
      <name>
        <predicates _numeric_keys="1">
          <n0>foaf:name</n0>
        </predicates>
      </name>
      <comment_count>
        <predicates _numeric_keys="1">
          <n0>sioc:num_replies</n0>
        </predicates>
        <datatype>xsd:integer</datatype>
      </comment_count>
      <last_activity>
        <predicates _numeric_keys="1">
          <n0>sioc:last_activity_date</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </last_activity>
    </rdf_mapping>
    <cid>0</cid>
    <last_comment_timestamp>1383191465</last_comment_timestamp>
    <last_comment_name type="NULL"></last_comment_name>
    <last_comment_uid>1</last_comment_uid>
    <comment_count>0</comment_count>
    <prevpage></prevpage>
    <nextpage></nextpage>
    <togglepage></togglepage>
    <name>aortiz</name>
    <picture>0</picture>
    <data>b:0;</data>
    <path>
      <pid>6</pid>
      <source>node/6</source>
      <alias>books/romanticism/4</alias>
      <language>und</language>
    </path>
    <menu type="NULL"></menu>
    <node_export_drupal_version>7</node_export_drupal_version>
  </node>
  <node>
    <vid>4</vid>
    <uid>1</uid>
    <title>The Fighting Temeraire</title>
    <log></log>
    <status>1</status>
    <comment>1</comment>
    <promote>0</promote>
    <sticky>0</sticky>
    <vuuid>8df15688-6f11-4e27-a69d-ff759064b9e7</vuuid>
    <nid>4</nid>
    <type>dlts_book_page</type>
    <language>und</language>
    <created>1383191102</created>
    <changed>1383244184</changed>
    <tnid>0</tnid>
    <translate>0</translate>
    <uuid>a8771341-e68c-458a-ab72-446c3da822c7</uuid>
    <revision_timestamp>1383244184</revision_timestamp>
    <revision_uid>1</revision_uid>
    <field_book>
      <und _numeric_keys="1">
        <n0>
          <nid>2</nid>
        </n0>
      </und>
    </field_book>
    <field_cropped_master>
      <und _numeric_keys="1">
        <n0>
          <fid type="NULL"></fid>
          <uid>1</uid>
          <filename>fighting.tif</filename>
          <uri>public://fighting.tif</uri>
          <filemime>image/tiff</filemime>
          <filesize>72086840</filesize>
          <status>0</status>
          <timestamp>1383244184</timestamp>
          <uuid>ca361ff7-6645-4a50-a416-ed8ba6a5eee1</uuid>
          <rdf_mapping _numeric_keys="1"></rdf_mapping>
          <djakota_width>5684</djakota_width>
          <djakota_height>4226</djakota_height>
          <djakota_levels>6</djakota_levels>
          <djakota_dwtLevels>6</djakota_dwtLevels>
          <djakota_compositingLayerCount>1</djakota_compositingLayerCount>
          <width>5684</width>
          <height>4226</height>
          <node_export_file_url>http://localhost/books-1383190464/public%3A//fighting.tif</node_export_file_url>
        </n0>
      </und>
    </field_cropped_master>
    <field_hand_side>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_hand_side>
    <field_is_part_of>
      <und _numeric_keys="1">
        <n0>
          <value>romanticism</value>
          <format type="NULL"></format>
          <safe_value>romanticism</safe_value>
        </n0>
      </und>
    </field_is_part_of>
    <field_ocr_text _numeric_keys="1"></field_ocr_text>
    <field_page_type>
      <und _numeric_keys="1">
        <n0>
          <value>0</value>
        </n0>
      </und>
    </field_page_type>
    <field_real_page_number>
      <und _numeric_keys="1">
        <n0>
          <value>2</value>
          <format type="NULL"></format>
          <safe_value>2</safe_value>
        </n0>
      </und>
    </field_real_page_number>
    <field_sequence_number>
      <und _numeric_keys="1">
        <n0>
          <value>2</value>
        </n0>
      </und>
    </field_sequence_number>
    <field_service_copy>
      <und _numeric_keys="1">
        <n0>
          <fid type="NULL"></fid>
          <uid>1</uid>
          <filename>fighting.jpg</filename>
          <uri>public://fighting.jpg</uri>
          <filemime>image/jpeg</filemime>
          <filesize>5103788</filesize>
          <status>1</status>
          <timestamp>1383191102</timestamp>
          <uuid>59bac09b-292f-4b0a-bfa6-3ce831fd6c81</uuid>
          <rdf_mapping _numeric_keys="1"></rdf_mapping>
          <alt></alt>
          <title></title>
          <width>5684</width>
          <height>4226</height>
          <node_export_file_url>http://localhost/books-1383190464/public%3A//fighting.jpg</node_export_file_url>
        </n0>
      </und>
    </field_service_copy>
    <field_visible>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_visible>
    <rdf_mapping>
      <rdftype _numeric_keys="1">
        <n0>sioc:Item</n0>
        <n1>foaf:Document</n1>
      </rdftype>
      <title>
        <predicates _numeric_keys="1">
          <n0>dc:title</n0>
        </predicates>
      </title>
      <created>
        <predicates _numeric_keys="1">
          <n0>dc:date</n0>
          <n1>dc:created</n1>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </created>
      <changed>
        <predicates _numeric_keys="1">
          <n0>dc:modified</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </changed>
      <body>
        <predicates _numeric_keys="1">
          <n0>content:encoded</n0>
        </predicates>
      </body>
      <uid>
        <predicates _numeric_keys="1">
          <n0>sioc:has_creator</n0>
        </predicates>
        <type>rel</type>
      </uid>
      <name>
        <predicates _numeric_keys="1">
          <n0>foaf:name</n0>
        </predicates>
      </name>
      <comment_count>
        <predicates _numeric_keys="1">
          <n0>sioc:num_replies</n0>
        </predicates>
        <datatype>xsd:integer</datatype>
      </comment_count>
      <last_activity>
        <predicates _numeric_keys="1">
          <n0>sioc:last_activity_date</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </last_activity>
    </rdf_mapping>
    <cid>0</cid>
    <last_comment_timestamp>1383191102</last_comment_timestamp>
    <last_comment_name type="NULL"></last_comment_name>
    <last_comment_uid>1</last_comment_uid>
    <comment_count>0</comment_count>
    <prevpage></prevpage>
    <nextpage></nextpage>
    <togglepage></togglepage>
    <name>aortiz</name>
    <picture>0</picture>
    <data>b:0;</data>
    <path>
      <pid>4</pid>
      <source>node/4</source>
      <alias>books/romanticism/2</alias>
      <language>und</language>
    </path>
    <menu type="NULL"></menu>
    <node_export_drupal_version>7</node_export_drupal_version>
  </node>
  <node>
    <vid>7</vid>
    <uid>1</uid>
    <title>The Poem of the Soul</title>
    <log></log>
    <status>1</status>
    <comment>1</comment>
    <promote>0</promote>
    <sticky>0</sticky>
    <vuuid>c9c3086d-bf40-4203-b5dc-6186479bce32</vuuid>
    <nid>7</nid>
    <type>dlts_book_page</type>
    <language>und</language>
    <created>1383191608</created>
    <changed>1383244110</changed>
    <tnid>0</tnid>
    <translate>0</translate>
    <uuid>b5253ce3-7f80-4e74-85c9-cdca30b926e3</uuid>
    <revision_timestamp>1383244110</revision_timestamp>
    <revision_uid>1</revision_uid>
    <field_book>
      <und _numeric_keys="1">
        <n0>
          <nid>2</nid>
        </n0>
      </und>
    </field_book>
    <field_cropped_master>
      <und _numeric_keys="1">
        <n0>
          <fid type="NULL"></fid>
          <uid>1</uid>
          <filename>le-poeme.tif</filename>
          <uri>public://le-poeme.tif</uri>
          <filemime>image/tiff</filemime>
          <filesize>45271612</filesize>
          <status>0</status>
          <timestamp>1383244110</timestamp>
          <uuid>4eb34e30-56b1-455f-a455-ecaa87ddb9c1</uuid>
          <rdf_mapping _numeric_keys="1"></rdf_mapping>
          <djakota_width>4438</djakota_width>
          <djakota_height>3398</djakota_height>
          <djakota_levels>6</djakota_levels>
          <djakota_dwtLevels>6</djakota_dwtLevels>
          <djakota_compositingLayerCount>1</djakota_compositingLayerCount>
          <width>4438</width>
          <height>3398</height>
          <node_export_file_url>http://localhost/books-1383190464/public%3A//le-poeme.tif</node_export_file_url>
        </n0>
      </und>
    </field_cropped_master>
    <field_hand_side>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_hand_side>
    <field_is_part_of>
      <und _numeric_keys="1">
        <n0>
          <value>romanticism</value>
          <format type="NULL"></format>
          <safe_value>romanticism</safe_value>
        </n0>
      </und>
    </field_is_part_of>
    <field_ocr_text _numeric_keys="1"></field_ocr_text>
    <field_page_type>
      <und _numeric_keys="1">
        <n0>
          <value>0</value>
        </n0>
      </und>
    </field_page_type>
    <field_real_page_number>
      <und _numeric_keys="1">
        <n0>
          <value>5</value>
          <format type="NULL"></format>
          <safe_value>5</safe_value>
        </n0>
      </und>
    </field_real_page_number>
    <field_sequence_number>
      <und _numeric_keys="1">
        <n0>
          <value>5</value>
        </n0>
      </und>
    </field_sequence_number>
    <field_service_copy>
      <und _numeric_keys="1">
        <n0>
          <fid type="NULL"></fid>
          <uid>1</uid>
          <filename>le-poeme.jpg</filename>
          <uri>public://le-poeme.jpg</uri>
          <filemime>image/jpeg</filemime>
          <filesize>1426989</filesize>
          <status>1</status>
          <timestamp>1383191608</timestamp>
          <uuid>d5a533e3-5d13-4a02-a31a-a7e58e1ed0c3</uuid>
          <rdf_mapping _numeric_keys="1"></rdf_mapping>
          <alt></alt>
          <title></title>
          <width>4438</width>
          <height>3398</height>
          <node_export_file_url>http://localhost/books-1383190464/public%3A//le-poeme.jpg</node_export_file_url>
        </n0>
      </und>
    </field_service_copy>
    <field_visible>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_visible>
    <rdf_mapping>
      <rdftype _numeric_keys="1">
        <n0>sioc:Item</n0>
        <n1>foaf:Document</n1>
      </rdftype>
      <title>
        <predicates _numeric_keys="1">
          <n0>dc:title</n0>
        </predicates>
      </title>
      <created>
        <predicates _numeric_keys="1">
          <n0>dc:date</n0>
          <n1>dc:created</n1>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </created>
      <changed>
        <predicates _numeric_keys="1">
          <n0>dc:modified</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </changed>
      <body>
        <predicates _numeric_keys="1">
          <n0>content:encoded</n0>
        </predicates>
      </body>
      <uid>
        <predicates _numeric_keys="1">
          <n0>sioc:has_creator</n0>
        </predicates>
        <type>rel</type>
      </uid>
      <name>
        <predicates _numeric_keys="1">
          <n0>foaf:name</n0>
        </predicates>
      </name>
      <comment_count>
        <predicates _numeric_keys="1">
          <n0>sioc:num_replies</n0>
        </predicates>
        <datatype>xsd:integer</datatype>
      </comment_count>
      <last_activity>
        <predicates _numeric_keys="1">
          <n0>sioc:last_activity_date</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </last_activity>
    </rdf_mapping>
    <cid>0</cid>
    <last_comment_timestamp>1383191608</last_comment_timestamp>
    <last_comment_name type="NULL"></last_comment_name>
    <last_comment_uid>1</last_comment_uid>
    <comment_count>0</comment_count>
    <prevpage></prevpage>
    <nextpage></nextpage>
    <togglepage></togglepage>
    <name>aortiz</name>
    <picture>0</picture>
    <data>b:0;</data>
    <path>
      <pid>7</pid>
      <source>node/7</source>
      <alias>books/romanticism/5</alias>
      <language>und</language>
    </path>
    <menu type="NULL"></menu>
    <node_export_drupal_version>7</node_export_drupal_version>
  </node>
  <node>
    <vid>8</vid>
    <uid>1</uid>
    <title>The Course of Empire The Savage State</title>
    <log></log>
    <status>1</status>
    <comment>1</comment>
    <promote>0</promote>
    <sticky>0</sticky>
    <vuuid>12e9c442-e46b-49ef-a3de-a2148c22b812</vuuid>
    <nid>8</nid>
    <type>dlts_book_page</type>
    <language>und</language>
    <created>1383191821</created>
    <changed>1383244089</changed>
    <tnid>0</tnid>
    <translate>0</translate>
    <uuid>c82d532d-7caa-426a-a866-eeb7cc11bb68</uuid>
    <revision_timestamp>1383244089</revision_timestamp>
    <revision_uid>1</revision_uid>
    <field_book>
      <und _numeric_keys="1">
        <n0>
          <nid>2</nid>
        </n0>
      </und>
    </field_book>
    <field_cropped_master>
      <und _numeric_keys="1">
        <n0>
          <fid type="NULL"></fid>
          <uid>1</uid>
          <filename>savage.tif</filename>
          <uri>public://savage.tif</uri>
          <filemime>image/tiff</filemime>
          <filesize>2415256</filesize>
          <status>0</status>
          <timestamp>1383244089</timestamp>
          <uuid>22056e15-1df0-4b98-a3e4-78e53c1def09</uuid>
          <rdf_mapping _numeric_keys="1"></rdf_mapping>
          <djakota_width>1142</djakota_width>
          <djakota_height>698</djakota_height>
          <djakota_levels>4</djakota_levels>
          <djakota_dwtLevels>4</djakota_dwtLevels>
          <djakota_compositingLayerCount>1</djakota_compositingLayerCount>
          <width>1142</width>
          <height>698</height>
          <node_export_file_url>http://localhost/books-1383190464/public%3A//savage.tif</node_export_file_url>
        </n0>
      </und>
    </field_cropped_master>
    <field_hand_side>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_hand_side>
    <field_is_part_of>
      <und _numeric_keys="1">
        <n0>
          <value>romanticism</value>
          <format type="NULL"></format>
          <safe_value>romanticism</safe_value>
        </n0>
      </und>
    </field_is_part_of>
    <field_ocr_text _numeric_keys="1"></field_ocr_text>
    <field_page_type>
      <und _numeric_keys="1">
        <n0>
          <value>0</value>
        </n0>
      </und>
    </field_page_type>
    <field_real_page_number>
      <und _numeric_keys="1">
        <n0>
          <value>6</value>
          <format type="NULL"></format>
          <safe_value>6</safe_value>
        </n0>
      </und>
    </field_real_page_number>
    <field_sequence_number>
      <und _numeric_keys="1">
        <n0>
          <value>6</value>
        </n0>
      </und>
    </field_sequence_number>
    <field_service_copy>
      <und _numeric_keys="1">
        <n0>
          <fid type="NULL"></fid>
          <uid>1</uid>
          <filename>savage.jpg</filename>
          <uri>public://savage.jpg</uri>
          <filemime>image/jpeg</filemime>
          <filesize>519211</filesize>
          <status>1</status>
          <timestamp>1383191821</timestamp>
          <uuid>98285185-5ed3-4fd8-ae3b-fa09db9fcbb6</uuid>
          <rdf_mapping _numeric_keys="1"></rdf_mapping>
          <alt></alt>
          <title></title>
          <width>1142</width>
          <height>698</height>
          <node_export_file_url>http://localhost/books-1383190464/public%3A//savage.jpg</node_export_file_url>
        </n0>
      </und>
    </field_service_copy>
    <field_visible>
      <und _numeric_keys="1">
        <n0>
          <value>1</value>
        </n0>
      </und>
    </field_visible>
    <rdf_mapping>
      <rdftype _numeric_keys="1">
        <n0>sioc:Item</n0>
        <n1>foaf:Document</n1>
      </rdftype>
      <title>
        <predicates _numeric_keys="1">
          <n0>dc:title</n0>
        </predicates>
      </title>
      <created>
        <predicates _numeric_keys="1">
          <n0>dc:date</n0>
          <n1>dc:created</n1>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </created>
      <changed>
        <predicates _numeric_keys="1">
          <n0>dc:modified</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </changed>
      <body>
        <predicates _numeric_keys="1">
          <n0>content:encoded</n0>
        </predicates>
      </body>
      <uid>
        <predicates _numeric_keys="1">
          <n0>sioc:has_creator</n0>
        </predicates>
        <type>rel</type>
      </uid>
      <name>
        <predicates _numeric_keys="1">
          <n0>foaf:name</n0>
        </predicates>
      </name>
      <comment_count>
        <predicates _numeric_keys="1">
          <n0>sioc:num_replies</n0>
        </predicates>
        <datatype>xsd:integer</datatype>
      </comment_count>
      <last_activity>
        <predicates _numeric_keys="1">
          <n0>sioc:last_activity_date</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </last_activity>
    </rdf_mapping>
    <cid>0</cid>
    <last_comment_timestamp>1383191821</last_comment_timestamp>
    <last_comment_name type="NULL"></last_comment_name>
    <last_comment_uid>1</last_comment_uid>
    <comment_count>0</comment_count>
    <prevpage></prevpage>
    <nextpage></nextpage>
    <togglepage></togglepage>
    <name>aortiz</name>
    <picture>0</picture>
    <data>b:0;</data>
    <path>
      <pid>8</pid>
      <source>node/8</source>
      <alias>books/romanticism/6</alias>
      <language>und</language>
    </path>
    <menu type="NULL"></menu>
    <node_export_drupal_version>7</node_export_drupal_version>
  </node>
  <node>
    <vid>1</vid>
    <uid>1</uid>
    <title>Eras</title>
    <log></log>
    <status>1</status>
    <comment>1</comment>
    <promote>0</promote>
    <sticky>0</sticky>
    <vuuid>ffbda6e4-c2d5-427a-a549-1dcfe8f5eabc</vuuid>
    <nid>1</nid>
    <type>collection</type>
    <language>und</language>
    <created>1383190667</created>
    <changed>1383190701</changed>
    <tnid>0</tnid>
    <translate>0</translate>
    <uuid>f6e60ee4-3658-4122-a61d-7c4c980b7a12</uuid>
    <revision_timestamp>1383190701</revision_timestamp>
    <revision_uid>1</revision_uid>
    <field_identifier>
      <und _numeric_keys="1">
        <n0>
          <value>eras</value>
          <format type="NULL"></format>
          <safe_value>eras</safe_value>
        </n0>
      </und>
    </field_identifier>
    <rdf_mapping>
      <rdftype _numeric_keys="1">
        <n0>sioc:Item</n0>
        <n1>foaf:Document</n1>
      </rdftype>
      <title>
        <predicates _numeric_keys="1">
          <n0>dc:title</n0>
        </predicates>
      </title>
      <created>
        <predicates _numeric_keys="1">
          <n0>dc:date</n0>
          <n1>dc:created</n1>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </created>
      <changed>
        <predicates _numeric_keys="1">
          <n0>dc:modified</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </changed>
      <body>
        <predicates _numeric_keys="1">
          <n0>content:encoded</n0>
        </predicates>
      </body>
      <uid>
        <predicates _numeric_keys="1">
          <n0>sioc:has_creator</n0>
        </predicates>
        <type>rel</type>
      </uid>
      <name>
        <predicates _numeric_keys="1">
          <n0>foaf:name</n0>
        </predicates>
      </name>
      <comment_count>
        <predicates _numeric_keys="1">
          <n0>sioc:num_replies</n0>
        </predicates>
        <datatype>xsd:integer</datatype>
      </comment_count>
      <last_activity>
        <predicates _numeric_keys="1">
          <n0>sioc:last_activity_date</n0>
        </predicates>
        <datatype>xsd:dateTime</datatype>
        <callback>date_iso8601</callback>
      </last_activity>
    </rdf_mapping>
    <cid>0</cid>
    <last_comment_timestamp>1383190667</last_comment_timestamp>
    <last_comment_name type="NULL"></last_comment_name>
    <last_comment_uid>1</last_comment_uid>
    <comment_count>0</comment_count>
    <name>aortiz</name>
    <picture>0</picture>
    <data>b:0;</data>
    <path>
      <pid>1</pid>
      <source>node/1</source>
      <alias>eras</alias>
      <language>und</language>
    </path>
    <menu type="NULL"></menu>
    <node_export_drupal_version>7</node_export_drupal_version>
  </node>
</node_export>',
);
  return $node_export;
}
