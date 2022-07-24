#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "OpenColorIO" for configuration "Release"
set_property(TARGET OpenColorIO APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(OpenColorIO PROPERTIES
  IMPORTED_IMPLIB_RELEASE "C:/Program Files/USD_21_8/lib/OpenColorIO.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TINYXML_LIB;YAML_CPP_LIB"
  IMPORTED_LOCATION_RELEASE "C:/Program Files/USD_21_8/bin/OpenColorIO.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS OpenColorIO )
list(APPEND _IMPORT_CHECK_FILES_FOR_OpenColorIO "C:/Program Files/USD_21_8/lib/OpenColorIO.lib" "C:/Program Files/USD_21_8/bin/OpenColorIO.dll" )

# Import target "OpenColorIO_STATIC" for configuration "Release"
set_property(TARGET OpenColorIO_STATIC APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(OpenColorIO_STATIC PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "TINYXML_LIB;YAML_CPP_LIB"
  IMPORTED_LOCATION_RELEASE "C:/Program Files/USD_21_8/lib/static/OpenColorIO.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS OpenColorIO_STATIC )
list(APPEND _IMPORT_CHECK_FILES_FOR_OpenColorIO_STATIC "C:/Program Files/USD_21_8/lib/static/OpenColorIO.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
