#include "tutor.h"

#include <conio.h>

Tutor::Tutor(char n[], char ln[], sex se, int a, char de[], int p) : Human(n, ln, se, a), publications(p)
{
	degree = new char[strlen(de) + 1];
	memcpy(degree, de, strlen(de) + 1);
}

void Tutor::info()
{
	cout << "degree: " << degree << ", " << "number of publications: " << publications << "\n\n";
}