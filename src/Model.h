#ifndef NEWELL_MODEL_H
#define NEWELL_MODEL_H

#include <GL/gl.h>


class Model {
public:
    Model();
    virtual ~Model();
    virtual void newInstance() = 0;
    virtual void draw();
    void setColor (float r,float g, float b) {
        this->r = r;
        this->g = g;
        this->b = b;
    }

protected:
    GLint list_id;
    float r,g,b;
};

void DrawCircle(float cx, float cy, float r);

void DrawArc(float cx, float cy, float r, float start_angle, float arc_angle, int num_segments);

#endif
