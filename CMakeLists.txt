cmake_minimum_required(VERSION 3.10)

project(G_2_string VERSION 1.0 LANGUAGES C)

set(SOURCES
  src/string.c
)

add_library(G_2_string STATIC ${SOURCES})
set_target_properties(G_2_string PROPERTIES
  OUTPUT_NAME "-2_string"
)

target_include_directories(G_2_string
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/external_include
)

install(TARGETS G_2_string
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(
  FILES
    include/-2_string.h
  DESTINATION
    include
)

install(
  FILES
    include/-2/string.h
    include/-2/string_types.h
    include/-2/string_macros.h
  DESTINATION
    include/-2
)
