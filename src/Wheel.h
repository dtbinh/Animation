#ifndef HANS_WHEEL_H
#define HANS_WHEEL_H

#include <GL/gl.h>
#include "Model.h"

/* Wheel : torus  + spokes */
class Wheel : public Model {
   public:
      /* default size is unit box */
      Wheel();
      void newInstance();
      GLfloat getRadius() const { return radius; }
      GLfloat getThickness() const { return tire_thickness; }
   private:
      GLfloat radius;
      GLfloat tire_thickness;
};
#endif
