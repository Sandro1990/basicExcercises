#pragma once
#include <iostream>

class iShape
{
public:
	iShape() = default;
	~iShape() = default;

	virtual float getVolume() = 0;
	virtual std::string getName() = 0;


};

