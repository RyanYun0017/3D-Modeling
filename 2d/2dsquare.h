#ifndef SQUARE_H
#define SQUARE_H
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"
#include <cmath>
using namespace std;

class square {
private:
	float size;
public:
	square(float size = 1) :size(size) {}
	void draw()
	{
		//glClear(GL_COLOR_BUFFER_BIT);                     
		glBegin(GL_POLYGON);            
		glColor3f(1.0, 0.3, 0.2);      
		glVertex2f(-size / 2, -size / 2);
		glVertex2f(size / 2, -size / 2);
		glVertex2f(size / 2, size / 2);
		glVertex2f(-size / 2, size / 2);
		glEnd();
		//glFlush();
	}
};

#endif
