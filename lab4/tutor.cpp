#include "tutor.h"

#include <conio.h>

Tutor::Tutor(string n, string ln, sex se, int a, int nfb, string d, int p) : Human(n, ln, se, a, nfb), degree(d), publications(p)
{

}

Tutor::Tutor() : Human(), degree("unkown"), publications(0)
{

}

Tutor::~Tutor()
{

}

void Tutor::info()
{
	cout << "degree: " << degree << ", " << "number of publications: " << publications << "\n\n";
}

void Tutor::set_t()
{
	set();
	cout << "Degree: ";
	cin >> degree;
	cout << "Number of publications: ";
	cin >> publications;
}