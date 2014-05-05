#include "Student2.h"

Student2::Student2(string name, string last_name, ::sex sex, int age, int nfavorite_books, int register_no, int semester, string major, string dept, string degree) :
Student(name, last_name, sex, age, nfavorite_books, register_no, semester, major, dept), degree(degree)
{
	average = new double[semester];
}

Student2::Student2() : Student(), degree("unkown")
{
	average = new double[1];
}

Student2::~Student2()
{

}

void Student2::set_degree(string degree)
{
	this->degree = degree;
}

void Student2::set_average(double *average)
{
	this->average = average;
}

string Student2::get_degree()
{
	return degree;
}

double *Student2::get_average()
{
	return average;
}

void Student2::set_student2()
{
	set_student();
	cout << "Degree: ";
	cin >> degree;
	cout << "\n";

	if (get_semester() != 0)
	{
		cout << "Type averages for semesters:\n";
		average = new double[semester];
		for (int i = 0; i < semester; i++)
		{
			cout << i + 1 << ". ";
			cin >> average[i];
		}
	}
	cout << "\n";
}

void Student2::info_student2()
{
	cout << "degree: " << degree << "\n";
	if (semester != 0)
	{
		cout << "Averages for semesters:\n";
		for (int i = 0; i < semester; i++)
		{
			cout << i + 1 << ". " << average[i] << '\n';
		}
		cout << "\n";
	}
}

void Student2::birthday()
{
	cout << "Birthday od student2!\n";
}

void Student2::operator==(Student_interface &s2)
{
	cout.width(30);
	cout << "\nComparing students:\n";
	cout.width(20);
	cout << "Name:\t" << this->name << "\t" << dynamic_cast<Student2&>(s2).name << "\n";
	cout.width(20);
	cout << "Last name:\t" << this->last_name << "\t" << dynamic_cast<Student2&>(s2).last_name << "\n";
	cout.width(20);
	cout << "Sex:\t";
	if (this->sex == 1)
		cout << "male\t";
	else
		cout << "female\t";
	if (dynamic_cast<Student2&>(s2).sex == 1)
		cout << "male\n";
	else
		cout << "female\n";
	cout.width(20);
	cout << "Age:\t" << this->age << "\t" << dynamic_cast<Student2&>(s2).age << "\n";
	cout.width(20);
	cout << "Register number:\t" << this->register_no << "\t" << dynamic_cast<Student2&>(s2).register_no << "\n";
	cout.width(20);
	cout << "Semester:\t" << this->semester << "\t" << dynamic_cast<Student2&>(s2).semester << "\n";
	cout.width(20);
	cout << "Major:\t" << this->major << "\t" << dynamic_cast<Student2&>(s2).major << "\n";
	cout.width(20);
	cout << "Department:\t" << this->dept << "\t" << dynamic_cast<Student2&>(s2).dept << "\n";
	cout.width(20);
	cout << "Degree:\t" << this->degree << "\t" << dynamic_cast<Student2&>(s2).degree << "\n";
}