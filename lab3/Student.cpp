#include "student.h"

Student::Student(char name[], char last_name[], ::sex sex, int age, int register_no, int semester, char major[], char dept[]) : 
Human(name, last_name, sex, age), register_no(register_no), semester(semester)
{
	this->major = new char[strlen(major) + 1];
	memcpy(this->major, major, strlen(major) + 1);

	this->dept = new char[strlen(dept) + 1];
	memcpy(this->dept, dept, strlen(dept) + 1);
}

void Student::set_register_no(int register_no)
{
	this->register_no = register_no;
}

void Student::set_semester(int semester)
{
	this->semester = semester;
}
void Student::set_major(char *major)
{
	this->major = new char[strlen(major) + 1];
	memcpy(this->major, major, strlen(major) + 1);
}

void Student::set_dept(char *dept)
{
	this->dept = new char[strlen(dept) + 1];
	memcpy(this->dept, dept, strlen(dept) + 1);
}

int Student::get_register_no()
{
	return register_no;
}

int Student::get_semester()
{
	return semester;
}

char *Student::get_major()
{
	return major;
}

char *Student::get_dept()
{
	return dept;
}

void Student::info()
{
	cout << "register number: " << register_no << ", semester: " << semester << ", major: " << major << ", department: " << dept << "\n\n";
}