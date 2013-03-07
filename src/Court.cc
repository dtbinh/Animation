#include <GL/gl.h>
#include <GL/glut.h>
#include "Court.h"

//Constructor and Destructor
Court::Court(){}
Court::~Court(){}

/*-------------------------------*
 * Make a Basketball *
 *-------------------------------*/
void Court::newInstance ()
{
	
	list_id = glGenLists(1);
	glNewList (list_id, GL_COMPILE);
	glPushMatrix();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_QUADS);
	glVertex3f(4,4,0);
	glVertex3f(-4,4,0);
	glVertex3f(-4,-4,0);
	glVertex3f(4,-4,0);
	glEnd();
	glPopMatrix();
	glEndList();
}

