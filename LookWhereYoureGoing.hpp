#ifndef _LOOKWHEREYOUREGOING_HPP
#define _LOOKWHEREYOUREGOING_HPP

#include "Kinematic.hpp"

using namespace std;

class Mobile;

class LookWhereYoureGoing : public Kinematic {
        public:
                Mobile *character;
                Mobile *target;
                double maxAngularAcceleration;
                double maxRotation;
                double targetRadius;
                double slowRadius;
                static const double timeToTarget = 0.1;

                LookWhereYoureGoing(Mobile *character, Mobile *target, double maxAngularAcceleration, double maxRotation, double targetRadius, double slowRadius);
//              virtual unsigned int type();

                virtual tuple<bool, Triple, double> getVelIncr();
                void mapToRange(double *value);
};

#endif
