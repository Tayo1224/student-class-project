#include "StudentManager.h"

bool StudentManager::isIDUnique(int id) const {
    for (const Student& student : students) {
        if (student.getStudentID() == id) {
            return false;
        }
    }
    return true;
}

bool StudentManager::isEmailUnique(const string& email) const {
    for (const Student& student : students) {
        if (student.getEmail() == email) {
            return false;
        }
    }
    return true;
}

bool StudentManager::addStudent(const Student& student) {
    if (!isIDUnique(student.getStudentID())) {
        return false;
    }

    if (!isEmailUnique(student.getEmail())) {
        return false;
    }

    students.push_back(student);
    return true;
}
