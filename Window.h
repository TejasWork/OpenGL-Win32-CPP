#pragma once

#ifndef WINDOW_H
#define WINDOW_H

#include <Windows.h>
#include "DataStructures.h"

#define WINDOW_STYLE_DEFAULT WS_OVERLAPPEDWINDOW
#define WINDOW_STYLE_NONE 0
#define WINDOW_STYLE_RESIZEABLE WS_THICKFRAME
#define WINDOW_STYLE_TITLE_BAR WS_CAPTION
#define WINDOW_STYLE_CLOSE_BUTTON WS_SYSMENU | WS_CAPTION
#define WINDOW_STYLE_MINIMIZE_BUTTON WS_MINIMIZEBOX | WS_SYSMENU | WS_CAPTION
#define WINDOW_STYLE_MAXIMIZE_BUTTON WS_MAXIMIZEBOX | WS_SYSMENU | WS_CAPTION

#define MESSAGE_BOX_OK MB_OK
#define MESSAGE_BOX_OK_CANCEL MB_OKCANCEL
#define MESSAGE_BOX_ABORT_RETRY_IGNORE MB_ABORTRETRYIGNORE
#define MESSAGE_BOX_YES_NO_CANCEL MB_YESNOCANCEL
#define MESSAGE_BOX_YES_NO MB_YESNO
#define MESSAGE_BOX_RETRY_CANCEL MB_RETRYCANCEL
#define MESSAGE_BOX_CANCEL_TRY_CONTINUE MB_CANCELTRYCONTINUE

#define MESSAGE_BOX_ICON_EXCLAMATION MB_ICONEXCLAMATION
#define MESSAGE_BOX_ICON_WARNING MB_ICONWARNING
#define MESSAGE_BOX_ICON_INFORMATION MB_ICONINFORMATION
#define MESSAGE_BOX_ICON_ASTERISK MB_ICONASTERISK
#define MESSAGE_BOX_ICON_QUESTION MB_ICONQUESTION
#define MESSAGE_BOX_ICON_STOP MB_ICONSTOP
#define MESSAGE_BOX_ICON_ERROR MB_ICONERROR
#define MESSAGE_BOX_ICON_HAND MB_ICONHAND

#define MESSAGE_BOX_DEFAULT_BUTTON_1 MB_DEFBUTTON1
#define MESSAGE_BOX_DEFAULT_BUTTON_2 MB_DEFBUTTON2
#define MESSAGE_BOX_DEFAULT_BUTTON_3 MB_DEFBUTTON3
#define MESSAGE_BOX_DEFAULT_BUTTON_4 MB_DEFBUTTON4

#define MESSAGE_BOX_APP_L_MODAL MB_APPLMODAL
#define MESSAGE_BOX_SYSTEM_MODAL MB_SYSTEMMODAL
#define MESSAGE_BOX_TASK_MODEL MB_TASKMODAL

Size GetPrimaryMonitorSize();
void CursorPosition(const Coordinate& coordinate);
Coordinate CursorPosition();

int MESSAGE_BOX(const char* text, const char* caption, const unsigned int& flags);
HCURSOR LOAD_HCURSOR(const char* cursor_path);

class Window{
private:
    const char* class_name;
    unsigned int show_window_command;
public:
    HWND hwnd = nullptr;
    HINSTANCE hinstance = nullptr;
    unsigned int window_style;
    MSG msg = {};
    bool should_close = false;
    bool focused = true;
    bool closed = false;
    Window(const char* class_name, const char* title = "Window", const unsigned int& window_style = WINDOW_STYLE_DEFAULT, const RECTANGLE& window_dimensions = RECTANGLE(480, 270, 960, 540), const bool& client_dimensions = true, const char* icon_path = "");
    void title(const char* title);
	void show();
	void hide();
	void normal();
	void maximize();
	void minimize();
	bool process_messages();
	void style(const unsigned int& window_style, const bool& client_dimensions = true);
	void close();
	Size size();
    void size(const Size& size);
    Coordinate position();
    void position(const Coordinate& coordinate);
    RECTANGLE dimension();
    void dimension(const RECTANGLE& rectangle);
    RECTANGLE window_dimension();
    void window_dimension(const RECTANGLE& rectangle);
    Coordinate cursor_position();
	void no_top_most();
	void top_most();
	void bottom();
	void top();
    int message_box(const char* text, const char* caption, const unsigned int& flags);
    ~Window();
};

#endif