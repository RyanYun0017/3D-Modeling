#ifndef CIRCLE_H
#define CIRCLE_H
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"
#include <cmath>
using namespace std;

class circle {
private:
	float radius;
public:
	circle(float radius = 1) :radius(radius) {}
	void draw()
	{
		const float PI = 3.14159;
		//glClear(GL_COLOR_BUFFER_BIT);
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.0, 0.0);
		for (int i = 0; i <= 361; i++)
		{
			glColor3f(float(rand()) / float(RAND_MAX),
				float(rand()) / float(RAND_MAX),
				float(rand()) / float(RAND_MAX));
			glVertex2f(radius*cos(i*PI / 180), radius*sin(i*PI / 180));
		}
		glEnd();
		//glFlush();
	}


};

#endif
