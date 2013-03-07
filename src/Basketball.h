#ifndef NEWELL_BASKETBALL_H
#define NEWELL_BASKETBALL_H

#include <GL/gl.h>
#include "Model.h"

/* Basketball*/
class Basketball : public Model {
public:
	Basketball();
	~Basketball();
	void newInstance();
};
#endif