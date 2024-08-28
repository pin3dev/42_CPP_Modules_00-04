# CPP02-Module `80/100`

## Table of Contents
- [Project Overview](#overview)
- [Mandatory and Bonus Features](#features)
- [Project Compilation and Execution](#compilation-and-execution)
- [Tests](#Tests)

## Overview

The `cpp_module_02` project focuses on mastering key C++ concepts such as ad-hoc polymorphism, operator overloading, and the Orthodox Canonical class form through a series of structured exercises.

## Features

### Exercise 00: My First Class in Orthodox Canonical Form
* Implementation of `Orthodox Canonical Form`, ensuring that your classes follow the best practices in object construction, copying, and destruction.
* Introduction to `fixed-point numbers` by creating a class that handles fixed-point arithmetic, offering a balance between performance and precision.
* Demonstration of encapsulation and operator overloading in the class design.

### Exercise 01: Towards a more useful fixed-point number class
* Expansion of the `fixed-point number` class to handle conversions between integers and floating-point numbers.
* Implementation of additional constructors and methods, enhancing the class functionality.
* Introduction to `stream insertion operator overloading`, allowing easy output of fixed-point numbers.

### Exercise 02: Now we’re talking
* Overloading of `comparison`, `arithmetic`, and `increment/decrement` operators, enabling natural operations between fixed-point numbers.
* Implementation of `min` and `max` functions to compare fixed-point numbers, showcasing practical use cases for static member functions.

<!--### Exercise 03: BSP
* Application of the `fixed-point number` class in a practical problem: determining if a point lies inside a triangle using Binary Space Partitioning (BSP).
* Creation of a `Point` class and implementation of a function to perform point-in-triangle tests, reinforcing understanding of geometric algorithms.-->

## Compilation and Execution
Each exercise should be compiled separately by running the Makefile within the corresponding exercise folder.
```bash
# Within the ex00, ex01, ex02, or ex03 directories
make

# Execution of ex00:
./canonical

# Execution of ex01:
./float_int

# Execution of ex02:
./fixed

```

## Tests
To be implemented...  
