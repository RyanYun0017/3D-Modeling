
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"
#include <windows.h>
#include <math.h>
#include "3dcylinder.h"
#include "3dsphere.h"
#include "3dcube.h"
#include "3drectangularpyramid.h"
#include "3dtriangularpyramid.h"
#include "3drender.h"
#include <stdio.h>
#include "3dmouserotation.h"

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(r*cos(c*du), h, r*sin(c*du), 0, 0, 0, 0, 3, 0); //head position;eye direction(0.0,0.0,0.0),original point;(0.0,1.0,0.0),head above direction¡£
	
	//cylinder a(1, 15, 0, 90, 0, 0, 5, 0); //r,h,xangle yangle zangle, module position(xx yy zz)
	//sphere b(3, 100, 100, 0, 0, 0, 0, 2.5, 0); //r,xangle yangle zangle, module position(xx yy zz)
	//cube c(5, 10, 0, 0, 1, 1, 1); //length xangle yangle zangle, module position(xx yy zz)
	//rectangularpyramid d(4, 0, 0, 0, 0, 2, 0); //length xangle yangle zangle, module position(xx yy zz)
	//triangularpyramid f(2, 0, 0, 0, 8, 8, 8);//length xangle yangle zangle, module position(xx yy zz)						
	//f.draw();
	sphere sp(3, 100, 100, 0, 0, -2, 0, 8, 0);
	cylinder cy(3, 5, 0, 90, 0, -3, 9, -10);
	cube cu(3, 0, 0, 0, 0, 8, 10);
	triangularpyramid tr(2, 0, 0, 0, 0, -6, 8);
	rectangularpyramid rec(2, 0, 0, 0, 0, -6, -8);

	cylinder k1(0.3, 2, 90, 0, 0, 0, 0, 0);
	cylinder k2(0.3, 2, -90, 0, 0, 0, 0, 0);
	cylinder k3(0.3, 2, -45, 0, 0, 0, 0, 0);
	cylinder k4(0.3, 2.5, 45, 0, 0, 0, 0, 0);

	cylinder u1(0.3, 2, 90, 0, 0, 0, 0, 3);
	cylinder u2(0.3, 1.5, -90, 0, 0, 0, 0, 3);
	cylinder u3(0.3, 2, 0, 0, 0, 0, -1.8, 3);
	cylinder u4(0.3, 2, 90, 0, 0, 0, 0, 5);
	cylinder u5(0.3, 1.5, -90, 0, 0, 0, 0, 5);  

	cylinder g1(0.3, 2, -90, 0, 0, 0, -0.5, 6.4);
	cylinder g2(0.3, 1.5, -90, 0, 0, 0, -0.5, 6.4);
	cylinder g3(0.3, 2, 0, 0, 0, 0, -0.3, 6.4);
	cylinder g4(0.3, 2, 0, 0, 0, 0, 1.3, 6.4);
	cylinder g5(0.3, 2, 90, 0, 0, 0, 0, 8.4);
	cylinder g6(0.3, 1.5, -90, 0, 0, 0, 0, 8.4);
	cylinder g7(0.3, 2, 0, 0, 0, 0, -1.8, 6.4);

	cylinder e1(0.3, 1.8, -90, 0, 0, 0, -0.2, 10);
	cylinder e2(0.3, 1.8, 90, 0, 0, 0, -0.2, 10);
	cylinder e3(0.3, 2, 0, 0, 0, 0, -0.3, 10);
	cylinder e4(0.3, 2, 0, 0, 0, 0, 1.3, 10);
	cylinder e5(0.3, 2, 0, 0, 0, 0, -1.8, 10);

	cylinder r1(0.3, 1.8, -90, 0, 0, 0, -0.2, 13.5);
	cylinder r2(0.3, 1.8, 90, 0, 0, 0, -0.2, 13.5);
	cylinder r3(0.3, 2, 0, 0, 0, 0, -0.3, 13.5);
	cylinder r4(0.3, 1.2, 0, 0, 0, 0, 1.3, 13.5);
	cylinder r5(0.3, 1.7, 60, 0, 0, 0, 1.3, 14.5);
	cylinder r6(0.3, 2.5, 45, 0, 0, 0, 0, 13.5);


	cylinder c1(0.3, 2, 90, 0, 0, 0, 0, -15);
	cylinder c2(0.3, 2, -90, 0, 0, 0, 0, -15); 
	cylinder c3(0.3, 3, 0, 0, 0, 0, -1.8, -15);
	cylinder c4(0.3, 3, 0, 0, 0, 0, 1.8, -15);

	cylinder plus1(0.3,3.5, 0, 0, 0, 0, 0, -11);
	cylinder plus2(0.3, 4, 90, 0, 0, 0, 2, -9.2);
	cylinder plus3(0.3, 3.5, 0, 0, 0, 0, 0, -6);
	cylinder plus4(0.3, 4, 90, 0, 0, 0, 2, -4.2);
	cy.draw();
	sp.draw();
	cu.draw();
	tr.draw();
	rec.draw();

	k1.draw();
	k2.draw();
	k3.draw();
	k4.draw();

	u1.draw();
	u2.draw();
	u3.draw();
	u4.draw();
	u5.draw();
	
	g1.draw();
	g2.draw();
	g3.draw();
	g4.draw();
	g5.draw();
	g6.draw();
	g7.draw();

	e1.draw();
	e2.draw();
	e3.draw();
	e4.draw();
	e5.draw();

	r1.draw();
	r2.draw();
	r3.draw();
	r4.draw();
	r5.draw();
	r6.draw();

	c1.draw();
	c2.draw();
	c3.draw();
	c4.draw();
	
	plus1.draw();
	plus2.draw();
	plus3.draw();
	plus4.draw();

	glFlush();
	
}

int main(int argc, char *argv[])
{
	
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(200, 200);
	glutCreateWindow(" 3D ");
	glutReshapeFunc(reshape);
	glutDisplayFunc(display);
	glutIdleFunc(display); 
	myInit();
	glutMouseFunc(Mouse);
	glutMotionFunc(onMouseMove);
	glutMainLoop();
	return 0;
}