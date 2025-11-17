#include "Array.hpp"

int main()
{
	std::cout << "--- Test 1: Default constructor (empty array) ---" << std::endl;
	Array<int> emptyArray;
	std::cout << "Empty array size: " << emptyArray.size() << std::endl;
	try
	{
		emptyArray[0] = 1;
	}
	catch (const std::out_of_range &e)
	{
		std::cerr << "Caught exception for emptyArray[0]: " << e.what() << std::endl;
	}

	std::cout << "\n--- Test 2: Constructor with unsigned int n ---" << std::endl;
	Array<int> intArray(5);
	std::cout << "intArray size: " << intArray.size() << std::endl;
	for (unsigned int i = 0; i < intArray.size(); ++i)
	{
		std::cout << "intArray[" << i << "] (default value): " << intArray[i] << std::endl;
		intArray[i] = i + 1;
	}
	std::cout << "After assigning values:" << std::endl;
	for (unsigned int i = 0; i < intArray.size(); ++i)
	{
		std::cout << "intArray[" << i << "]: " << intArray[i] << std::endl;
	}

	std::cout << "\n--- Test 3: Copy constructor ---" << std::endl;
	Array<int> copyArray = intArray;
	std::cout << "copyArray size: " << copyArray.size() << std::endl;
	std::cout << "Modifying copyArray[0] to 99" << std::endl;
	copyArray[0] = 99;

	std::cout << "intArray[0]: " << intArray[0] << std::endl;
	std::cout << "copyArray[0]: " << copyArray[0] << std::endl;

	std::cout << "\n--- Test 4: Assignment operator ---" << std::endl;
	Array<int> assignedArray;
	assignedArray = intArray;
	std::cout << "assignedArray size: " << assignedArray.size() << std::endl;
	std::cout << "Modifying assignedArray[1] to 88" << std::endl;
	assignedArray[1] = 88;

	std::cout << "intArray[1]: " << intArray[1] << std::endl;
	std::cout << "assignedArray[1]: " << assignedArray[1] << std::endl;

	std::cout << "\n--- Test 5: Bounds checking ---" << std::endl;
	try
	{
		std::cout << "Accessing intArray[10] (out of bounds)" << std::endl;
		std::cout << intArray[10] << std::endl;
	}
	catch (const std::out_of_range &e)
	{
		std::cerr << "Caught exception for intArray[10]: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "Accessing intArray[-1] (out of bounds)" << std::endl;
		std::cout << intArray[-1] << std::endl;
	}
	catch (const std::out_of_range &e)
	{
		std::cerr << "Caught exception for intArray[-1]: " << e.what() << std::endl;
	}

	std::cout << "\n--- Test 6: Array of strings ---" << std::endl;
	Array<std::string> stringArray(3);
	stringArray[0] = "Hello";
	stringArray[1] = "World";
	stringArray[2] = "C++";
	for (unsigned int i = 0; i < stringArray.size(); ++i)
	{
		std::cout << "stringArray[" << i << "]: " << stringArray[i] << std::endl;
	}

	return 0;
}