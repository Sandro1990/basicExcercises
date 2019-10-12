#include "Sphere.h"

#define VOLUME_RATIO 4.0f / 3.0f
#define PI 3.14



Sphere::Sphere(std::string name, float radius) :
	_name(name), _radius(radius)
{
}


Sphere::~Sphere()
{
}

float Sphere::getVolume()
{
	return VOLUME_RATIO * (_radius * _radius * _radius) * PI;
}

std::string Sphere::getName()
{
	return _name;
}
