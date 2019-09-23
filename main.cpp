#include <iostream>
#include "Vehicle.h"

int main()
{
	Vehicle car;
	
	std::cout << "Car has " << car.GetNumberOfWheels() << " wheels!" << std::endl;
	system("pause");
}