#include "OpenGL.h"

PIXELFORMATDESCRIPTOR pixel_format_descriptor = { 
	sizeof(PIXELFORMATDESCRIPTOR), //  size of this pfd  
	1,                             // version number  
	PFD_DRAW_TO_WINDOW |           // support window  
	PFD_SUPPORT_OPENGL |           // support OpenGL  
	PFD_DOUBLEBUFFER,              // double buffered  
	PFD_TYPE_RGBA,                 // RGBA type  
	24,                            // 24-bit color depth  
	0, 0, 0, 0, 0, 0,              // color bits ignored  
	0,                             // no alpha buffer  
	0,                             // shift bit ignored  
	0,                             // no accumulation buffer  
	0, 0, 0, 0,                    // accum bits ignored  
	32,                            // 32-bit z-buffer      
	0,                             // no stencil buffer  
	0,                             // no auxiliary buffer  
	PFD_MAIN_PLANE,                // main layer  
	0,                             // reserved  
	0, 0, 0                        // layer masks ignored  
};

bool loaded = false;

OpenGLContext::OpenGLContext(Window &window){
    hwnd = window.hwnd;
    if (!hwnd) throw "OpenGL.OpenGL: Error getting window handle.";
    hdc = GetDC(window.hwnd);
    if (!hdc) throw "OpenGL.OpenGL: Error getting handle to device context.";
	if (!SetPixelFormat(hdc, ChoosePixelFormat(hdc, &pixel_format_descriptor), &pixel_format_descriptor)) throw "OpenGL.OpenGL: Error setting pixel format.";
    hglrc = wglCreateContext(hdc);
    if (!hglrc) throw "OpenGL.OpenGL: Error creating OpenGL context.";
    make_current();
    if (!loaded){
        loaded = true;
	    if (!gladLoadGL()) throw "OpenGL.make_current: Failed loading OpenGL.";
    }
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}

void OpenGLContext::make_current(){
    if (!wglMakeCurrent(hdc, hglrc)) throw "OpenGL.make_current: Error setting contex current.";
}

void OpenGLContext::swap_buffers(){
    if (!SwapBuffers(hdc)) throw "OpenGL.swap_buffers: Error swapping buffers.";
}

void OpenGLContext::close(){
    if (!closed){
        closed = true;
        if (!ReleaseDC(hwnd, hdc)) throw "OpenGL.close: Error releasing handle to device context.";
        if (!wglDeleteContext(hglrc)) throw "OpenGL.close: Error deleting OpenGL context.";
    }
}

OpenGLContext::~OpenGLContext(){
    if (!closed){
        ReleaseDC(hwnd, hdc);
        wglDeleteContext(hglrc);
    }
}