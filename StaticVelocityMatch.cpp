#include "StaticVelocityMatch.hpp"
#include "Mobile.hpp"

StaticVelocityMatch::StaticVelocityMatch(Mobile *character, Mobile *target) {
        this->character = character;
        this->target    = target   ;
        this->dead      = false    ;
}

pair<bool, Triple> StaticVelocityMatch::getVel(unsigned int ticks) {
        pair<bool, Triple> steering;

        steering.first = true;
        steering.second = target->vel;

        return steering;
}