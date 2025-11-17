# C++ Module 01: Memory Allocation, References, Pointers, and I/O Streams

This module delves deeper into fundamental C++ concepts such as memory management, the distinction and usage of references and pointers, and more advanced input/output operations. It builds upon the basic object-oriented principles introduced in `cpp00`.

## Key Concepts

### Memory Allocation (Stack vs. Heap)

*   **Stack Allocation:** Automatic memory allocation during function calls. Faster but limited in size. Variables are destroyed when they go out of scope.
*   **Heap Allocation:** Dynamic memory allocation using `new` and `delete`. Slower but allows for larger and more flexible memory management. Memory must be explicitly freed to prevent memory leaks.

### Pointers

Pointers are variables that store memory addresses. They are used for indirect access to data, dynamic memory allocation, and implementing data structures like linked lists.

### References

References are aliases to existing variables. Once initialized, a reference cannot be re-seated to refer to another variable. They provide a safer and often more convenient way to pass parameters to functions than pointers, avoiding null checks and pointer arithmetic.

### `new` and `delete` Operators

These operators are used for dynamic memory allocation and deallocation on the heap. `new` allocates memory for an object or an array of objects, and `delete` or `delete[]` deallocates that memory.

### File I/O Streams

C++ provides `fstream` for file input/output operations. You can read from files using `ifstream` and write to files using `ofstream`.

### String Manipulation

Working with `std::string` and its various methods for searching, replacing, and manipulating text content.

### Member Functions and Function Pointers

Invoking different member functions based on certain conditions or input, potentially using techniques like function pointers or `std::map` of function pointers.

## Exercises

### Exercise 00: New and Delete for Zombies

This exercise focuses on understanding object instantiation and memory allocation. You will likely create `Zombie` objects on both the stack and the heap, using `new` and `delete` to manage heap-allocated objects correctly. You'll also implement functions for creating new zombies (`newZombie`) and randomly creating a chump zombie (`randomChump`).

### Exercise 01: Zombie Horde

Building on the previous exercise, this one involves dynamic allocation of an array of `Zombie` objects. You'll need to create a `ZombieHorde` function that dynamically allocates `N` `Zombie` objects and then correctly manages their memory, likely using `delete[]`.

### Exercise 02: BRAINZ

This exercise likely explores the concepts of pointers and references more directly. You might need to demonstrate how to store the address of a variable in a pointer and a reference, and how to access the variable's value through both.

### Exercise 03: Weapon and Human Classes

This exercise introduces object composition and the interaction between objects. You'll create `Weapon` and `Human` classes. `HumanA` and `HumanB` classes will likely demonstrate different ways of holding a `Weapon` (e.g., `HumanA` holds a `Weapon` by reference, `HumanB` holds it by pointer), highlighting the differences in ownership and lifetime.

### Exercise 04: Sed is for losers

This exercise involves file input/output and string manipulation. You will write a program that takes a filename and two strings (`s1` and `s2`) as arguments. It should read the content of the file, replace all occurrences of `s1` with `s2`, and write the result to a new file named `<filename>.replace`.

### Exercise 05: Harl

This exercise introduces the concept of member functions and potentially function pointers. You will create a `Harl` class with several member functions that represent different complaint levels (e.g., `debug`, `info`, `warning`, `error`). The `Harl` class will have a `complain` method that takes a string argument and calls the appropriate complaint function based on the input string.

### Exercise 06: Harl 2.0

This exercise is an extension of `ex05`. You will need to filter Harl's complaints. The `HarlFilter` class will take a complaint level as input and only complain at that level and above. This will involve implementing conditional logic to control the flow of complaints.
