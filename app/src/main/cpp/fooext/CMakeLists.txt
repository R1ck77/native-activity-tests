set(distribution_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../libs)
add_library(luashared SHARED IMPORTED)
set_target_properties(luashared PROPERTIES IMPORTED_LOCATION
  ${distribution_DIR}/${ANDROID_ABI}/libluashared.so)

include_directories(lua)
add_library(foo SHARED foo.c)
target_link_libraries(foo luashared GLESv1_CM)
