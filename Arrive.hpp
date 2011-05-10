#ifndef _ARRIVE_HPP
#define _ARRIVE_HPP

#include "Behavior.hpp"
#include "Mobile.hpp"

using namespace std;

class Arrive: Behavior {
	public:
		Mobile character;
		Mobile target;
		double maxAcceleration;
		double maxSpeed;
		double targetRadius;
		double slowRadius;
		static const double timeToTarget = 0.1;

	Arrive(Mobile character, Mobile target, double maxAcceleration, double maxSpeed, double targetRadius, double slowRadius);

	pair<Triple,double> getSteering();

	string name();

};

#endif