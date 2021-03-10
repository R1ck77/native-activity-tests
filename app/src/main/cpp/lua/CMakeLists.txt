#add_library(lua
#  STATIC
#  lapi.c lauxlib.c lbaselib.c lcode.c lcorolib.c lctype.c ldblib.c
#  ldebug.c ldo.c ldump.c lfunc.c lgc.c linit.c liolib.c llex.c
#  lmathlib.c lmem.c loadlib.c lobject.c lopcodes.c loslib.c lparser.c
#  lstate.c lstring.c lstrlib.c ltable.c ltablib.c ltm.c lundump.c
#  lutf8lib.c lvm.c lzio.c)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11 -Wall -Werror")
add_definitions(-DLUA_USE_C89)
add_library(luashared
  SHARED
  lapi.c lauxlib.c lbaselib.c lcode.c lcorolib.c lctype.c ldblib.c
  ldebug.c ldo.c ldump.c lfunc.c lgc.c linit.c liolib.c llex.c
  lmathlib.c lmem.c loadlib.c lobject.c lopcodes.c loslib.c lparser.c
  lstate.c lstring.c lstrlib.c ltable.c ltablib.c ltm.c lundump.c
  lutf8lib.c lvm.c lzio.c)

