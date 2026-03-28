#include "Student.h"
#include <iostream>


Student::Student(int i, string n, double g) : Person(n), id(i), gpa(g) {}

int Student::getId() const {
    return id;
}

double Student::getGpa() const {
    return gpa;
}

void Student::setGpa(double g) {
    if (g >= 0.0 && g <= 4.0) {
        gpa = g;
    }
}

void Student::enrollCourse(const string& course) {
    courses.insert(course); 
}

void Student::displayCourses() const {
    if (courses.empty()) {
        cout << "No courses enrolled yet.\n";
        return;
    }
    cout << "Enrolled Courses: ";
    for (const auto& course : courses) {
        cout << "[" << course << "] ";
    }
    cout << endl;
}

void Student::displayInfo() const {
    cout << "ID: " << id << " | Name: " << name << " | GPA: " << gpa << endl;
}