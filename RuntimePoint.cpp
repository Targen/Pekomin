#include <GL/glut.h>

#include "gl.hpp"
#include "RuntimePoint.hpp"
#include "Triple.hpp"

//#define DEBUG_RUNTIMEPOINT

#ifdef DEBUG_RUNTIMEPOINT
#       include <iostream>
#endif

RuntimePoint::RuntimePoint(std::string name, Triple pos, double ang, Triple vel, double vrot):
        Actor(name, pos, ang, vel, vrot)
{}

void RuntimePoint::draw() const {
        glPushMatrix();
                glColor4ub(255, 0, 0, 255);
                glTranslatef(0, 0, 0.5);
                glCallList(cubo_simple);
                glBegin(GL_LINES);
                        glVertex3f(0, 0, 0);
                        glVertex3f(2, 0, 0);
                glEnd();
        glPopMatrix();
}
