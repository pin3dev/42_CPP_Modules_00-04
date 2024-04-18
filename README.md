# CPP-Modules_00-04 `100/100`

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

### [Module 00](https://github.com/pin3dev/42_CPP_Modules_0-04/tree/7582a5e60d416c3074cae9e2554af843edaf5734/CPP_00): String class, Abstraction, Encapsulation
  
### [Module 01](https://github.com/pin3dev/42_CPP_Modules_0-04/tree/7582a5e60d416c3074cae9e2554af843edaf5734/CPP_01): Memory Allocation, References vs Pointers, Switch cases and Callbacks Functions  
  
### [Module 02](https://github.com/pin3dev/42_CPP_Modules_0-04/tree/7582a5e60d416c3074cae9e2554af843edaf5734/CPP_02): Orthodox Canonical Form, Fixed-point Number Class implementation, Overload Operators

### [Module 03](https://github.com/pin3dev/42_CPP_Modules_0-04/tree/7582a5e60d416c3074cae9e2554af843edaf5734/CPP_03): Abstract Classes, Single Inheritance, Multiple Inheritance, Diamond Inheritance
  
### [Module 04](https://github.com/pin3dev/42_CPP_Modules_0-04/tree/7582a5e60d416c3074cae9e2554af843edaf5734/CPP_04): Polymorphism and Interfaces

## Execution
Each exercise's compilation is done separately by running the Makefile within the exercise's folder.  
```bash
#in the ex00, ex01, ex02 or ex03 directory
$>make
```

## Links2Study

| Grade |Modules|Lang | Type| Links and Subjects |
|:---------:|-------|:---:|:---:|--------------------|
|🤩|`CPP00``CPP04` | 🇺🇸 | 📄📚|[Standard Library Headers](https://en.cppreference.com/w/cpp/header)|  
|⭐|`CPP00`         | 🇺🇸 | 💭 | [char* vs std:string](https://stackoverflow.com/questions/15738095/what-is-the-exact-technical-difference-between-const-char-and-const-string)|  
|🤩|`CPP00`         | 🇺🇸 | 📄 |[char* vs std:string vs char[]](https://www.geeksforgeeks.org/char-vs-stdstring-vs-char-c/)|  
|✅|`CPP00`         | 🇧🇷 | 📄 |[CHAR * VS STD: STRING VS CHAR [] EM C++](https://acervolima.com/char-vs-std-string-vs-char-em-c/)|  
|✅|`CPP00``CPP04` | 🇺🇸 | 📄 |[Complete OOP Concepts](https://medium.com/@varshithabittu96/complete-oop-concepts-using-c-to-crack-any-interview-with-code-and-real-time-examples-237234559eb2)|  
|✅|`CPP00``CPP04` | 🇺🇸 | 📄 |[OOPs Concepts in C++](https://beginnersbook.com/2017/08/cpp-oops-concepts/)|  
|✅|`CPP01`         | 🇺🇸 | 📄 |[A Comprehensive Look at C++ Reference](https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-reference)|  
|⭐|`CPP02`         | 🇺🇸 | 📄 |[Fixed Point and Floating Point Number Representations](https://www.tutorialspoint.com/fixed-point-and-floating-point-number-representations)|  
|⭐|`CPP02`         | 🇺🇸 | 📄 |[Floating point number representation](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html)|  
|🤩|`CPP02`         | 🇺🇸 | 📄 |[Introduction to Fixed Point Number Representation](https://inst.eecs.berkeley.edu/~cs61c/sp06/handout/fixedpt.html)|  
|🤩|`CPP02``CPP04` | 🇺🇸 | 📄 |[Operator Overloading in C++](https://www.geeksforgeeks.org/operator-overloading-cpp/)|  
|⭐|`CPP02``CPP04` | 🇺🇸 | 📄 |[C++ Overloading (Operator and Function)](https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm)|  
|🤩|`CPP02``CPP04` | 🇺🇸 | 📄 |[Types of Operator Overloading in C++](https://www.geeksforgeeks.org/types-of-operator-overloading-in-cpp/?ref=lbp)|  
|⭐⭐|`CPP02``CPP04`| 🇺🇸 | 📄 |[Copy Constructor vs Assignment Operator in C++](https://www.geeksforgeeks.org/copy-constructor-vs-assignment-operator-in-c/?ref=ml_lbp)|  
|⭐|`CPP03``CPP04`| 🇺🇸 | 📄 |[Inheritance in C++](https://www.geeksforgeeks.org/inheritance-in-c/)|  
|⭐|`CPP03``CPP04`| 🇺🇸 | 💭 |[C++ inheritance downcasting](https://stackoverflow.com/questions/11855018/c-inheritance-downcasting)|  
|⭐⭐|`CPP04`       | 🇺🇸 | 📄 |[Interfaces in C++](https://medium.com/@sumana.dotnettricks/interfaces-in-c-exploring-the-key-concepts-and-implementation-techniques-c1b3b9e0cb7e)|  
|⭐|`CPP04`       | 🇺🇸 | 📄 |[C++ Program to Create an Interface](https://www.geeksforgeeks.org/cpp-program-to-create-an-interface/)|  


> ✅ OK | ⭐ Good | ⭐⭐ VeryGood | 🤩 Amazing | 🔖 Bookmarked2Read  
> 📄 Blog | 💭 Chat | 📹 Video | 📚 Book
