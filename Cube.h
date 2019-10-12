#pragma once
#include "iShape.h"
class Cube : public iShape
{
public:
	Cube(std::string name, float side);
	~Cube();

	float getVolume() override;
	std::string getName() override;

private:
	float _side;
	std::string _name;
};

