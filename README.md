# Student Course Management System

A C++ console application for managing students and courses. This project demonstrates Object-Oriented Programming (OOP) concepts and Standard Template Library (STL) usage.

---

## Features

- ✅ Add Student - Add new students with unique ID, name, and GPA (0.0-4.0)
- ✅ Remove Student - Remove students by ID
- ✅ Search Student - Find and display student information by ID
- ✅ Display All Students - View all registered students
- ✅ Enroll in Course - Enroll students in courses (prevents duplicates using set)
- ✅ Show Student Courses - Display all courses for a specific student
- ✅ Sort by GPA - Sort all students by GPA (highest first)
- ✅ Input Validation - Handles invalid inputs, duplicate IDs, and GPA range errors

---

## Requirements

- C++11 or later
- Compiler with STL support (g++, clang++, MSVC)

---

## File Structure


---
├── Person.h # Base class (all methods inline)

├── Person.cpp # Empty file (implementation in header)

├── Student.h # Derived class declaration

├── Student.cpp # Derived class implementation

├── Mangment_System.cpp # Main program with menu interface

└── README.md # This file

## How to Compile and Run

### Linux / Mac / Windows

g++ -std=c++11 -o student_system.exe Student.cpp Mangment_System.cpp
student_system.exe
===============================
 Student Course Management System 
===============================
1. Add Student
2. Remove Student
3. Search Student
4. Display All Students
5. Enroll Student in Course
6. Show Student Courses
7. Sort Students by GPA
8. Exit
Choose an option:

===============================
 Student Course Management System 
===============================
1. Add Student
2. Remove Student
3. Search Student
4. Display All Students
5. Enroll Student in Course
6. Show Student Courses
7. Sort Students by GPA
8. Exit
Choose an option: 1

Enter Student ID: 1001
Enter Name: Ahmed Ali
Enter GPA (0.0 - 4.0): 3.75
Student added successfully!

Choose an option: 5
Enter Student ID: 1001
Enter Course Name: Mathematics
Course added successfully.

Choose an option: 6
Enter Student ID: 1001
Enrolled Courses: [Mathematics] 

Choose an option: 4
ID: 1001 | Name: Ahmed Ali | GPA: 3.75

Choose an option: 8
Exiting system. Goodbye!

OOP Concepts Used
Concept	Implementation

Inheritance	Student inherits from Person

Encapsulation	Private members with public getters/setters

Virtual Destructor	virtual ~Person() = default

STL Containers	vector<Student> and set<string>

STL Algorithms	find_if() for searching, sort() for sorting

Error Handling

Scenario	Input	Output

Duplicate ID	Add student with existing ID	"Error: ID already exists!"

Invalid GPA	GPA: 5.0	"Error: Invalid GPA range."

Invalid menu choice	Enter 9	"Invalid choice!"

Non-existent student	Search ID: 999	"Student not found!"

Empty list	Display with no students	"No students in system."

Test Cases
Test	Action	Expected Result	Status


1	Add valid student	Success message	✅

2	Add duplicate ID	Error message	✅

3	Add invalid GPA	Error message	✅

4	Search existing student	Display info	✅

5	Search non-existent	Not found message	✅

6	Remove student	Success message	✅

7	Enroll in course	Success message	✅

8	Enroll duplicate course	No duplicate	✅

9	Sort by GPA	Descending order	✅


## UML Class Diagram

┌─────────────────────────────────┐
│ Person │
├─────────────────────────────────┤
│ # name : string │
├─────────────────────────────────┤
│ + Person(n: string) │
│ + getName() : string │
│ + setName(n: string) : void │
└─────────────────────────────────┘
▲
│ (inheritance)
│
┌─────────────────────────────────┐
│ Student │
├─────────────────────────────────┤
│ - id : int │
│ - gpa : double │
│ - courses : set<string> │
├─────────────────────────────────┤
│ + Student(i: int, n: string, g: double) │
│ + getId() : int │
│ + getGpa() : double │
│ + setGpa(g: double) : void │
│ + enrollCourse(course: string) : void │
│ + displayCourses() : void │
│ + displayInfo() : void │
└─────────────────────────────────┘


Limitations
Data is stored in memory only (lost when program exits)


No file I/O for data persistence


Single-user console application


No GUI interface


Future Enhancements
Add file I/O to save/load student data

Implement course management system


Add search by name feature


Create GUI version


Add GPA calculation per semester


Author
Name:Khloud Ahmed Abeelkawy
Student ID: 12261
Course: C++ Programming


References
cppreference.com - C++ Standard Library Reference

C++ Programming Language, Bjarne Stroustrup

GeeksforGeeks - STL Algorithms Tutorials

