#ifndef RENDER_HH
#define RENDER_HH
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"

static float light_ambient[] = { 0.1,0.1,0.1,1.0 };
static float light_diffuse[] = { 0.1,0.3,0.5,1.0 };
static float light_specular[] = { 0.5, 0.5, 1.0, 1.0 };
static float light_position[] = { 90,90,300,0.0 };
//static float light_position[] = { 0,0,150,0.0 };
//static float front_mat_shininess[] = { 60.0 };
//static float front_mat_specular[] = { 0.2,0.2,0.2,1.0 };
//static float front_mat_diffuse[] = { 0.5,0.5,0.28,1.0 };
//static float back_mat_shininess[] = { 60.0 };
//static float back_mat_specular[] = { 0.5,0.5,0.2,1.0 };
//static float back_mat_diffuse[] = { 1.0,0.9,0.2,1.0 };
//static float Imodel_ambient[] = { 1.0,1.0,1.0,1.0 };
//static float Imodel_oneside[] = { GL_FALSE };

void myInit(void)
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
	glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
	//glLightModelfv(GL_LIGHT_MODEL_AMBIENT, Imodel_ambient);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glShadeModel(GL_SMOOTH);

}

/*
void myReshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (GLfloat)w / (GLfloat)h, 1.0, 50.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, 0.0, -25.0);
}
*/

void reshape(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(75.0f, (float)w / h, 1.0f, 1000.0f);
	glMatrixMode(GL_MODELVIEW);
}

#endif
