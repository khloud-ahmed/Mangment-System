#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "Person.h"
#include <set>

class Student : public Person {
private:
    int id;
    double gpa;
    set<string> courses;

public:
    Student(int i, string n, double g);

    int getId() const;
    double getGpa() const;
    void setGpa(double g);

    void enrollCourse(const string& course);
    void displayCourses() const;
    void displayInfo() const;
};

#endif