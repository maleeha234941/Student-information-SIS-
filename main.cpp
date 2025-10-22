#include "Student.h"
using namespace std;

int main() {
	
	Student s1;
	s1.setInfo("Ali", 20, 101, 3.8);
	s1.displayInfo();


	Student s2("Sara", 19, 102, 3.2);
	s2.displayInfo();

	
	Student s3("Hamza", 21, 103, 2.5);
	s3.displayInfo();

	cout << "-----------------------------" << endl;
	cout << "Program ended. Objects destroyed automatically." << endl;
	system("pause");
	return 0;
}