#include <GL/gl.h>
#include <GL/glut.h>
#include "Basketball.h"

//Constructor and Destructor
Basketball::Basketball(){}
Basketball::~Basketball(){}

/*-------------------------------*
 * Make a Basketball *
 *-------------------------------*/
void Basketball::newInstance ()
{
	list_id = glGenLists(1);
	glNewList (list_id, GL_COMPILE);
	glPushMatrix();
	glColor3f(1.0,0.647,0.0);
	glutSolidSphere(3,30,30);
	glPopMatrix();
	glEndList();
}

