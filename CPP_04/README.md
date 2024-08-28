# CPP04-Module `100/100`

## Table of Contents
- [Project Overview](#overview)
- [Mandatory and Bonus Features](#features)
- [Project Compilation and Execution](#compilation-and-execution)
- [Tests](#Tests)

## Overview
The `cpp_module_04` project revolves around mastering advanced C++ concepts such as polymorphism and interfaces, through a series of exercises:

## Features

### Exercise 00: Polymorphism  
* Implementing `polymorphism` through base and derived classes.  
* Creating classes like Animal, Dog, and Cat with specific attributes and behaviors.  
* Ensuring correct behavior of `polymorphic functions`.  
### Exercise 01: I don’t want to set the world on fire  
* Managing dynamic `memory allocation` and `deallocation` within class constructors and destructors.  
* Implementing `deep copies` to avoid shallow copying.  
* Testing memory management and ensuring `memory leak-free code`.  
### Exercise 02: Abstract class  
* Understanding and implementing `abstract classes`.  
* Preventing instantiation of base classes.  
* Ensuring functionality remains intact while preventing direct instantiation.  
### Exercise 03: Interface & recap  
* Implementing `interfaces` using `abstract classes`.  
* Utilizing interfaces for `concrete classes` like Ice and Cure.  
* Testing interfaces through character and materia interactions.  

## Compilation and Execution
Each exercise's compilation is done separately by running the Makefile within the exercise's folder.  
```bash
#in the ex00, ex01, ex02 or ex03 directory
$>make

#Execution ex00:
./Animal

#Execution ex01:
./AnimalsBrains

#Execution ex02:
./AbstractAnimal

#Execution ex03:
./Interfaces
```

## Tests
to be implemented...  
<!--
```c
//Changes to be applied to the main function of the exercises 

//Execution ex00:
    //to test Default Constructors
int main()
{
  Animal;
  Dog;
  Cat;
  WrongAnimal;
  WrongCat;

  (void)Animal;
  (void)Dog;
  (void)Cat;
  (void)WrongAnimal;
  (void)WrongCat;

}
    //to test Polymorphism
int main()
{
  Animal *anyAnimal;
  anyAnimal = new Dog();
  std::cout << anyAnimal ->getType() << " ";
  anyAnimal ->makeSound();

  Animal *anotherAnimal;
  anyAnimal = new Cat();
  std::cout << anotherAnimal ->getType() << " ";
  anotherAnimal ->makeSound();

  delete anyAnimal;
  delete anotherAnimal;
}

    //to test wrong classes
int main()
{
  Animal *anyAnimal;
  anyAnimal = new Dog;
  std::cout << anyAnimal ->getType() << " ";
  anyAnimal ->makeSound();

  Animal *anotherAnimal;
  anyAnimal = new Cat;
  std::cout << anotherAnimal ->getType() << " ";
  anotherAnimal ->makeSound();

  delete anyAnimal;
  delete anotherAnimal;
}

//Execution ex01:


//Execution ex02:

//Execution ex03:

```
--->
