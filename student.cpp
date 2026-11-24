#include "Student.h"
#include <iostream>
#include <stdexcept>

Student::Student(string n, int a, int id, string e,
                 string dept, string c, string p) {

    if (p.length() < 8) {
        throw invalid_argument("Password must contain at least 8 characters.");
    }

    name = n;
    age = a;
    studentID = id;
    email = e;
    department = dept;
    course = c;
    password = p;
}

int Student::getStudentID() const {
    return studentID;
}

string Student::getEmail() const {
    return email;
}

void Student::displayInfo() const {
    cout << "\n--- Student Information ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Student ID: " << studentID << endl;
    cout << "Email: " << email << endl;
    cout << "Department: " << department << endl;
    cout << "Course: " << course << endl;
}
