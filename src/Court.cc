#include <GL/gl.h>
#include <GL/glut.h>
#include "Court.h"
#include <math.h>

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

	glTranslatef (0, 0, -3);
	glColor3f(1.0,1.0,0.4);

	glBegin(GL_QUADS);
	glVertex3f(45,75,0);
	glVertex3f(-45,75,0);
	glVertex3f(-45,-75,0);
	glVertex3f(45,-75,0);
	glEnd();

	//glTranslatef (0, 0, 1);
	glColor3f(0.4,0.2,0.0);
	glBegin(GL_LINES);
	glLineWidth(5);
	glVertex3f(45,0,0);
	glVertex3f(-45,0,0);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(10,75,0);
	glVertex3f(-10,75,0);
	glVertex3f(-10,50,0);
	glVertex3f(10,50,0);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(10,-50,0);
	glVertex3f(-10,-50,0);
	glVertex3f(-10,-75,0);
	glVertex3f(10,-75,0);
	glEnd();
	
	DrawCircle(0,0,10);
	DrawCircle(0,-50,10);
	DrawCircle(0,50,10);
	DrawArc(0,75,35,0,180,3);
	DrawArc(0,-75,35,0,-180,3);


	/*glTranslatef (-50, 0, 0);
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_QUADS);
	glVertex3f(0,50,50);
	glVertex3f(0,-50,50);
	glVertex3f(0,-50,0);
	glVertex3f(0,50,0);
	glEnd();

	glTranslatef (50,-50, 0);
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_QUADS);
	glVertex3f(50,0,50);
	glVertex3f(50,0,0);
	glVertex3f(-50,0,0);
	glVertex3f(-50,0,50);
	glEnd();*/

	glPopMatrix();
	glEndList();
}


