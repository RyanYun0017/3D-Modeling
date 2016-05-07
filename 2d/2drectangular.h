#ifndef RECTANGULAR_H
#define RECTANGULAR_H
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"
#include <cmath>
using namespace std;

class rectangular {
private:
	float distance, wide;
public:
	rectangular(float distance =4,  float wide=2 ) :wide(wide), distance(distance){}
	void draw()
	{
		//glClear(GL_COLOR_BUFFER_BIT);     
		glBegin(GL_POLYGON);          		glColor3f(1.0, 0.3, 0.2);		glVertex2f(distance/2, wide/2);		glVertex2f(-distance/2, wide/2);		glVertex2f(-distance/2, -wide/2);		glVertex2f(distance/2, -wide/2);		glEnd();
		//glFlush();
	}

};

#endif

