add_subdirectory(lua)
include_directories(lua)
add_library(foo SHARED foo.c)
target_link_libraries(foo luashared GLESv1_CM)
