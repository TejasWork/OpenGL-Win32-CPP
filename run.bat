@echo off
if [%1]==[] goto compile-run
call "C:\\Program Files\\Microsoft Visual Studio\\%%1%\\Community\\VC\\Auxiliary\\Build\\vcvars64.bat"
:compile-run
if exist main.exe (
    del main.exe
)
cl /EHsc /Fo"object files\\" main.cpp include/glad/glad.c DataStructures.cpp Window.cpp Trigonometry.cpp OpenGL.cpp /I include /link user32.lib gdi32.lib opengl32.lib
if exist main.exe (
    cls
    main.exe
) else (
    echo:
    echo ERROR
)