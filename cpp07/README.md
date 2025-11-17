# C++ Module 07: Templates

This module introduces the concept of templates in C++. Templates are a powerful feature that allows you to write generic programs. By using templates, you can create functions and classes that can work with any data type.

## Key Concepts

### Function Templates

Function templates are used to create functions that can operate with different data types. The `template` keyword is used to define a function template.

**Example:**

```cpp
template <typename T>
void swap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}
```

In this example, `T` is a template parameter that represents a data type. You can use this `swap` function to swap two variables of any type, as long as they are of the same type.

### Class Templates

Class templates are used to create generic classes. A class template can be used to create a class that can store and manipulate data of any type.

**Example:**

```cpp
template <typename T>
class Array {
private:
  T *data;
  unsigned int size;

public:
  Array(unsigned int n) : size(n) {
    data = new T[n];
  }

  ~Array() {
    delete[] data;
  }

  T &operator[](unsigned int i) {
    if (i >= size) {
      throw std::exception();
    }
    return data[i];
  }
};
```

In this example, the `Array` class can be used to create an array of any type.

## Exercises

### Exercise 00: Whatever

This exercise requires you to create a set of function templates:

*   `swap`: Swaps the values of two variables.
*   `min`: Returns the minimum of two values.
*   `max`: Returns the maximum of two values.

You will need to create a `whatever.hpp` file to store these function templates.

### Exercise 01: Iter

This exercise requires you to create a function template `iter` that takes an array, its length, and a function as arguments. The `iter` function should apply the given function to each element of the array.

You will need to create an `iter.hpp` file to store this function template.

### Exercise 02: Array

This exercise requires you to create a class template `Array` that can store a collection of elements of any type. The `Array` class should have the following features:

*   A constructor that takes an `unsigned int` `n` as an argument and creates an array of `n` elements.
*   A destructor that frees the memory allocated for the array.
*   An `operator[]` that allows you to access the elements of the array by index.
*   A copy constructor and an assignment operator that create a deep copy of the array.

You will need to create an `Array.hpp` file for the class template definition and an `Array.tpp` file for the implementation of the member functions.
