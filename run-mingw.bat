@echo off
g++ main.cpp include/glad/glad.c DataStructures.cpp Window.cpp Trigonometry.cpp OpenGL.cpp -o main -I include -lopengl32 -lgdi32 && cls && main.exe