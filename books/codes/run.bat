@echo off

if %1 == "" (
    echo no parameters
) else (
    echo compile and run %1
    g++ -Wall %1
    a.exe
)