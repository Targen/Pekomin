#include "KinematicSeek.hpp"

KinematicSeek::KinematicSeek(Static character, Static target, double maxSpeed) {

	character = character;
	target = target;
	maxSpeed = maxSpeed;

}

//esto devuelve velocidad y rotacion
pair<Triple,double> KinematicSeek::getSteering() {

	pair<Triple,double> steering;
	steering.first = target.position - character.position;
	steering.first.normalize();
	steering.first *= maxSpeed;
	character.orientation = getNewOrientation(character.position, character.orientation, steering.first);
	steering.second = 0;

	return steering;
	
}

string KinematicSeek::name() {

	return "KinematicSeek";

}