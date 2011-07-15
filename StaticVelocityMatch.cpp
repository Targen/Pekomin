#include "Mobile.hpp"
#include "StaticVelocityMatch.hpp"
#include "Triple.hpp"

StaticVelocityMatch::StaticVelocityMatch(Mobile *character, Mobile *target):
        character(character),
        target(target)
{}

pair<bool, Triple> StaticVelocityMatch::getVel(unsigned int ticks) {
        pair<bool, Triple> steering;

        steering.first = true;
        steering.second = target->vel;

        return steering;
}
