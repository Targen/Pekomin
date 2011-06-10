#ifndef _KINEMATICARRIVE_HPP
#define _KINEMATICARRIVE_HPP

#include "DirectKinematicV.hpp"

using namespace std;

class Ent;

class KinematicArrive : public DirectKinematicV { // TODO: "Kinematic_______" no debería ser DirectKinematic!
        public:
                Ent *character;
                Ent *target;
                double maxSpeed;
                double radius;
                static const double timeToTarget = 0.25;

                KinematicArrive(Ent *character, Ent *target, double maxSpeed, double radius);

                virtual pair<bool, Triple> getVel(unsigned int ticks);
};

#endif
