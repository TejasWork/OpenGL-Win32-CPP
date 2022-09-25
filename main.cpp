#include <iostream>
#include "Window.h"
#include "OpenGL.h"
#include "Trigonometry.h"
#include <vector>
using namespace std;

#define ARROW_HCURSOR LoadCursorA(nullptr, MAKEINTRESOURCEA(32512))

int main(){

	try{
	
    Window window("OpenGL with Win32");
	window.dimension(CenterWindowDimension());
    OpenGLContext gl(window);
    
	Coordinate cursor_position;
	Size client_size;

	double radius = 0.5;
	double vertices[] = {
    	 radius*cosine(-135), radius*sine(-135), 0.0,
    	 radius*cosine(-45), radius*sine(-45), 0.0,
    	 radius*cosine(135),  radius*sine(135), 0.0,

		 radius*cosine(45), radius*sine(45), 0.0,
    	 radius*cosine(-45), radius*sine(-45), 0.0,
    	 radius*cosine(135),  radius*sine(135), 0.0,
	};
	double angle = 0;
	
	unsigned int VBO, VAO;
    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);
    glBindVertexArray(VAO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_DYNAMIC_DRAW);
    glVertexAttribPointer(0, 3, GL_DOUBLE, GL_FALSE, 3 * sizeof(double), (void*)0);
    glEnableVertexAttribArray(0);

	window.show();
	while (!window.closed) {
		client_size = window.size();
		cursor_position = window.cursor_position();

    	vertices[0] = radius*cosine(-135.0+angle); vertices[1] = radius*sine(-135.0+angle);
    	vertices[3] = radius*cosine(-45.0+angle); vertices[4] = radius*sine(-45.0+angle);
    	vertices[6] = radius*cosine(135.0+angle); vertices[7] = radius*sine(135.0+angle);
		
    	vertices[9] = radius*cosine(45.0+angle); vertices[10] = radius*sine(45.0+angle);
    	vertices[12] = radius*cosine(-45.0+angle); vertices[13] = radius*sine(-45.0+angle);
    	vertices[15] = radius*cosine(135.0+angle); vertices[16] = radius*sine(135.0+angle);

		glViewport(0, 0, client_size.width, client_size.height);
		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
		glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(vertices), vertices);
		glDrawArrays(GL_TRIANGLES, 0, 6);
        gl.swap_buffers();

        while (window.process_messages()) {
			if (window.should_close) {
				window.close();
				break;
			}
			if (window.focused){
				if (cursor_position.x >= 0 && 
					cursor_position.x <= client_size.width && 
					cursor_position.y >= 0 && 
					cursor_position.y <= client_size.height) SetCursor(ARROW_HCURSOR);
			}
		}
		angle += 0.05;
	}
	
	cout<<"PROGRAM RAN SUCCESSFULLY";
    }
    catch (const char* error){
        cout<<error<<endl;
		return 1;
    }
    return 0;
}