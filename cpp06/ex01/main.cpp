#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
  Data originalData;
  originalData.value = 42;
  originalData.s1 = "Hello";
  originalData.s2 = "World";

  Data* originalPtr = &originalData;

  std::cout << "Original Data Address: " << originalPtr << std::endl;
  std::cout << "Original Data Value: " << originalData.value << std::endl;
  std::cout << "Original Data s1: " << originalData.s1 << std::endl;
  std::cout << "Original Data s2: " << originalData.s2 << std::endl;

  uintptr_t serializedData = Serializer::serialize(originalPtr);
  std::cout << "Serialized Data (uintptr_t): " << serializedData << std::endl;

  Data* deserializedPtr = Serializer::deserialize(serializedData);
  std::cout << "Deserialized Data Address: " << deserializedPtr << std::endl;

  if (originalPtr == deserializedPtr)
  {
    std::cout << "Pointers are equal! Serialization and deserialization successful." << std::endl;
    std::cout << "Deserialized Data Value: " << deserializedPtr->value << std::endl;
    std::cout << "Deserialized Data s1: " << deserializedPtr->s1 << std::endl;
    std::cout << "Deserialized Data s2: " << deserializedPtr->s2 << std::endl;
  }
  else
  {
    std::cout << "Pointers are NOT equal! Serialization and deserialization failed." << std::endl;
  }

  return 0;
}