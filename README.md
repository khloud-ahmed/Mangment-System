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

### Linux / Mac

```bash
g++ -std=c++11 -o student_system Student.cpp Mangment_System.cpp
./student_system
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
