#ifndef NEWELL_COURT_H
#define NEWELL_COURT_H

#include <GL/gl.h>
#include "Model.h"

/* COURT */
class Court : public Model {
public:
	Court();
	~Court();
	void newInstance();
};
#endif