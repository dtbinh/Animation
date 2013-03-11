#include <GL/gl.h>
#include <GL/glut.h>
#include "Court.h"
#include <math.h>

//Constructor and Destructor
Court::Court(){}
Court::~Court(){}

float x = 0;
float y = 0;
float z = 0;
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
	glVertex3f(50,75,0);
	glVertex3f(-50,75,0);
	glVertex3f(-50,-75,0);
	glVertex3f(50,-75,0);
	glEnd();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(50,75,0);
	glVertex3f(-50,75,0);
	glVertex3f(-50,-75,0);
	glVertex3f(50,-75,0);
	glEnd();


	glColor3f(0.4,0.2,0.0);
	x = -55;
	y = -80;
	z = 0;
	for(int rows = 0; rows < 10; rows++){
		glPushMatrix();
		glTranslatef(x,y,z);
		for(int i = 0; i < 30; i++){
			glTranslatef(0,5,0);
			glutSolidCube(5);
		}
		glPopMatrix();
		z = z + 5;
		x = x - 5;
	}

	x = 55;
	y = -80;
	z = 0;
	for(int rows = 0; rows < 10; rows++){
		glPushMatrix();
		glTranslatef(x,y,z);
		for(int i = 0; i < 30; i++){
			glTranslatef(0,5,0);
			glutSolidCube(5);
		}
		glPopMatrix();
		z = z + 5;
		x = x + 5;
	}

	glColor3f(0,0,0);
	//Draws The Center Circle
	DrawCircle(0,0,10);

	//Draws the arc around the free throw lines
	DrawCircle(0,-50,10);
	DrawCircle(0,50,10);
	DrawCircle(0,-75,40);
	DrawCircle(0,75,40);

	//Draws the keys on the basketball court
	glBegin(GL_QUADS);
	glVertex3f(10,75,0);
	glVertex3f(-10,75,0);
	glVertex3f(-10,50,0);
	glVertex3f(10,50,0);
	glEnd();

	//Draws the keys on the basketball cour
	glBegin(GL_QUADS);
	glVertex3f(10,-50,0);
	glVertex3f(-10,-50,0);
	glVertex3f(-10,-75,0);
	glVertex3f(10,-75,0);
	glEnd();

	//Draw the half court line
	glBegin(GL_LINES);
	glLineWidth(5);
	glVertex3f(50,0,0);
	glVertex3f(-50,0,0);
	glEnd();


	glPopMatrix();
	glEndList();
}

