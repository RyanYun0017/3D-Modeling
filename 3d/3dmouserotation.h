#ifndef MOUSEROTAYION_HH
#define MOUSEROTATION_HH

static float  M_PI = 3.141592654;
static float c = M_PI / 180.0f; //radian and angle transform
static int du = 90, oldmy = -1, oldmx = -1; //du  is the angle which eye point rotate y axis. opengl default set y is up
static float r = 20.0f, h = 0.0f; //r is the eye point to the y axis radius. ,h is the eyepoint high on the y axis.

void Mouse(int button, int state, int x, int y) //handle the mouse click
{
	if (state == GLUT_DOWN) // when press the mouse, record the mouse coordinate in the windows.
		oldmx = x, oldmy = y;
}
void onMouseMove(int x, int y) //handle the mouse dragging
{
	du += x - oldmx; // add the mouse increasing value along the x axis to the angle which eye point rotate y axis£¬and then realize rotate left and right
	h += 0.03f*(y - oldmy); //add the mouse changing value along the y axis to the  eye point h value along y axis£¬and then realize up and down
	if (h>1.0f) h = 1.0f; // limit the eye point coordinate y value. make the eye point not wired
	else if (h<-1.0f) h = -1.0f;
	oldmx = x, oldmy = y; //set the mouse position as old value, and prepare for the next value increasing.
}

#endif
