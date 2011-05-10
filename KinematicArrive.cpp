#include "KinematicArrive.hpp"

KinematicArrive::KinematicArrive(Static character, Static target, double maxSpeed, double radius) {

	character = character;
	target = target;
	maxSpeed = maxSpeed;
	radius = radius;

}

pair<Triple,double> KinematicArrive::getSteering() { 

	pair<Triple,double> steering;
	steering.first = target.position - character.position;

	//cuando no se cumple esto que se retorna? o que tiene el steering? o usar una referencia e instanciar a NULL y echarnos agua :D
	if (steering.first.length() >= radius) {
		steering.first /= timeToTarget;

		if (steering.first.length() > maxSpeed) {
			steering.first.normalize();
			steering.first *= maxSpeed;
		}

		character.orientation = getNewOrientation(character.position, character.orientation, steering.first);

		steering.second = 0;
	}

	return steering;
	
}

string KinematicArrive::name() {

	return "KinematicArrive";

}