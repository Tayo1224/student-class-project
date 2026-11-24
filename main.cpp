#include <iostream>
#include <stdexcept>
#include "Student.h"
#include "StudentManager.h"

using namespace std;

int main() {
    StudentManager manager;

    try {
        Student student1(
            "Chade", 22, 2026001,
            "chade@example.com",
            "Nursing", "Anatomy", "Chade123"
        );

        if (manager.addStudent(student1)) {
            cout << "Student added successfully!" << endl;
            student1.displayInfo();
        }

        Student student2(
            "Sarah", 21, 2026001,
            "sarah@example.com",
            "Nursing", "Biology", "Sarah123"
        );

        if (!manager.addStudent(student2)) {
            cout << "\nError: Student ID or email already exists."
                 << endl;
        }

    } catch (const invalid_argument& error) {
        cerr << "Error: " << error.what() << endl;
        return 1;
    }

    return 0;
}
