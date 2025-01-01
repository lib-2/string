cmake_minimum_required(VERSION 3.0)

project(G_2_string VERSION 1.0 LANGUAGES C)

set(SOURCES
  src/string.c
)

add_library(G_2_string_static STATIC ${SOURCES})
set_target_properties(G_2_string_static PROPERTIES
  OUTPUT_NAME "-2_string"
  POSITION_INDEPENDENT_CODE ON
)

add_library(G_2_string_shared SHARED ${SOURCES})
set_target_properties(G_2_string_shared PROPERTIES
  OUTPUT_NAME "-2_string"
  VERSION ${PROJECT_VERSION}
  SOVERSION ${PROJECT_VERSION_MAJOR}
)

target_include_directories(G_2_string_static
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/external_include
)

target_include_directories(G_2_string_shared
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/external_include
)

target_compile_definitions(G_2_string_static
  PRIVATE G_SHARED=0
)

target_compile_definitions(G_2_string_shared
  PRIVATE G_SHARED=1
)

install(TARGETS G_2_string_static G_2_string_shared
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(
  FILES
    include/-2_string.h
    include/-2_string_types.h
    include/-2_string_macros.h
  DESTINATION
    include
)
