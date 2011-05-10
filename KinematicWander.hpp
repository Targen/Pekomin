#ifndef _KINEMATICWANDER_HPP
#define _KINEMATICWANDER_HPP

#include "Behavior.hpp"
#include "Static.hpp"
#include "util.hpp"

class KinematicWander: Behavior {
	public:
		Static character;
		double maxSpeed;
		double maxRotation;

	KinematicWander(Static character, double maxSpeed, double maxRotation);
	
	pair<Triple,double> getSteering();

	string name();

};

#endif