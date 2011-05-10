#ifndef _KINEMATICFLEE_HPP
#define _KINEMATICFLEE_HPP

#include "Behavior.hpp"
#include "Static.hpp"

using namespace std;

class KinematicFlee: Behavior {
	public:
		Static character;
		Static target;
		double maxSpeed;
	
	KinematicFlee(Static character, Static target, double maxSpeed);

	pair<Triple,double> getSteering();
	
	string name();

};

#endif