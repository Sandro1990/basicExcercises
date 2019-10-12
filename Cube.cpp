#include "Cube.h"



Cube::Cube(std::string name, float side) :
	_name(name), _side(side) 
{
}


Cube::~Cube()
{
}

float Cube::getVolume()
{
	return _side * _side * _side;
}

std::string Cube::getName()
{
	return _name;
}
