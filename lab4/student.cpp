#include "student.h"

Student::Student(string n, string ln, sex se, int a, int nfb, int no, int sem, string ma, string dep) : Human(n, ln, se, a, nfb), register_no(no),
semester(sem), major(ma), dept(dep)
{

}

Student::Student() : Human(), register_no(0), semester(0), major("unkown"), dept("unkown")
{

}

Student::~Student()
{

}

void Student::info()
{
	cout << "register number: " << register_no << ", semester: " << semester << ", major: " << major << ", department: " << dept << "\n\n";
}

void Student::set_s()
{
	set();
	cout << "Register number: ";
	cin >> register_no;
	cout << "Semester: ";
	cin >> semester;
	cout << "Major: ";
	cin >> major;
	cout << "Department: ";
	cin >> dept;
	cout << "\n";

}