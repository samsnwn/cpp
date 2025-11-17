# C++ Module 03: Inheritance

This module delves into one of the fundamental pillars of Object-Oriented Programming (OOP): Inheritance. You will learn how to create a hierarchy of classes, allowing derived classes to inherit properties and behaviors from base classes, promoting code reusability and establishing "is-a" relationships.

## Key Concepts

### Inheritance

Inheritance allows a new class (derived class or subclass) to inherit members (attributes and methods) from an existing class (base class or superclass). This mechanism facilitates code reuse and models real-world hierarchical relationships.

*   **Base Class:** The class whose members are inherited.
*   **Derived Class:** The class that inherits members from the base class.

### Access Specifiers in Inheritance

How members of a base class are accessed in a derived class depends on the access specifier used during inheritance:

*   **`public` inheritance:** `public` members of the base class remain `public` in the derived class, and `protected` members remain `protected`. `private` members remain inaccessible.
*   **`protected` inheritance:** `public` and `protected` members of the base class become `protected` in the derived class. `private` members remain inaccessible.
*   **`private` inheritance:** `public` and `protected` members of the base class become `private` in the derived class. `private` members remain inaccessible.

### Constructors and Destructors in Inheritance

*   **Derived Class Constructors:** When a derived class object is created, the base class constructor is called first, followed by the derived class constructor.
*   **Derived Class Destructors:** When a derived class object is destroyed, the derived class destructor is called first, followed by the base class destructor.
*   **Constructor Initialization Lists:** Essential for calling specific base class constructors from derived class constructors.

### Polymorphism and Virtual Functions (Introduction)

While largely covered in later modules, inheritance often leads to the concept of polymorphism, where objects of different classes can be treated as objects of a common base class. `virtual` functions are key to achieving runtime polymorphism.

## Exercises

### Exercise 00: ClapTrap

This exercise involves creating a base class named `ClapTrap`. This class will serve as the foundation for other robot-like entities. You will need to implement its attributes (e.g., name, hit points, energy points, attack damage) and member functions (e.g., `attack`, `takeDamage`, `beRepaired`). The focus is on proper constructor, destructor, and member function implementation.

### Exercise 01: ScavTrap

Building upon `ex00`, you will create a `ScavTrap` class that publicly inherits from `ClapTrap`. `ScavTrap` will have its own specific constructor, destructor, and potentially override some of `ClapTrap`'s methods while adding new unique behaviors (e.g., `guardGate`). This exercise reinforces public inheritance and method overriding.

### Exercise 02: FragTrap

Similar to `ex01`, this exercise requires you to create another class, `FragTrap`, that also publicly inherits from `ClapTrap`. `FragTrap` will have its own specialized constructors, destructors, and a unique attack method or ability (e.g., `highFivesGuys`). This exercise will further solidify your understanding of inheritance and class specialization.
