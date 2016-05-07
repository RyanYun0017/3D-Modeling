#ifndef TRIANGULARPYRAMID_HH
#define TRIANGULARPYRAMID_HH
#include <iostream>
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"
#include "3drotateback.h"
using namespace std;
class triangularpyramid {
private:
	double size;
	double x, y, z;
	double xx, yy, zz;

public:
	triangularpyramid(double size = 0.01,  double x = 0, double y = 0, double z = 0, double xx = 0, double yy = 0, double zz = 0) :size(size), x(x), y(y), z(z), xx(xx), yy(yy), zz(zz) {};

	void draw()
	{
		//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		glPushMatrix();
		glTranslatef(xx, yy, zz);
		glRotatef(x, 1.0, 0.0, 0.0);
		glRotatef(y, 0.0, 1.0, 0.0);
		glRotatef(z, 0.0, 0.0, 1.0);
		glBegin(GL_TRIANGLE_FAN);
		glNormal3f(0.0, 0.0, 8.0);
		glVertex3f(0.0, 0.0, 2*size);
		glNormal3f(0.0, size, 0.0);
		glVertex3f(0.0, size, 0.0);
		glNormal3f(size, -size, 0.0);
		glVertex3f(size, -size, 0.0);
		glNormal3f(-size, -size, 0.0);
		glVertex3f(-size, -size, 0.0);
		glNormal3f(0.0, size, 0.0);
		glVertex3f(0.0, size, 0.0);
		glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glNormal3f(0.0, size, 0.0);
		glVertex3f(0.0, size, 0.0);
		glNormal3f(size, -size, 0.0);
		glVertex3f(size, -size, 0.0);
		glNormal3f(-size, -size, 0.0);
		glVertex3f(-size, -size, 0.0);
		glPopMatrix();
		glEnd();

		glPushMatrix();
		rotateback(x, y, z);
		glTranslatef(-xx, -yy, -zz);
		glPopMatrix();
		glEnd();
	}



};

#endif

