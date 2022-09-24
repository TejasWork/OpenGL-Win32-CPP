@echo off
@REM you need call vcvars64.bat before executing this batch file or execute it in developer command prompt for vs.
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