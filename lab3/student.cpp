#include "student.h"

Student::Student(char n[], char ln[], sex se, int a, int no, int sem, char ma[], char dep[]) : Human(n, ln, se, a), register_no(no), semester(sem)
{
	major = new char[strlen(ma) + 1];
	memcpy(major, ma, strlen(ma) + 1);

	dept = new char[strlen(dep) + 1];
	memcpy(dept, dep, strlen(dep) + 1);
}

void Student::info()
{
	cout << "register number: " << register_no << ", semester: " << semester << ", major: " << major << ", department: " << dept << "\n\n";
}