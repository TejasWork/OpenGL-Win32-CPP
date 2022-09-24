#include "Window.h"

Size GetPrimaryMonitorWidth(){
    return Size(GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN));
}

void CursorPosition(const Coordinate& coordinate){
    if (!SetCursorPos(coordinate.x, coordinate.y)) throw "CursorPosition: Failed setting cursor position.";
}

Coordinate CursorPosition(){
    POINT point;
	if (!GetCursorPos(&point)) throw "CursorPosition: Failed getting cursor position.";
	return Coordinate(point.x, point.y);
}

int MESSAGE_BOX(const char* text, const char* caption, const unsigned int& flags){
    return MessageBoxA(nullptr, text, caption, flags);
}

HCURSOR LOAD_HCURSOR(const char* cursor_path){
	return (HCURSOR)LoadImageA(nullptr, cursor_path, IMAGE_ICON, 0, 0, LR_DEFAULTSIZE | LR_LOADFROMFILE);
}

unsigned int window_messages = WM_NULL;
LRESULT CALLBACK wndproc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam) {
	window_messages = message;

	switch (message)
	{
	    case WM_CLOSE:
	    case WM_DESTROY:
	    	return 0;
	}
	return DefWindowProcA(hwnd, message, wparam, lparam);
}

Window::Window(const char* class_name, const char* title, const unsigned int& window_style, const RECTANGLE& window_dimensions, const bool& client_dimensions, const char* icon_path){
	this->class_name = class_name;

	WNDCLASSA wndclassa = {};
	wndclassa.lpszClassName = class_name;
	wndclassa.hInstance = this->hinstance;
	wndclassa.lpfnWndProc = wndproc;
	HANDLE icon = LoadImageA(nullptr, icon_path, IMAGE_ICON, 0, 0, LR_DEFAULTSIZE | LR_LOADFROMFILE);
	if (icon) wndclassa.hIcon = (HICON)icon;

	if (!RegisterClassA(&wndclassa)) throw "Window.Window: Error registering class.";

	this->window_style = window_style;
    
	RECT _window_dimensions_;
	_window_dimensions_.left = window_dimensions.x;
	_window_dimensions_.top = window_dimensions.y;
	_window_dimensions_.right = window_dimensions.x + window_dimensions.width;
	_window_dimensions_.bottom = window_dimensions.y + window_dimensions.height;

	if (client_dimensions) {
		AdjustWindowRect(&_window_dimensions_, window_style, false);
	}

	int x = _window_dimensions_.left,
		y = _window_dimensions_.top,
		width = _window_dimensions_.right - _window_dimensions_.left,
		height = _window_dimensions_.bottom - _window_dimensions_.top;

	hwnd = CreateWindowA(
		class_name,
		title,
		0,
		x,
		y,
		width,
		height,
		nullptr,
		nullptr,
		hinstance,
		nullptr
		);

    if (!hwnd) throw "Window.Window: Error creating window";

	SetWindowPos(hwnd, nullptr, x, y, width, height, SWP_FRAMECHANGED);
	SetWindowLongA(hwnd, GWL_STYLE, window_style);
}

void Window::style(const unsigned int& window_style, const bool& client_dimensions){
	this->window_style = window_style;

	if (client_dimensions) {
		RECT _window_dimensions_client_, _window_dimensions_;
		if (!GetClientRect(hwnd, &_window_dimensions_client_)) throw "Window.style: Error getting window client dimensions.";
		if (!GetWindowRect(hwnd, &_window_dimensions_)) throw "Window.style: Error getting window dimensions.";

		SetWindowLongW(hwnd, GWL_STYLE, window_style);

		if (!AdjustWindowRect(&_window_dimensions_client_, window_style, 0)) throw "Window.style: Error converting window dimensions to window client dimensions.";
		if (!SetWindowPos(hwnd, nullptr, _window_dimensions_.left, _window_dimensions_.top, _window_dimensions_client_.right - _window_dimensions_client_.left, _window_dimensions_client_.bottom - _window_dimensions_client_.top, SWP_FRAMECHANGED)) throw "Window.style: Failed setting window dimensions.";
	}
	else {
		SetWindowLongW(hwnd, GWL_STYLE, window_style);
	}

	ShowWindow(hwnd, show_window_command);
}

void Window::title(const char* title){
    if (!SetWindowTextA(hwnd, title)) throw "Window.title: Error setting title.";
}

void Window::show(){
    ShowWindow(hwnd, SW_SHOW);
    show_window_command = SW_SHOW;
}

void Window::hide(){
    ShowWindow(hwnd, SW_HIDE);
    show_window_command = SW_HIDE;
}

void Window::minimize(){
    ShowWindow(hwnd, SW_MINIMIZE);
    show_window_command = SW_MINIMIZE;
}

void Window::maximize(){
    ShowWindow(hwnd, SW_MAXIMIZE);
    show_window_command = SW_MAXIMIZE;
}

void Window::normal(){
    ShowWindow(hwnd, SW_NORMAL);
    show_window_command = SW_NORMAL;
}

void Window::top_most(){
	if (!SetWindowPos(hwnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE)) throw "Window.top_most: Error setting top most window.";
}

void Window::top() {
	if (!SetWindowPos(hwnd, HWND_TOP, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE)) throw "Window.top: Error setting top window.";
}

void Window::no_top_most() {
	if (!SetWindowPos(hwnd, HWND_NOTOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE)) throw "Window.no_top_most: Error setting no top most window.";
}

void Window::bottom() {
	if (!SetWindowPos(hwnd, HWND_BOTTOM, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE)) throw "Window.bottom: Error setting bottom window.";
}

bool Window::process_messages(){
	if (PeekMessageA(&msg, hwnd, 0, 0, PM_REMOVE)) {
		TranslateMessage(&msg);
		DispatchMessageA(&msg);
		should_close = false;
		switch (window_messages)
		{
		case WM_CLOSE:
			should_close = true;
		case WM_SETFOCUS:
			focused = true;
		case WM_KILLFOCUS:
			focused = false;
		default:
			break;
		}
		return true;
	}
	return false;
}

Size Window::size(){
	RECT client_size;
	if (!GetClientRect(hwnd, &client_size)) throw "Window.size: Error getting window client size.";
	return Size(client_size.right, client_size.bottom);
}

RECTANGLE Window::window_dimensions(){
	RECT _window_dimensions_;
	if (!GetWindowRect(hwnd, &_window_dimensions_)) throw "Window.window_dimensions: Error getting window dimensions.";
	return RECTANGLE(
		_window_dimensions_.left,
		_window_dimensions_.top,
        _window_dimensions_.right - _window_dimensions_.left,
		_window_dimensions_.bottom - _window_dimensions_.top
	);
}

void Window::window_dimensions(const RECTANGLE& rectangle){
    if (!MoveWindow(hwnd, rectangle.x, rectangle.y, rectangle.width, rectangle.height, false)) throw "Window.window_dimensions: Error setting window dimensions.";
}

Coordinate Window::cursor_position(){
	POINT point;
	if (!GetCursorPos(&point)) throw "Window.cursor_position: Error getting cursor position.";
	if (!ScreenToClient(hwnd, &point)) throw "Window.cursor_position: Error converting cursor position of window client.";
	return Coordinate(point.x, point.y);
}

int Window::message_box(const char* text, const char* caption, const unsigned int& flags){
    return MessageBoxA(hwnd, text, caption, flags);
}

void Window::close() {
	if (!DestroyWindow(hwnd)) throw "Window.close: Error destroying window.";
	if (!UnregisterClassA(class_name, hinstance)) throw "Window.close: Error unregistering class.";
	closed = true;
}

Window::~Window() {
	if (!closed) {
		DestroyWindow(hwnd);
		UnregisterClassA(class_name, hinstance);
	}
}