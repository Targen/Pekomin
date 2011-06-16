#include "Arrive.hpp"
#include "Mobile.hpp"

//#define DEBUG_ARRIVE

#ifdef DEBUG_ARRIVE
#include <stdio.h>
#endif

Arrive::Arrive(Mobile *character, Mobile *target, double maxSpeed, double targetRadius, double slowRadius) {
        this->character    = character   ;
        this->target       = target      ;
        this->maxSpeed     = maxSpeed    ;
        this->targetRadius = targetRadius;
        this->slowRadius   = slowRadius  ;
        this->dead         = false       ; 
}

pair<bool, Triple> Arrive::getVel(unsigned int ticks) {
        pair<bool, Triple> steering;
        Triple direction, targetVelocity;
        double distance, targetSpeed;

        steering.first = true;

        direction = target->pos - character->pos;
        distance = direction.length();
        direction.normalize();

        if (distance < targetRadius) {
                steering.second = target->vel;
                if (steering.second.length() > maxSpeed) {
                        steering.second.normalize();
                        steering.second *= maxSpeed;
                }
                return steering;
        }

//      targetSpeed = maxSpeed - character->vel.dot(direction);
        targetSpeed = maxSpeed;
        if (distance < slowRadius) {
                targetSpeed *= (distance - targetRadius) / (slowRadius - targetRadius);
        }
//      if (targetSpeed < 0       ) targetSpeed = 0       ;
//      if (targetSpeed > maxSpeed) targetSpeed = maxSpeed;

        steering.second = direction * targetSpeed;

        return steering;
}
