#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"
#include <cmath>
using namespace std;

class triangle {
private:
	float size;
public:
	triangle(float size=1):size(size){}
	void draw()
	{
		//glClear(GL_COLOR_BUFFER_BIT);                  
		glBegin(GL_TRIANGLES);
		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex3f(0, size, 0);
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(-size, -size, 0);
		glColor3f(0.0f, 0.0f, 1.0f);
		glVertex3f(size, -size, 0);
		glEnd();
		//glFlush();
	}
	
};

#endif