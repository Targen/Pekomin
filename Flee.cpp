#include "Flee.hpp"
#include "Mobile.hpp"

Flee::Flee(Mobile *character, Mobile *target, double maxSpeed, double fleeRadius) {
        this->character  = character;
        this->target     = target;
        this->maxSpeed   = maxSpeed;
        this->fleeRadius = fleeRadius;
}

pair<bool, Triple> Flee::getVelIncr(unsigned int ticks) {
        pair<bool, Triple> steering;

        steering.second = character->pos - target->pos;
        if (steering.second.length() < fleeRadius) {
                steering.first = true;
                steering.second.normalize();
                steering.second *= maxSpeed;
        } else {
                steering.first = false;
        }
        return steering;
}
