
/*void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(r*cos(c*du), h, r*sin(c*du), 0, 0, 0, 0, 3, 0); //head position;eye direction(0.0,0.0,0.0),original point;(0.0,1.0,0.0),head above direction¡£
	cylinder a(2.5, 10, 0, 45, 45, 2, 2, 2); //r,h,xangle yangle zangle, module position(xx yy zz)
	sphere b(6, 100, 100, 0, 0, 0, 0, 0, 0); //r,xangle yangle zangle, module position(xx yy zz)
	cube c(5, 10, 0, 0, 1, 1, 1); //length xangle yangle zangle, module position(xx yy zz)
	rectangularpyramid d(4, 90, 45, -90, 0, -4, 0); //length xangle yangle zangle, module position(xx yy zz)
	triangularpyramid f(2, 0, 0, 0, 8, 8, 8);//length xangle yangle zangle, module position(xx yy zz)
											 //f.draw();
	a.draw();
	//c.draw();
	d.draw();
	b.draw();
	glFlush();
	//glutSwapBuffers();
}*/
/*
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glLoadIdentity();
gluLookAt(r*cos(c*du), h, r*sin(c*du), 0, 0, 0, 0, 3, 0); //set light before this,light position will follow the eye point
														  //head position;eye direction(0.0,0.0,0.0),original point;(0.0,1.0,0.0),head above direction¡£
cylinder a(2.5, 10, 0, 0, 0, 0, 0, 0); //r,h,xangle yangle zangle, module position(xx yy zz)
sphere b(6, 100, 100, 0, 0, 0, 0, 0, 0); //r,xangle yangle zangle, module position(xx yy zz)
cube c(5, 0, 0, 0, 0, 8, 0); //length xangle yangle zangle, module position(xx yy zz)
cylinder k(2.5, 10, 0, 90, 0, 0, 0, 0);
rectangularpyramid d(4, 0, 0, 0, 0, -4, 0); //length xangle yangle zangle, module position(xx yy zz)
triangularpyramid f(2, 0, 0, 0, 8, 8, 8);//length xangle yangle zangle, module position(xx yy zz)
										 //f.draw();
a.draw();
c.draw();
k.draw();
d.draw();
b.draw();
glFlush();
//glutSwapBuffers();
*/


/*cylinder a(2.5, 10, 0,0, 0, 0,0,0); //r,h,xangle yangle zangle, module position(xx yy zz)
sphere b(6, 100, 100, 0, 0, 0, 0, 0, 0); //r,xangle yangle zangle, module position(xx yy zz)
cube c(5, 10, 0, 0, 1, 1, 1); //length xangle yangle zangle, module position(xx yy zz)
rectangularpyramid d(4, 0, 90, 45, 0, -4, 0); //length xangle yangle zangle, module position(xx yy zz)
triangularpyramid f(2,90, 45, 0, 0, 0, 0);//length xangle yangle zangle, module position(xx yy zz)
//f.draw();
sphere b1(6, 100, 100, 0, 0, 0, 0, -8, 0);
sphere b2(6, 100, 100, 0, 0, 0, 0, -4, 0);
triangularpyramid f1(2, 90,45,45, 0, -4, 0);
triangularpyramid f2(2, 90,45,45, 0, -5, 0);
cylinder a1(2.5, 10, 90, 45, 0, 0, -4, 0);
cylinder a2(2.5, 10, 90, 45, 0, 0, -8, 0);
//c.draw();
f1.draw();
f2.draw();

//f2.draw();
glFlush();



cylinder g1(0.3, 2, 90, 0, 0, 6, 0, 0);
cylinder g2(0.3, 2, -90, 0, 0, 6, 0, 0);
cylinder g3(0.3, 2, -45, 0, 0,6, 0, 0);
cylinder g4(0.3, 2.5, 45, 0, 0, 6, 0, 0);
cylinder v1(0.3, 2, 90, 0, 0,8, 0, 0);
cylinder v2(0.3, 2, -90, 0, 0,8, 0, 0);
cylinder v3(0.3, 2, -45, 0, 0, 8, 0, 0);
cylinder v4(0.3, 2.5, 45, 0, 0, 8, 0, 0);
cylinder b1(0.3, 2, 90, 0, 0, 10 ,0, 0);
cylinder b2(0.3, 2, -90, 0, 0, 10, 0, 0);
cylinder b3(0.3, 2, -45, 0, 0, 10, 0, 0);
cylinder b4(0.3, 2.5, 45, 0, 0, 10, 0, 0);

k1.draw();
k2.draw();
k3.draw();
k4.draw();
v1.draw();
v2.draw();
v3.draw();
v4.draw();
b1.draw();
b2.draw();
b3.draw();
b4.draw();
g1.draw();
g2.draw();
g3.draw();
g4.draw();


*/