#include "Student.h"

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
	cin >> register_no;
	cout << "Semester: ";
	cin >> semester;
	cout << "Major: ";
	cin >> major;
	cout << "Department: ";
	cin >> dept;
	cout << "\n";
}

void Student::info_student()
{
	cout << "register number: " << register_no << ", semester: " << semester << ", major: " << major << ", department: " << dept << "\n\n";
}

void Student::birthday()
{
	cout << "Birthday of student!\n";
}

void Student::operator==(Student_interface &s2)
{
	cout.width(30);
	cout << "\nComparing students:\n";
		cout.width(20);
		cout << "Name:\t" << this->name << "\t" << dynamic_cast<Student&>(s2).name << "\n";
		cout.width(20);
		cout << "Last name:\t" << this->last_name << "\t" << dynamic_cast<Student&>(s2).last_name << "\n";
		cout.width(20);
		cout << "Sex:\t";
		if (this->sex == 1)
			cout << "male\t";
		else
			cout << "female\t";
		if (dynamic_cast<Student&>(s2).sex == 1)
			cout << "male\n";
		else
			cout << "female\n";
		cout.width(20);
		cout << "Age:\t" << this->age << "\t" << dynamic_cast<Student&>(s2).age << "\n";
		cout.width(20);
		cout << "Register number:\t" << this->register_no << "\t" << dynamic_cast<Student&>(s2).register_no << "\n";
		cout.width(20);
		cout << "Semester:\t" << this->semester << "\t" << dynamic_cast<Student&>(s2).semester << "\n";
		cout.width(20);
		cout << "Major:\t" << this->major << "\t" << dynamic_cast<Student&>(s2).major << "\n";
		cout.width(20);
		cout << "Department:\t" << this->dept << "\t" << dynamic_cast<Student&>(s2).dept << "\n";
}