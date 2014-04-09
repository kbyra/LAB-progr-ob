#include "tutor.h"

#include <conio.h>

Tutor::Tutor(char name[], char last_name[], ::sex sex, int age, char degree[], int publications) : Human(name, last_name, sex, age), publications(publications)
{
	this->degree = new char[strlen(degree) + 1];
	memcpy(this->degree, degree, strlen(degree) + 1);
}

void Tutor::set_degree(char *degree)
{
	this->degree = new char[strlen(degree) + 1];
	memcpy(this->degree, degree, strlen(degree) + 1);
}

void Tutor::set_publications(int publications)
{
	this->publications = publications;
}

char *Tutor::get_degree()
{
	return degree;
}

int Tutor::get_publications()
{
	return publications;
}

void Tutor::info()
{
	cout << "degree: " << degree << ", " << "number of publications: " << publications << "\n\n";
}