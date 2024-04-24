# Electronic Device Management System

Welcome to the Electronic Device Management System! This C++ project is designed to efficiently manage information about electronic devices, mobile phones, and GPUs. By leveraging the power of object-oriented programming (OOP) principles, particularly inheritance, encapsulation, and polymorphism, this system provides a robust and modular solution for handling diverse types of electronic devices.

## Table of Contents
- [Introduction](#introduction)
- [Key Features](#key-features)
- [Usage](#usage)
- [File Structure](#file-structure)
- [Object-Oriented Programming Concepts](#object-oriented-programming-concepts)
- [Why OOP and Inheritance?](#why-oop-and-inheritance)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This is a basic Electronic Device Management system that empowers users to efficiently give inputs and store and display data related to electronic devices, mobile phones, and GPUs. 
## Key Features

- **Device Management:** Store and display details of electronic devices, mobile phones, and GPUs.
- **Modular Design:** Utilize object-oriented programming principles for code modularity and reusability.
- **User-Friendly Interface:** Simple and easy interface.

## File Structure

The repository structure is organized as follows:

- `ElectronicDevice.h` and `ElectronicDevice.cpp`: Definition and implementation of the base Electronic Device class.
- `Mobile.h` and `Mobile.cpp`: Definition and implementation of the Mobile class.
- `GPU.h` and `GPU.cpp`: Definition and implementation of the GPU class.
- `runner.cpp`: Main program file containing the user interface and logic.
- `README.md`: This readme file providing an overview of the project.

## Object-Oriented Programming Concepts

The project extensively employs the following OOP concepts:

- **Inheritance:** By inheriting from a base class (ElectronicDevice), specialized classes (Mobile and GPU) inherit common attributes and behaviors. This promotes code reuse, maintains a hierarchical structure, and facilitates easy extension of functionality.

- **Encapsulation:** Data members of classes are encapsulated and access to them is controlled through public member functions. This ensures data integrity, hides implementation details, and facilitates code maintenance and debugging.


## Why OOP and Inheritance?

The decision to employ OOP principles, particularly inheritance, in this project was driven by several factors:

- **Code Reusability:** Inheritance allows for the creation of specialized classes that inherit attributes and behaviors from a common base class. This promotes code reuse and minimizes redundancy, leading to more maintainable and scalable codebases.

- **Modularity:** OOP facilitates modular design, making it easier to manage and extend the functionality of the system. Each class encapsulates specific functionality, enabling developers to focus on individual components without impacting the entire system.

- **Hierarchical Organization:** Inheritance provides a hierarchical structure to the codebase, making it easier to understand and navigate. Classes are organized based on their relationships, enhancing code readability and maintainability.

- **Flexibility and Extensibility:** Inheritance enables the system to accommodate new types of electronic devices with minimal modifications. New classes can be derived from the base class, inheriting existing functionality while allowing for customization as needed.

## Header Files
Separating code into header (.h) and source (.cpp) files offers numerous benefits. Header files contain class declarations and function prototypes, promoting encapsulation and providing interfaces for other parts of the program. Source files, on the other hand, contain the implementation details, allowing for cleaner and more manageable code organization. This separation enhances code clarity, facilitates reuse, and supports modular design, ultimately improving maintainability and scalability.

## License

 Feel free to use and modify the code.
