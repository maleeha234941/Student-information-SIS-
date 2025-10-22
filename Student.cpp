#include "Student.h"

Student::Student() {
	name = "Unknown";
	age = 0;
	rollNo = 0;
	gpa = 0.0;
	cout << "Default constructor called for " << name << endl;
}


Student::Student(string n, int a, int r, float g) {
	name = n;
	age = a;
	rollNo = r;
	gpa = g;
	cout << "Parameterized constructor called for " << name << endl;
}


Student::~Student() {
	cout << "Destructor called for " << name << endl;
}


void Student::setInfo(string n, int a, int r, float g) {
	name = n;
	age = a;
	rollNo = r;
	gpa = g;
}

void Student::displayInfo() {
	cout << "-----------------------------" << endl;
	cout << "Name: " << name
		<< " | Age: " << age
		<< " | Roll No: " << rollNo
		<< " | GPA: " << gpa
		<< " | Grade: " << calculateGrade()
		<< endl;
}


string Student::calculateGrade() {
	if (gpa >= 3.5)
		return "A";
	else if (gpa >= 3.0)
		return "B";
	else if (gpa >= 2.5)
		return "C";
	else if (gpa >= 2.0)
		return "D";
	else
		return "F";
}