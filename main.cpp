#include <iostream>
#include <vector>
#include <string>

#include "iShape.h"
#include "Cube.h"
#include "Sphere.h"

int main()
{
	std::vector<iShape*> shapes;
	shapes.push_back(new Cube("Cube", 12.0f));
	shapes.push_back(new Sphere("Sphere", 7.0f));

	for (iShape* shape : shapes)
	{
		std::cout << "Shape: " << shape->getName() << "Volumen:" << shape->getVolume() << std::endl;
	}

	system("pause");

}

 
