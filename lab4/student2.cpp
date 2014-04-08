#include "student2.h"

Student2::Student2(string n, string ln, sex se, int a, int nfb, int no, int sem, string ma, string dep, string deg) : Student(n, ln, se, a, nfb, no, sem, ma, dep),
degree(deg)
{
	average = new double[sem];
}

Student2::Student2() : Student(), degree("unkown")
{
	average = new double[1];
}

Student2::~Student2()
{
	
}

void Student2::info2()
{
	cout << "degree: " << degree << "\n\n";
}

void Student2::set_s2()
{
	set_s();
	cout << "Degree: ";
	cin >> degree;
	cout << "\n";

}

void Student2::set_average()
{
	cout << "Type averages for semesters:\n";
	for (int i = 0; i < semester; i++)
	{
		 cout << i + 1 << ". ";
		 cin >> average[i];
	}
	cout << "\n";
		
}

void Student2::show_average()
{
	cout << "Averages for semesters:\n";
	for (int i = 0; i < semester; i++)
	{
		cout << i + 1 << ". " << average[i] << '\n';
	}
	cout << "\n";
}