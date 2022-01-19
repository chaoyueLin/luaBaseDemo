
//g++ luaDemo.cpp -std=c++11 -I/usr/local/include/luajit-2.1 -I/usr/local/include/LuaBridge -lluajit-5.1 -ldl -o a.out

#include <cassert>
#include <iostream>
#include <memory>

extern "C"
{
#include <luajit.h>
#include <lualib.h>
#include <lauxlib.h>
}

#include <LuaBridge/LuaBridge.h>
//namespace lua = luabridge;
using namespace luabridge;

using namespace std;

auto make_luavm = []()
{
    std::shared_ptr<lua_State> vm(
        luaL_newstate(), lua_close);
    assert(vm);

    luaL_openlibs(vm.get());

    return vm;
};

#define L vm.get()

void case1()
{
    //MyLuaState L;
    auto vm = make_luavm();

    auto package = getGlobal(L, "package");

    string path = package["path"];
    string cpath = package["cpath"];

    cout << path << endl;
    cout << cpath << endl;
}
void case2()
{
    //MyLuaState L;
    auto vm = make_luavm();

    int status;

    status = luaL_dostring(L, "print('hello lua')");
}

int main()
{
    case1();
    case2();

    cout << "luajit demo" << endl;
}