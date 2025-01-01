@echo off

setlocal EnableDelayedExpansion

set "directory=%cd%"
set "escapedDirectory=!directory:\=\\!"

(echo [^{"directory":"!escapedDirectory!","arguments":["clangd","-DG_SHARED=1","-Iinclude","-Iexternal_include","-x","c","-std=c99","-Wall","-Wextra","-Werror","-pedantic","-c","file.c","-o","file.o"],"file":"file.c"^}]) > compile_commands.json