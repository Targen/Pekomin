#ifndef _SEEK_HPP
#define _SEEK_HPP

#include "Kinematic.hpp"

using namespace std;

class Mobile;

class Seek : public Kinematic {
        public:
                static const unsigned int type = BEHAVIOR_SEEK;
                Mobile *character;
                Mobile *target;
                double maxAcceleration;

                Seek(Mobile *character, Mobile *target, double maxAcceleration);
};

#endif