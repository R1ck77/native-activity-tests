#include <lua.h>
#include <lauxlib.h>

static int foo_sum(lua_State *L)
{
  int value = luaL_checkinteger(L, 1);
  lua_pushinteger(L, value + 1);
  return 1;
}

static const struct luaL_Reg foolib[] = {
  {"sum", foo_sum},
  {NULL, NULL}
};

int luaopen_foo(lua_State *L) {
  luaL_newlib(L, foolib);
  return 1;
}


