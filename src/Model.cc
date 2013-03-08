#include "Model.h"
#include <iostream>
using namespace std;
#include <math.h>

Model::Model ()
{
    list_id = -1;
}

Model::~Model ()
{
    if (list_id != -1)
        glDeleteLists (list_id, 1);
}

void Model::draw()
{
    glColor3f(r, g, b);
    if (list_id != -1) glCallList (list_id);
    else cout << "Trying to draw uninstantiated model" << endl;
}

void DrawCircle(float cx, float cy, float r){ 
	int num_segments = 10 * sqrtf(r);
	float theta = 2 * 3.1415926 / float(num_segments); 
	float tangetial_factor = tanf(theta);
	float radial_factor = cosf(theta);
	float x = r;
	float y = 0; 
	glBegin(GL_LINE_LOOP); 
	for(int ii = 0; ii < num_segments; ii++) { 
		glVertex3f(x + cx, y + cy, 0);
		float tx = -y; 
		float ty = x; 
		x += tx * tangetial_factor; 
		y += ty * tangetial_factor; 
		x *= radial_factor; 
		y *= radial_factor; 
	} 
	glEnd(); 
}

void DrawArc(float cx, float cy, float r, float start_angle, float arc_angle, int num_segments){ 
	float theta = arc_angle / float(num_segments - 1);
	float tangetial_factor = tanf(theta);
	float radial_factor = cosf(theta);
	float x = r * cosf(start_angle);
	float y = r * sinf(start_angle); 
	glBegin(GL_LINE_STRIP);
	for(int i = 0; i < num_segments; i++){ 
		glVertex3f(x + cx, y + cy, 0);
		float tx = -y; 
		float ty = x; 
		x += tx * tangetial_factor; 
		y += ty * tangetial_factor; 
		x *= radial_factor; 
		y *= radial_factor; 
	} 
	glEnd(); 
}
