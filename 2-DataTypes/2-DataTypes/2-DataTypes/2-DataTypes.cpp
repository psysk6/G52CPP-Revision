// 2-DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void modifyPointer(int* incremented) {
	*incremented += 1;
}

int main()
{
	bool exampleBool = 1;
	if (exampleBool) {
		std::cout << "hello\n";
	}

	//size of types 
	std::cout << "Size of char is " <<sizeof(char) <<"\n";

	std::cout << "Size of int is " << sizeof(int) <<"\n";

	auto str = "Hello World I am an automatically size alocated string";

	std::cout << "type of str using auto is:" << typeid(str).name() << "\n";


	int toIncrement = 0;

	std::cout << "value before increment function = " << toIncrement << "\n";

	int* pointer = &toIncrement;

	modifyPointer(pointer);

	std::cout << "value after increment function = " << toIncrement << "\n";
}


