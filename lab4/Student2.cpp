#include "student2.h"

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
	string degree;
	cin >> degree;
	set_degree(degree);
	cout << "\n";

	if (get_semester() != 0)
	{
		cout << "Type averages for semesters:\n";
		double *average = new double[get_semester()];
		for (int i = 0; i < get_semester(); i++)
		{
			cout << i + 1 << ". ";
			cin >> average[i];
		}
		set_average(average);
	}
	cout << "\n";
}

void Student2::info_student2()
{
	cout << "degree: " << get_degree() << "\n";
	if (get_semester() != 0)
	{
		cout << "Averages for semesters:\n";
		for (int i = 0; i < get_semester(); i++)
		{
			cout << i + 1 << ". " << get_average()[i] << '\n';
		}
		cout << "\n";
	}
}
