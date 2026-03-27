# C++ Module 03 - Inheritance 🤖

This repository contains the exercises for C++ Module 03 at 42 School. The primary goal of this module is to introduce the concept of Inheritance in Object-Oriented Programming (OOP) using the C++98 standard.

## 📝 Overview

In this module, I developed a series of robot classes to understand how attributes and member functions are passed down from a base class to derived classes. It also covers the complexities of multiple inheritance and how to resolve the "Diamond Problem".

### Key Concepts Learned:
* **Single Inheritance:** Deriving a class from a single base class.
* **Multiple Inheritance:** Deriving a class from more than one base class.
* **The Diamond Problem:** Solving ambiguities in multiple inheritance (virtual inheritance).
* **Orthodox Canonical Form:** Ensuring all classes have a default constructor, copy constructor, copy assignment operator, and destructor.
* **Variable Shadowing:** Understanding the `-Wshadow` compiler flag.

## 🛠️ Exercises

* **ex00 (Aaaaand... OPEN!):** Implementation of the base `ClapTrap` class with fundamental attributes (Name, Hit points, Energy points, Attack damage) and actions (attack, take damage, be repaired).
* **ex01 (Serena, my love!):** Creation of the `ScavTrap` class, which inherits from `ClapTrap`, introduces new attribute values, and adds a special `guardGate()` ability. Proper construction/destruction chaining is demonstrated.
* **ex02 (Repetitive work):** Implementation of the `FragTrap` class, another derivative of `ClapTrap`, featuring a different set of stats and a positive `highFivesGuys()` ability.
* **ex03 (Now it’s weird!):** The final challenge. Creation of a `DiamondTrap` monster that inherits from *both* `FragTrap` and `ScavTrap`. This exercise tackles the diamond problem, ensuring the base `ClapTrap` is instantiated only once, and introduces the `whoAmI()` special function.

## 🚀 Usage

To compile and run any of the exercises, navigate to the respective directory and use `make`:

```bash
cd ex00
make
./claptrap