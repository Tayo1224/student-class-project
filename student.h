#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    int studentID;
    string email;
    string department;
    string course;
    string password;

public:
    Student(string n, int a, int id, string e,
            string dept, string c, string p);

    int getStudentID() const;
    string getEmail() const;

    void displayInfo() const;
};

#endif
