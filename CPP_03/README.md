# CPP03-Module `100/100`

## Table of Contents
- [Project Overview](#overview)
- [Mandatory and Bonus Features](#features)
- [Project Compilation and Execution](#compilation-and-execution)
- [Tests](#Tests)

## Overview

The `cpp_module_03` project revolves around mastering basic OOP concepts, such as single inheritance, multiple inheritance, and polymorphism, through a series of exercises.

## Features

### Exercise 00: Aaaaand... OPEN!
* Implementation of `encapsulation` and `internal state manipulation` within the **ClapTrap** class, using private attributes.
* Creation of public methods that alter the object's internal state.
* Demonstration of `constructors` and `destructors` with messages that track the object's `lifecycle`.

### Exercise 01: Serena, my love!
* Application of the `single inheritance` concept.
* Modification of inherited methods, exploring `polymorphism` through method overriding in the derived class.
* Demonstration of constructor and destructor chaining, ensuring that object construction and destruction occur in the `correct order`.

### Exercise 02: Repetitive work
* Expansion of `inheritance` usage.
* Implementation of additional and exclusive methods in an inheriting class

### Exercise 03: Now it’s weird!
* Exploration of `multiple inheritance`.
* Resolution of `ambiguity` in multiple inheritance, using access control techniques to ensure the correct methods and attributes are used, especially when dealing with names and methods inherited from multiple base classes.
* Implementation of a method to reveal the object's `composite identity`, highlighting the integration of inherited sub-objects within the derived class.

## Compilation and Execution
Each exercise should be compiled separately by running the Makefile within the corresponding exercise folder.
```bash
# Within the ex00, ex01, ex02, or ex03 directories
$>make

# Execution of ex00:
./clapTrap

# Execution of ex01:
./scavTrap

# Execution of ex02:
./fragTrap

# Execution of ex03:
./DiamondTrap
```

## Tests
To be implemented...  
