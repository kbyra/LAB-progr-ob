#include "human.h"

int Human::meter = 0;

Human::Human(char n[], char ln[], sex se, int a)
{

	name = new char[strlen(n) + 1];
	memcpy(name, n, strlen(n) + 1);

	last_name = new char[strlen(ln) + 1];
	memcpy(last_name, ln, strlen(ln) + 1);

	s = se;
	age = a;

	meter++;

}

Human::~Human()
{

	meter--;

}

void Human::show()
{

	cout << name << " " << last_name << " ";
	if (s == 1)
		cout << "male ";
	else if (s == 2)
		cout << "female ";
	cout << age << "\n\n";

}