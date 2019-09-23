#include <iostream>
#include <vector>
#include <string>

class Vector3
{
public:
	Vector3()
	{
		x = 0;
		y = 0;
		z = 0;
	}

	Vector3(int xPos, int yPos, int zPos)
	{
		x = xPos;
		y = yPos;
		z = zPos;
		floatingMember = 33.33f;
	}

	~Vector3()
	{
		std::cout << "Unistio sam se!" << std::endl;
	}

	Vector3 operator-(Vector3 second)
	{
		Vector3 result;
		result.x = x - second.x;
		result.y = y - second.y;
		result.z = z - second.z;
		return result;
	}

	Vector3 operator*(Vector3 second)
	{
		Vector3 result;
		result.x = x * second.x;
		result.y = y * second.y;
		result.z = z * second.z;
		return result;
	}

	Vector3 operator/(Vector3 second)
	{
		Vector3 result;
		result.x = x / second.x;
		result.y = y / second.y;
		result.z = z / second.z;
		return result;
	}

	Vector3 operator+(Vector3 second)
	{
		Vector3 result;
		result.x = x + second.x;
		result.y = y + second.y;
		result.z = z + second.z;
		return result;
	}

	Vector3 operator++()
	{
		Vector3 result;
		result.x = x++;
		result.y = y++;
		result.z = z++;
		return result;
	}

	Vector3 operator--()
	{
		Vector3 result;
		result.x = x--;
		result.y = y--;
		result.z = z--;
		return result;
	}

	bool operator==(Vector3 second)
	{
		if (x == second.x && y == second.y && z == second.z)
		{
			return true;
		}
		return false;
	}

	bool operator!=(Vector3 second)
	{
		if (x == second.x && y == second.y && z == second.z)
		{
			return false;
		}
		return true;
	}

	friend std::ostream& operator <<(std::ostream& output, const Vector3& value)
	{
		output << "(" << value.x << "," << value.y << value.z << ")" << std::endl;

		return output;
	}

	friend std::istream& operator >>(std::istream& input, Vector3& value)
	{

		bool noerror = false;
		while (!noerror)
		{
			std::cout << "Enter value X: ";
			if (!(input >> value.x))
			{
				noerror = false;
			}
			else
			{
				noerror = true;
			}
			
			std::cout << std::endl;
			input.clear();
			input.ignore(10000, '\n');
			
		}
		noerror = false;
		while (!noerror)
		{
			std::cout << "Enter value Y: ";
			if (!(input >> value.y))
			{
				noerror = false;
			}
			else
			{
				noerror = true;
			}

			std::cout << std::endl;
			input.clear();
			input.ignore(10000, '\n');

		}
		noerror = false;
		while (!noerror)
		{
			std::cout << "Enter value Z: ";
			if (!(input >> value.z))
			{
				noerror = false;
			}
			else
			{
				noerror = true;
			}

			std::cout << std::endl;
			input.clear();
			input.ignore(10000, '\n');

		}
		std::cout << "Enter value X: ";
		input >> value.x;
		std::cout << std::endl;

		std::cout << "Enter value y: ";
		input >> value.y;
		std::cout << std::endl;

		std::cout << "Enter value z: ";
		input >> value.z;
		std::cout << std::endl;

		return input;
	}


	int x, y, z;

	int SumOfCoordinates()
	{
		return x + y + z;
	}

	int increment()
	{
		return x++, z++, y++;
	}

	void Print()
	{
		std::cout << "[" << x << ", " << y << ", " << z << "]";
	}

	float GetFloatingMember()
	{
		return floatingMember;
	}

	// DZ:
	// Overloadat operatore ++, --, *=, /=
	// za hrabre: Overloadat cout i cin

	// friend std::ostream operator<<() {}
private:
	float floatingMember;
};

void iterate(int* arr)
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << arr << std::endl;
		arr++;
	}
	// std::cout << i << std::endl; - i is out of scope and no longer exists!
}

int main()
{
	int number = 10;
	int number2 = 3;
	int* ref = &number;
	int** doubleRef = &ref;

	float fNumber = 10.5f;
	float* fRef = &fNumber;
	*ref = 30;
	int& refference = number;
	refference = number2;

	int* ptr = &number;
	std::cout << *ptr << std::endl;

	ptr = &number2;
	std::cout << *ptr << std::endl;

	Vector3 person = Vector3(10, 20, 30);


	std::cout << "Sum of person coordinates: " << person.SumOfCoordinates() << std::endl;
	std::cout << "Increment of person coordinates: " << person.increment() << std::endl;
	std::cout << "Person's coordinate X: " << person.x << std::endl;
	std::cout << "Person's coordinate Y: " << person.y << std::endl;
	std::cout << "Person's coordinate Z: " << person.z << std::endl;

	std::cout << "Person's floatingMember value is: " << person.GetFloatingMember() << std::endl;


	void* personPtr = &person;
	std::cout << ref << std::endl;
	std::cout << ptr << std::endl;
	std::cout << *ref << std::endl;

	int arr[] = { 1, 7, 3 };

	iterate(arr);

	std::cout << "Double refference: " << std::endl;
	std::cout << "Double refference address: " << doubleRef << std::endl;
	std::cout << "Double refference value: " << *doubleRef << std::endl;
	std::cout << "Refference address: " << ref << std::endl;
	std::cout << "Refference value: " << *ref << std::endl;
	std::cout << "Double refference reffence value: " << **doubleRef << std::endl;

	{
		Vector3 position = Vector3(1, 2, 3);
	}
	std::cout << "position vector je van scopea!" << std::endl;

	Vector3 playerPosition = Vector3(35, 28, 13);
	Vector3 playerTwoPosition = Vector3(100, 100, 100);

	Vector3 sum = playerPosition + playerTwoPosition;


	std::cin >> sum;
	std::cout << sum << std::endl;

	system("pause");
	///
}