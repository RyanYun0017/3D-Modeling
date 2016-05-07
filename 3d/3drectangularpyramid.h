#ifndef RECTANGULARPYRAMID_HH
#define RECTANGULARPYRAMID_HH
#include <iostream>
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"
#include "3drotateback.h"
using namespace std;
class rectangularpyramid {
private:
	double size;
	double x, y, z;
	double xx, yy, zz;
public:
	rectangularpyramid(double size = 0.5, double x = 0, double y = 0, double z = 0, double xx = 0, double yy = 0, double zz = 0) :size(size), x(x), y(y), z(z), xx(xx), yy(yy), zz(zz) {};

	void draw()
	{
		//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glPushMatrix();
		glTranslatef(xx, yy, zz);
		glRotatef(x, 1.0, 0.0, 0.0);
		glRotatef(y, 0.0, 1.0, 0.0);
		glRotatef(z, 0.0, 0.0, 1.0);
		glBegin(GL_TRIANGLES);
		glNormal3f(0.0f, size, 0.0f);
		glVertex3f(0.0f, size, 0.0f);
		glNormal3f(-size, -size, size);
		glVertex3f(-size, -size, size);

		glNormal3f(size, -size, size);
		glVertex3f(size, -size, size);
		glNormal3f(0.0f, size, 0.0f);
		glVertex3f(0.0f, size, 0.0f);

		glNormal3f(size, -size, size);
		glVertex3f(size, -size, size);
		glNormal3f(size, -size, -size);
		glVertex3f(size, -size, -size);
		glNormal3f(0.0f, size, 0.0f);
		glVertex3f(0.0f, size, 0.0f);
		glNormal3f(size, -size, -size);
		glVertex3f(size, -size, -size);
		glNormal3f(-size, -size, -size);
		glVertex3f(-size, -size, -size);

		glNormal3f(0.0f, size, 0.0f);
		glVertex3f(0.0f, size, 0.0f);
		glNormal3f(-size, -size, -size);
		glVertex3f(-size, -size, -size);
		glNormal3f(-size, -size, size);
		glVertex3f(-size, -size, size);

		glNormal3f(-size , -size , size );
		glVertex3f(-size , -size , size );
		glNormal3f(-size , -size , -size );
		glVertex3f(-size , -size , -size );
		glNormal3f(size , -size , size );
		glVertex3f(size , -size , size );


		glNormal3f(size , -size , -size );
		glVertex3f(size , -size , -size );
		glNormal3f(size , -size , size );
		glVertex3f(size , -size , size );
		glNormal3f(-size , -size , -size );
		glVertex3f(-size , -size , -size );

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
