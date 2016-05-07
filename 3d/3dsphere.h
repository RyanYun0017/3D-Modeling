#ifndef SPHERE_HH
#define SPHERE_HH
#include <iostream>
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"
#include "3drotateback.h"
using namespace std;
class sphere {
private:
	double radius;
	int M;
	int N;
	double x, y, z;
	double xx, yy, zz;
public:
	sphere(double radius = 0.6, int M = 100, int N = 100, double x = 0, double y = 0, double z = 0,double xx=0, double yy = 0, double zz = 0) :radius(radius), M(M), N(N), x(x), y(y), z(z), xx(xx), yy(yy), zz(zz) {};

	void draw()
	{
		//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glPushMatrix();
		glTranslatef(xx, yy, zz);
		glRotatef(x, 1.0, 0.0, 0.0);
		glRotatef(y, 0.0, 1.0, 0.0);
		glRotatef(z, 0.0, 0.0, 1.0);
		double PI = 3.141592654;
		float step_z = PI / M;
		float step_xy = 2 * PI / N;
		float xs[4], ys[4], zs[4];
		float angle_z = 0.0;
		float angle_xy = 0.0;
		int i = 0, j = 0;
		glBegin(GL_TRIANGLE_STRIP);
		for (i = 0; i<M; i++)
		{
			angle_z = i * step_z;

			for (j = 0; j<N; j++)
			{
				angle_xy = j * step_xy;

				xs[0] = radius * sin(angle_z + step_z) * cos(angle_xy);
				ys[0] = radius * sin(angle_z + step_z) * sin(angle_xy);
				zs[0] = radius * cos(angle_z + step_z);

				xs[1] = radius * sin(angle_z) * cos(angle_xy);
				ys[1] = radius * sin(angle_z) * sin(angle_xy);
				zs[1] = radius * cos(angle_z);


				xs[2] = radius*sin(angle_z + step_z)*cos(angle_xy + step_xy);
				ys[2] = radius*sin(angle_z + step_z)*sin(angle_xy + step_xy);
				zs[2] = radius*cos(angle_z + step_z);

				xs[3] = radius * sin(angle_z) * cos(angle_xy + step_xy);
				ys[3] = radius * sin(angle_z) * sin(angle_xy + step_xy);
				zs[3] = radius * cos(angle_z);

				for (int k = 0; k<4; k++)
				{
					glNormal3f( xs[k],  ys[k],  zs[k]);
					glVertex3f(xs[k],  ys[k],  zs[k]);
				}

			}
		}
		glPopMatrix();
		glEnd();
		//glFlush();
		glPushMatrix();
		rotateback(x, y, z);
		glTranslatef(-xx, -yy, -zz);
		glPopMatrix();
		glEnd();
	}


};

#endif

