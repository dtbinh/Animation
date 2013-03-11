#include <GL/gl.h>
#include <GL/glut.h>
#include "Basketball.h"
#include <math.h>

//Constructor and Destructor
Basketball::Basketball(){}
Basketball::~Basketball(){}

/*-------------------------------*
 * Make a Basketball *
 *-------------------------------*/
void Basketball::newInstance ()
{
  GLfloat mShininess[] = {128}; //set the shininess of the material

	list_id = glGenLists(1);
	glNewList (list_id, GL_COMPILE);
	glPushMatrix();
	glColor3f(1.0,0.647,0.0);
	glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, mShininess);
	glutSolidSphere(2,100,100);
	glColor3f(0,0,0);
	glRotatef(45,1,0,0);
	DrawCircle(0,0,2);
	glRotatef(45,1,0,0);
	DrawCircle(0,0,2);
	glRotatef(45,1,0,0);
	DrawCircle(0,0,2);
	glPopMatrix();
	glEndList();
}



