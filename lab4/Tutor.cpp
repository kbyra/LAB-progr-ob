#include "tutor.h"

#include <conio.h>

Tutor::Tutor(string name, string last_name, ::sex sex, int age, int nfavorite_books, string degree, int publications) : 
Human(name, last_name, sex, age, nfavorite_books), degree(degree), publications(publications)
{

}

Tutor::Tutor() : Human(), degree("unkown"), publications(0)
{

}

Tutor::~Tutor()
{

}

void Tutor::set_degree(string degree)
{
	this->degree = degree;
}
void Tutor::set_publications(int publications)
{
	this->publications = publications;
}

string Tutor::get_degree()
{
	return degree;
}

int Tutor::get_publications()
{
	return publications;
}

void Tutor::set_tutor()
{
	set_human();
	cout << "Degree: ";
	string degree;
	cin >> degree;
	set_degree(degree);
	cout << "Number of publications: ";
	int publications;
	cin >> publications;
	set_publications(publications);
}

void Tutor::info()
{
	cout << "degree: " << get_degree() << ", " << "number of publications: " << get_publications() << "\n\n";
}