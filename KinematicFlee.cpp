#include "KinematicFlee.hpp"

KinematicFlee::KinematicFlee(Static character, Static target, double maxSpeed) {

	character = character;
	target = target;
	maxSpeed = maxSpeed;

}

//esto devuelve velocidad y rotacion
pair<Triple,double> KinematicFlee::getSteering() {

	pair<Triple,double> steering;
	steering.first = character.position - target.position;
	steering.first.normalize();
	steering.first *= maxSpeed;
	character.orientation = getNewOrientation(character.position, character.orientation, steering.first);
	steering.second = 0;

	return steering;
	
}

string KinematicFlee::name() {

	return "KinematicFlee";

}