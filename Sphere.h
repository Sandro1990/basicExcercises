#pragma once
#include "iShape.h"
class Sphere : public iShape
{
public:
	Sphere(std::string name, float radius);
	~Sphere();

	float getVolume() override;
	std::string getName() override;

private:
	float _radius;
	std::string _name;
};

