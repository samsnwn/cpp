# C++ Module 08: STL Algorithms, Containers, and Iterators

This module focuses on the C++ Standard Template Library (STL), a powerful set of template classes and functions that provide generic programming capabilities. You will explore various STL components, including containers, algorithms, and iterators, to write efficient and reusable code.

## Key Concepts

### Generic Programming

Generic programming is a style of computer programming in which algorithms are written in terms of types to be specified later that are then instantiated when needed for specific types provided as parameters. C++ templates are the primary mechanism for achieving generic programming.

### Standard Template Library (STL)

The STL is a set of C++ template classes that provide common programming data structures and functions such as lists, queues, stacks, and algorithms for sorting, searching, and transforming data. It consists of:

*   **Containers:** Objects that store data (e.g., `std::vector`, `std::list`, `std::deque`).
*   **Algorithms:** Functions that operate on containers (e.g., `std::find`, `std::sort`, `std::for_each`).
*   **Iterators:** Objects that provide a way to access elements of a container sequentially.

### Iterators

Iterators are generalizations of pointers. They are used to point to elements within a container and provide a way to traverse through the elements of a container. Different types of iterators exist, each with varying capabilities (e.g., input iterators, output iterators, forward iterators, bidirectional iterators, random access iterators).

### Algorithms

STL algorithms are functions that perform operations on ranges of elements. They typically take iterators as arguments to specify the range on which they should operate. Examples include searching, sorting, counting, and transforming elements.

### Custom Containers and Exception Handling

While the STL provides a rich set of containers, understanding how to implement custom containers or utility classes that manage data is crucial. This often involves careful memory management and robust exception handling to ensure program stability.

## Exercises

### Exercise 00: Easyfind

This exercise requires you to implement a template function `easyfind` that searches for the first occurrence of a value in a container. The function should work with various container types that support iterators (e.g., `std::vector`, `std::list`, `std::deque`). This exercise will reinforce your understanding of generic programming, iterators, and STL algorithms like `std::find`.

### Exercise 01: Span

This exercise involves implementing a class called `Span` that can store a maximum of `N` integers. The `Span` class should have methods to:

*   Add numbers to the span.
*   Calculate the shortest span (the smallest difference between two numbers in the span).
*   Calculate the longest span (the largest difference between two numbers in the span).

This exercise will test your ability to design a custom container-like class, manage its state, and implement algorithms to operate on its elements, potentially using STL algorithms and handling exceptions for error conditions (e.g., trying to add more numbers than the span can hold, or calculating spans on an empty or single-element span).

### Exercise 02: (Empty)

This exercise directory is currently empty. It might have been intended for a more advanced topic related to STL, such as custom allocators, container adaptors, or more complex algorithms. You may need to refer to the `cpp08.pdf` for the actual content of this exercise.
