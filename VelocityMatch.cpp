#include "VelocityMatch.hpp"
#include "Mobile.hpp"

VelocityMatch::VelocityMatch(Mobile *character, Mobile *target, double maxAcceleration) {
        this->character       = character;
        this->target          = target;
        this->maxAcceleration = maxAcceleration;
}

tuple<bool, Triple, double> VelocityMatch::getVel(unsigned int ticks) {
        tuple<bool, Triple, double> steering;

        if (target->vel.length() == 0) {
                get<0>(steering) = false;
                return steering;
        }

        get<0>(steering) = true;
        get<1>(steering) = target->vel - character->vel;
        get<1>(steering) /= timeToTarget;

        if (get<1>(steering).length() > maxAcceleration) {
                get<1>(steering).normalize();
                get<1>(steering) *= maxAcceleration;
        }

        get<2>(steering) = 0;

        return steering;
}
