Student Class Project

1. Project Description

This project is a simple Student Management program developed using C++.

It demonstrates Object-Oriented Programming (OOP) concepts, including classes, objects, constructors and methods.

2. Student Class Attributes

- name: string
- age: int
- studentID: int
- department: string
- course: string
- GPA: double

3. Student Class Methods

- Student(): Constructor used to initialize student information.
- displayInfo(): Displays the student's information.

4. UML Class Diagram
mermaid
classDiagram
    class Student {
        -string name
        -int age
        -int studentID
        -string department
        -string course
        -double GPA
        +Student(string n, int a, int id, string dept, string c, double gpa)
        +displayInfo() void
    }

5. Programming Language

C++

6. Example

The program creates a student named Chade, studying Nursing, with Anatomy as the course, and displays her information.

7. How to Run

Compile the C++ source file using a C++ compiler and run the generated program.



## UML Class Diagram

``` mermaid
classDiagram
    class Student {
        -string name
        -int age
        -int studentID
        -string department
        -string course
        -double GPA
        +Student(string n, int a, int id, string dept, string c, double gpa)
        +displayInfo() void
    }

```


