#ifndef CUBE_HH
#define CUBE_HH
#include <iostream>
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"
#include "3drotateback.h"
using namespace std;

//static float Imodel_twoside[] = { GL_TRUE };
class cube {
private:
	double size;
	double xx, yy, zz;
	double x, y, z;
public:
	cube(double size = 0.5, double x = 0, double y = 45, double z = 45, double xx = 0, double yy = 0,double zz=0) :size(size), x(x), y(y), z(z),xx(xx),yy(yy),zz(zz) {};

	void draw()
	{
	
		//static float Imodel_twoside[] = { GL_TRUE };
		
		//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glPushMatrix();
		//glLightModelfv(GL_LIGHT_MODEL_TWO_SIDE, Imodel_twoside);
		glTranslatef(xx, yy, zz);
		glRotatef(x, 1.0, 0.0, 0.0);
		glRotatef(y, 0.0, 1.0, 0.0);
		glRotatef(z, 0.0, 0.0, 1.0);
		glBegin(GL_TRIANGLES);
		glNormal3f(0, 0, 1);
		glVertex3f(-size / 2, size / 2, size / 2);
		glNormal3f(0, 0, 1);
		glVertex3f(size / 2, size / 2, size / 2);
		glNormal3f(0, 0, 1);
		glVertex3f(-size / 2, -size / 2, size / 2);


		glNormal3f(0, 0, 1);
		glVertex3f(size / 2, size / 2, size / 2);
		glNormal3f(0, 0, 1);
		glVertex3f(-size / 2, -size / 2, size / 2);
		glNormal3f(0, 0, 1);
		glVertex3f(size / 2, -size / 2, size / 2);

		glNormal3f(-1, 0, 0);
		glVertex3f(-size / 2, -size / 2, size / 2);
		glNormal3f(-1, 0, 0);
		glVertex3f(-size / 2, size / 2, size / 2);
		glNormal3f(-1, 0, 0);
		glVertex3f(-size / 2, -size / 2, -size / 2);

		glNormal3f(-1, 0, 0);
		glVertex3f(-size / 2, size / 2, size / 2);
		glNormal3f(-1, 0, 0);
		glVertex3f(-size / 2, -size / 2, -size / 2);
		glNormal3f(-1, 0, 0);
		glVertex3f(-size / 2, size / 2, -size / 2);

		glNormal3f(0, 0, -1);
		glVertex3f(-size / 2, size / 2, -size / 2);
		glNormal3f(0, 0, -1);
		glVertex3f(size / 2, size / 2, -size / 2);
		glNormal3f(0, 0, -1);
		glVertex3f(-size / 2, -size / 2, -size / 2);

		glNormal3f(0, 0, -1);
		glVertex3f(size / 2, size / 2, -size / 2);
		glNormal3f(0, 0, -1);
		glVertex3f(-size / 2, -size / 2, -size / 2);
		glNormal3f(0, 0, -1);
		glVertex3f(size / 2, -size / 2, -size / 2);

		glNormal3f(1, 0, 0);
		glVertex3f(size / 2, -size / 2, size / 2);
		glNormal3f(1, 0, 0);
		glVertex3f(size / 2, size / 2, size / 2);
		glNormal3f(1, 0, 0);
		glVertex3f(size / 2, -size / 2, -size / 2);

		glNormal3f(1, 0, 0);
		glVertex3f(size / 2, size / 2, size / 2);
		glNormal3f(1, 0, 0);
		glVertex3f(size / 2, -size / 2, -size / 2);
		glNormal3f(1, 0, 0);
		glVertex3f(size / 2, size / 2, -size / 2);

		glNormal3f(0,1, 0);
		glVertex3f(-size / 2, size / 2, size / 2);
		glNormal3f(0, 1, 0);
		glVertex3f(size / 2, size / 2, size / 2);
		glNormal3f(0, 1, 0);
		glVertex3f(-size / 2, size / 2, -size / 2);
		glNormal3f(0, 1, 0);
		glVertex3f(size / 2, size / 2, size / 2);
		glNormal3f(0, 1, 0);
		glVertex3f(-size / 2, size / 2, -size / 2);
		glNormal3f(0, 1, 0);
		glVertex3f(size / 2, size / 2, -size / 2);

		glNormal3f(0, -1, 0);
		glVertex3f(-size / 2, -size / 2, size / 2);
		glNormal3f(0, -1, 0);
		glVertex3f(size / 2, -size / 2, size / 2);
		glNormal3f(0, -1, 0);
		glVertex3f(-size / 2, -size / 2, -size / 2);
		glNormal3f(0, -1, 0);
		glVertex3f(size / 2, -size / 2, size / 2);
		glNormal3f(0, -1, 0);
		glVertex3f(-size / 2, -size / 2, -size / 2);
		glNormal3f(0, -1, 0);
		glVertex3f(size / 2, -size / 2, -size / 2);
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


