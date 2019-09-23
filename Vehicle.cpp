#include "Vehicle.h"

Vehicle::Vehicle()
{
	_wheels = 4;
}

Vehicle::~Vehicle()
{

}


int Vehicle::GetNumberOfWheels()
{
	return _wheels;
}