#ifndef CYLINDER_HH
#define CYLINDER_HH
#include <iostream>
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"
#include "3drotateback.h"
using namespace std;
class cylinder {
private:
	double r;
	double h;
	double x, y, z;
	double xx, yy, zz;

public:
	cylinder(double r = 0.2, double h = 0.6, double x = 0, double y = 0, double z = 0,double xx = 0, double yy = 0, double zz = 0) :r(r), h(h), x(x), y(y), z(z), xx(xx), yy(yy), zz(zz) {};

	void draw()
	{
		//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		
		glPushMatrix();
		glTranslatef(xx, yy, zz);
		glRotatef(x, 1.0, 0.0, 0.0);
		glRotatef(y, 0.0, 1.0, 0.0);
		glRotatef(z, 0.0, 0.0, 1.0);
		
		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(0, 0, 0);
		for (double w = 0; w <= 360; w += 0.1f)
		{
			glNormal3f(0.0f, 0.0f, -1.0f);
			glVertex3f(r*cos(w), r*sin(w), 0.0f);
		}
		glEnd();
		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(0, 0, h);
		for (double w = 0; w <= 360; w += 0.1)
		{
			glNormal3f(0.0f, 0.0f, 1.0f);
			glVertex3f(r*cos(w), r*sin(w), h);
		}
		glEnd();
		int i = 0;
		double w = 0;
		glBegin(GL_TRIANGLE_STRIP);
		glNormal3f(r*cos(w), r*sin(w), 0.0f);
		glVertex3f(r*cos(w), r*sin(w), h);
		glNormal3f(r*cos(w), r*sin(w), 0.0f);
		glVertex3f(r*cos(w), r*sin(w), 0);
		for (double w = 0.1; w <= 360; w += 0.1)
		{
			if (i % 2 == 0)
			{
				glNormal3f(r*cos(w + 0.1), r*sin(w + 0.1), 0.0f);
				glVertex3f(r*cos(w + 0.1), r*sin(w + 0.1), h);
			}
			else

			{
				glNormal3f(r*cos(w + 0.1), r*sin(w + 0.1), 0.0f);
				glVertex3f(r*cos(w + 0.1), r*sin(w + 0.1), 0);
			}
			i++;

		}
		glPopMatrix();
		glEnd();
		
		glPushMatrix();
		rotateback(x, y, z);
		glTranslatef(-xx, -yy, -zz);
		glPopMatrix();
		glEnd();
		//glFlush();
	}



};

#endif
