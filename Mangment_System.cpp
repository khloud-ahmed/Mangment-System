#include <iostream>
#include <vector>
#include <algorithm> // لاستخدام find_if و sort
#include "Student.h"

using namespace std;

// دالة مساعدة للبحث عن طالب بالـ ID باستخدام find_if
auto findStudent(vector<Student>& students, int id) {
    return find_if(students.begin(), students.end(), [id](const Student& s) {
        return s.getId() == id;
        });
}

// دالة مقارنة المعدل للترتيب
bool compareGpa(const Student& a, const Student& b) {
    return a.getGpa() > b.getGpa(); // من الأعلى للأقل
}

int main() {
    vector<Student> students; // حاوية حفظ الطلاب
    int choice;

    do {
        cout << "\n===============================\n";
        cout << " Student Course Management System \n";
        cout << "===============================\n";
        cout << "1. Add Student\n";
        cout << "2. Remove Student\n";
        cout << "3. Search Student\n";
        cout << "4. Display All Students\n";
        cout << "5. Enroll Student in Course\n";
        cout << "6. Show Student Courses\n";
        cout << "7. Sort Students by GPA\n";
        cout << "8. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Please enter a number.\n";
            continue;
        }

        switch (choice) {
        case 1: { // إضافة طالب
            int id;
            string name;
            double gpa;

            cout << "Enter Student ID: ";
            cin >> id;

            if (findStudent(students, id) != students.end()) {
                cout << "Error: ID already exists!\n";
                break;
            }

            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter GPA (0.0 - 4.0): ";
            cin >> gpa;

            if (gpa < 0.0 || gpa > 4.0) {
                cout << "Error: Invalid GPA range.\n";
            }
            else {
                students.push_back(Student(id, name, gpa));
                cout << "Student added successfully!\n";
            }
            break;
        }

        case 2: { // حذف طالب
            int id;
            cout << "Enter Student ID to remove: ";
            cin >> id;

            auto it = findStudent(students, id);
            if (it != students.end()) {
                students.erase(it);
                cout << "Student removed successfully.\n";
            }
            else {
                cout << "Student not found!\n";
            }
            break;
        }

        case 3: { // بحث عن طالب
            int id;
            cout << "Enter Student ID to search: ";
            cin >> id;

            auto it = findStudent(students, id);
            if (it != students.end()) {
                cout << "--- Student Found ---\n";
                it->displayInfo();
            }
            else {
                cout << "Student not found!\n";
            }
            break;
        }

        case 4: { // عرض الكل
            if (students.empty()) {
                cout << "No students in system.\n";
            }
            else {
                for (const auto& s : students) s.displayInfo();
            }
            break;
        }

        case 5: { // تسجيل مادة
            int id;
            string cName;

            cout << "Enter Student ID: ";
            cin >> id;

            auto it = findStudent(students, id);
            if (it != students.end()) {
                cout << "Enter Course Name: ";
                cin.ignore();
                getline(cin, cName);
                it->enrollCourse(cName);
                cout << "Course added successfully.\n";
            }
            else {
                cout << "Student not found!\n";
            }
            break;
        }

        case 6: { // عرض المواد
            int id;
            cout << "Enter Student ID: ";
            cin >> id;

            auto it = findStudent(students, id);
            if (it != students.end()) {
                it->displayCourses();
            }
            else {
                cout << "Student not found!\n";
            }
            break;
        }

        case 7: { 
            if (students.empty()) {
                cout << "No students to sort.\n";
            }
            else {
                sort(students.begin(), students.end(), compareGpa);
                cout << "Students sorted by GPA successfully!\n";
            }
            break;
        }

        case 8:
            cout << "Exiting system. Goodbye!\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 8);

    return 0;
}