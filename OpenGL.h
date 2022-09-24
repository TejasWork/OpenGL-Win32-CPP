#pragma once

#ifndef OPENGL_H
#define OPENGL_H

#include "Window.h"
#include <glad/glad.h>

class OpenGLContext{
private:
    bool closed = false;
public:
    HGLRC hglrc = nullptr;
    HDC hdc = nullptr;
    HWND hwnd = nullptr;
    OpenGLContext(Window &window);
    void make_current();
    void swap_buffers();
    void close();
    ~OpenGLContext();
};

#endif