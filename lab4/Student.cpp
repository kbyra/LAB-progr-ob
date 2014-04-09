#include "student.h"

Student::Student(string name, string last_name, ::sex sex, int age, int nfavoritebooks, int register_no, int semester, string major, string dept) : 
Human(name, last_name, sex, age, nfavoritebooks), register_no(register_no), semester(semester), major(major), dept(dept)
{

}

Student::Student() : Human(), register_no(0), semester(0), major("unkown"), dept("unkown")
{

}

Student::~Student()
{

}

void Student::set_register_no(int register_no)
{
	this->register_no = register_no;
}

void Student::set_semester(int semester)
{
	this->semester = semester;
}

void Student::set_major(string major)
{
	this->major = major;
}
void Student::set_dept(string dept)
{
	this->dept = dept;
}

int Student::get_register_no()
{
	return register_no;
}
int Student::get_semester()
{
	return semester;
}
string Student::get_major()
{
	return major;
}
string Student::get_dept()
{
	return dept;
}

void Student::set_student()
{
	set_human();
	cout << "Register number: ";
	int register_no;
	cin >> register_no;
	set_register_no(register_no);
	cout << "Semester: ";
	int semester;
	cin >> semester;
	set_semester(semester);
	cout << "Major: ";
	string major;
	cin >> major;
	set_major(major);
	cout << "Department: ";
	string dept;
	cin >> dept;
	set_dept(dept);
	cout << "\n";
}

void Student::info_student()
{
	cout << "register number: " << get_register_no() << ", semester: " << get_semester() << ", major: " << get_major() << ", department: " << get_dept() << "\n\n";
}