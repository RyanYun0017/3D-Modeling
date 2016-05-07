#ifndef ROTATEBACK_HH
#define ROTATEBACK_HH
#include <iostream>
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"
void rotateback(double x, double y, double z) {
	glRotatef(-x, 1.0, 0.0, 0.0);
	glRotatef(-y, 0.0, 1.0, 0.0);
	glRotatef(-z, 0.0, 0.0, 1.0);
}
#endif

