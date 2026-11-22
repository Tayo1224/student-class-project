/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Student {

private:
	string name;
	int age;
	int studentID;
	string department;
	string course;
	double GPA;


public:
	// Constructor
	Student(string n, int a, int id, string dept, double gpa) {
		name = n;
		age = a;
		studentID  = id;
		department = dept;
		GPA = gpa;

	}

	// Display student information
	void displayInfo() {
		std:: cout  << "Student Information"  <<endl;
		std::cout << "Name: " << name << endl;
		std::cout << "Age: " << age << endl;
		std:: cout << "Student ID: " << studentID << endl;
		std::cout <<"Department: " << department << endl;
		std::cout <<"GPA: " << GPA << endl;

	}

	void registerCourse(string courseName) {

		cout << name << "has registered for " << courseName << "." << endl;

	}

	void study () {
		cout << name << "is studying." << endl;
	}

};

int main()   {

	Student student1 ("Chade", 22, 2026001, "Nursing", 3.5);

	student1.displayInfo();

	student1.registerCourse("Anatomy");

	student1.study();


	return 0;

}











