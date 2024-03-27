# CPP-Module_04 `100/100`

## Table of Contents
- [Project Overview](#overview)
- [Modules Guidelines](#guidelines)
- [Mandatory and Bonus Features](#features)
- [Execution](#execution)
- [To Study](#Links2Study)


## Overview
The `cpp_modules_00-04` projects revolves around mastering advanced C++ concepts such as:
- Abstraction
- Encapsulation
- Simple and multiple inheritance
- Polymorphism
- Interfaces
- Fixed Point and Floating Point Number Representations
- Overload Operators

## Guidelines

### Compilation:

- Compile your code using `c++` with flags `-Wall` `-Wextra` `-Werror` `-std=c++98`
- Exercise directories: `ex00`, `ex01`, ..., `exn`
- Separate `Makefile` within each exercise directory.
- Use `UpperCamelCase` for class names.

### Forbidden:

- Functions: `*printf()`, `*alloc()`, `free()`
- External libraries like `C++11`, `Boost`
- Using `namespace <ns_name>` and `friend` keywords.
- Until you reach the Module 08: `STL`, meaning no Containers (`vector` `list` `map` and so forth) and no Algorithms (anything that requires to include the `<algorithm>` header).
- `Memory leaks` when using `new`.
- Function `implementations in header` files (except for function templates).

### Allowed:

- Use `standard library` extensively.
- `Additional files` allowed if necessary.

### Rule:
Follow the `Orthodox Canonical Form` for classes `Modules 02-09`, which must implement four essential member functions:
- Default constructor
- Copy constructor
- Copy assignment operator
- Destructor
- Split class code into two files: Header file `.hpp/.h` for class definition, and Source file `.cpp` for implementation

## Features

### Module 04: Polymorphism and Interfaces

- Demonstration of polymorphism in C++.
- Use of virtual and pure virtual methods.
- Practical demonstration of polymorphism in C++.
- Demonstration of dynamic memory allocation and deallocation.
- Deep copy guarantee for compound objects.
- Implementing abstract classes in C++.
- Ensuring that the base class is not directly instantiable.
- Demonstration of how to create an abstract class in C++.
- Implementing interfaces in C++ using pure abstract classes.
- Demonstration of how to use interfaces to define a contract between classes.
- Use of inheritance, polymorphism and composition in a practical scenario.

## Execution
Each exercise's compilation is done separately by running the Makefile within the exercise's folder.  
```bash
#in the ex00, ex01, ex02 or ex03 directory
$>make
```

## Links2Study

clique [aqui](../README.md#Links2Study)
