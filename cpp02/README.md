# C++ Module 02: Fixed-Point Numbers, Operators Overload, and Orthodox Canonical Form

This module focuses on implementing a fixed-point number class, emphasizing the importance of the Orthodox Canonical Form and operator overloading in C++. It culminates in applying these concepts to a geometric problem.

## Key Concepts

### Orthodox Canonical Form

A class is said to be in Orthodox Canonical Form if it explicitly defines four member functions:

1.  **Default Constructor:** `ClassName();`
2.  **Copy Constructor:** `ClassName(const ClassName &other);`
3.  **Copy Assignment Operator:** `ClassName &operator=(const ClassName &other);`
4.  **Destructor:** `~ClassName();`

These functions are crucial for proper resource management and correct behavior when objects are copied, assigned, or destroyed.

### Fixed-Point Numbers

A fixed-point number representation is a way to represent non-integer numbers by implicitly assuming a fixed number of digits after (or before) the radix point. This is an alternative to floating-point numbers, offering advantages in certain applications such as consistent precision and avoiding floating-point inaccuracies.

### Operator Overloading

Operator overloading allows you to redefine how standard operators (like `+`, `-`, `*`, `/`, `<`, `>`, `==`) behave when used with user-defined types (classes). This enables more intuitive and natural syntax for complex operations involving objects of your class.

### Type Conversions

Understanding how to convert objects of your custom class to other built-in types (e.g., `float`, `int`) and vice versa. This often involves explicit conversion operators or constructors.

### Binary Space Partitioning (BSP)

BSP is a method for recursively subdividing a space into two sets by using hyperplanes. In 2D, this involves dividing a plane with lines. It's commonly used in computer graphics and computational geometry for tasks like rendering, collision detection, and hidden surface removal. For this module, it typically involves determining if a point lies within a polygon (e.g., a triangle).

## Exercises

### Exercise 00: Fixed-Point Number Class

This exercise requires you to implement a `Fixed` class that represents a fixed-point number. The class should store its value as an integer and manage a fixed number of fractional bits. You must implement the four member functions of the Orthodox Canonical Form:

*   Default constructor
*   Copy constructor
*   Copy assignment operator
*   Destructor

You will also need to implement getters and setters for the raw bits of the fixed-point number.

### Exercise 01: Fixed-Point Number with Type Conversions

Building upon `ex00`, this exercise extends the `Fixed` class to include type conversion functionalities. You will need to:

*   Add a constructor that takes an integer and converts it to the fixed-point value.
*   Add a constructor that takes a floating-point number and converts it to the fixed-point value.
*   Implement a `toFloat()` member function that converts the fixed-point value to a floating-point value.
*   Implement an `toInt()` member function that converts the fixed-point value to an integer value.
*   Overload the `<<` operator to insert a fixed-point value into an output stream.

### Exercise 02: Fixed-Point Number with Operators Overload

This exercise further extends the `Fixed` class from `ex01` by overloading various operators to enable arithmetic and comparison operations directly on `Fixed` objects. You will need to implement:

*   **Arithmetic Operators:** `+`, `-`, `*`, `/`
*   **Comparison Operators:** `>`, `<`, `>=`, `<=`, `==`, `!=`
*   **Increment/Decrement Operators:** Prefix and postfix `++`, `--`

### Exercise 03: Point and Binary Space Partitioning

This exercise involves creating a `Point` class and using your `Fixed` class to implement a Binary Space Partitioning (BSP) algorithm to determine if a point is inside a triangle. You will likely implement a `bsp` function that takes three `Point` objects (representing the vertices of a triangle) and a fourth `Point` (the point to check) and returns `true` if the point is inside the triangle, `false` otherwise.
