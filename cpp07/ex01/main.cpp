#include "iter.hpp"

template <typename T>
void printElement(const T& element)
{
    std::cout << element << std::endl;
}

void incrementInt(int& element)
{
    element++;
}

void appendString(std::string& element)
{
    element += "_appended";
}

int main()
{
    // Test with int array
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "--- Original intArray ---" << std::endl;
    iter(intArray, intArrayLength, printElement<int>);

    std::cout << "--- Incrementing intArray ---" << std::endl;
    iter(intArray, intArrayLength, incrementInt);
    iter(intArray, intArrayLength, printElement<int>);

    // Test with string array
    std::string stringArray[] = {"hello", "world", "cpp"};
    size_t stringArrayLength = sizeof(stringArray) / sizeof(stringArray[0]);

    std::cout << "--- Original stringArray ---" << std::endl;
    iter(stringArray, stringArrayLength, printElement<std::string>);

    std::cout << "--- Appending stringArray ---" << std::endl;
    iter(stringArray, stringArrayLength, appendString);
    iter(stringArray, stringArrayLength, printElement<std::string>);

    // Test with char array
    char charArray[] = {'a', 'b', 'c'};
    size_t charArrayLength = sizeof(charArray) / sizeof(charArray[0]);

    std::cout << "--- Original charArray ---" << std::endl;
    iter(charArray, charArrayLength, printElement<char>);

    return 0;
}