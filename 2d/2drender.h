#ifndef RENDER_H
#define RENDER_H
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"
#include <cmath>
using namespace std; 
void init()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-2.5, 2.5, -2.5, 2.5);
}
#endif
