#include <iostream>
#include <string>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string; // stringPTR: a pointer to the string.
	std::string &stringREF = string; // stringREF: a reference to the string.

	std::cout << &string << std::endl; // The memory address of the string variable.
	std::cout << stringPTR << std::endl; // The memory address held by stringPTR.
	std::cout << &stringREF << std::endl; // The memory address held by stringREF.

	std::cout << string << std::endl; // The value of the string variable.
	std::cout << *stringPTR << std::endl; // The value pointed to by stringPTR.
	std::cout << stringREF << std::endl; // The value pointed to by stringREF.
}