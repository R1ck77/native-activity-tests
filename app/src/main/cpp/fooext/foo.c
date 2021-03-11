#include <lua.h>
#include <lauxlib.h>

#include <GLES/gl.h>

static int foo_sum(lua_State *L)
{
  int value = luaL_checkinteger(L, 1);
  lua_pushinteger(L, value + 1);
  return 1;
}

static int foo_draw_gl_color(lua_State *L)
{
  float r = luaL_checknumber(L, 1);
  float g = luaL_checknumber(L, 2);
  float b = luaL_checknumber(L, 3);

  glClearColor(r, g, b, 1);
  glClear(GL_COLOR_BUFFER_BIT);

  return 0;
}

static const struct luaL_Reg foolib[] = {
  {"sum", foo_sum},
  {"draw_gl_color", foo_draw_gl_color},
  {NULL, NULL}
};

int luaopen_foo(lua_State *L)
{
  luaL_newlib(L, foolib);
  return 1;
}
