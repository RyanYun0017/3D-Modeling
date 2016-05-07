

#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"

#include <windows.h>  
#include <cstdlib>
#include <cmath>
#include"2drender.h"
#include"2dtriangle.h"
#include"2dcircle.h"
#include"2dsquare.h"
#include"2drectangular.h"
using namespace std;

void mydisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	//triangle a;
	//a.draw();
	circle b(2);
	//b.draw();
	//square b;
	b.draw();
	glFlush();
}

int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(900,900);
	glutInitWindowPosition(200,200);
	glutCreateWindow("2D");
	init();
	glutDisplayFunc(mydisplay);
	glutMainLoop();
}

