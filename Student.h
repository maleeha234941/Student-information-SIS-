#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;


class Student {
private:
	string name;
	int age;
	int rollNo;
	float gpa;

public:
	
	Student();


	Student(string n, int a, int r, float g);

	
	~Student();

	
	void setInfo(string n, int a, int r, float g);

	
	void displayInfo();


	string calculateGrade();
};

#endif