#include "Arrive.hpp"
#include "Mobile.hpp"

unsigned int Arrive::type() {
        return BEHAVIOR_ARRIVE;
}

Arrive::Arrive(Mobile *character, Mobile *target, double maxAcceleration, double maxSpeed, double targetRadius, double slowRadius) {
        this->character       = character;
        this->target          = target;
        this->maxAcceleration = maxAcceleration;
        this->maxSpeed        = maxSpeed;
        this->targetRadius    = targetRadius;
        this->slowRadius      = slowRadius;
}

tuple<bool, Triple,double> Arrive::getVelIncr() {
        tuple<bool, Triple,double> steering;
        Triple direction, targetVelocity;
        double distance, targetSpeed;

        direction = target->pos - character->pos;
        distance = direction.length();

        if (distance < targetRadius) {
                get<0>(steering) = false;
                return steering;
        } 

        if (distance >= slowRadius) {
                targetSpeed = maxSpeed;
        } else {
                targetSpeed = maxSpeed * distance / slowRadius;
        }
        
        targetVelocity = direction.normalized() * targetSpeed;
        get<1>(steering) = (targetVelocity - character->vel) / timeToTarget;

        if (get<1>(steering).length() > maxAcceleration) {
                get<1>(steering).normalize();
                get<1>(steering) *= maxAcceleration;
        }

        get<0>(steering) = true;
        get<2>(steering) = 0;
                
        return steering;
}
