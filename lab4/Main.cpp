#include "human.h"
#include "student.h"
#include "tutor.h"
#include "student2.h"

#include <conio.h>

//przeladowanie operatorow << i >> dla klasy human
ostream & operator<<(ostream & print, Human & h);
istream & operator>>(istream & keyboard, Human & h);

//dla klasy student
ostream & operator<<(ostream & print, Student & s);
istream & operator>>(istream & keyboard, Student & s);

//dla klasy tutor
ostream & operator<<(ostream & print, Tutor & t);
istream & operator>>(istream & keyboard, Tutor & t);

//dla klasy student2
ostream & operator<<(ostream & print, Student2 & s2);
istream & operator>>(istream & keyboard, Student2 & s2);

int main()
{

	Student s1("Jan", "Nowak", male, 20, 123456, 1, 2, "ICT", "Electronic dept.");
	Human h1("Jan", "Kowalski", male, 30, 1);
	Tutor t1("Halina", "Kowalska", female, 50, 2, "Professor", 30);

	Student2 anonim;
	cout << anonim;
	cin >> anonim;
	cout << anonim;

	//cout << "Meter: " << Human::meter << "\n\n";

	_getch();
}

ostream & operator<<(ostream & print, Human & h)
{
	h.show();
	return print;
}

istream & operator>>(istream & keyboard, Human & h)
{
	h.set_human();
	return keyboard;
}

ostream & operator<<(ostream & print, Student & s)
{
	s.show();
	s.info_student();
	return print;
}

istream & operator>>(istream & keyboard, Student & s)
{
	s.set_student();
	return keyboard;
}

ostream & operator<<(ostream & print, Tutor & t)
{
	t.show();
	t.info();
	return print;
}

istream & operator>>(istream & keyboard, Tutor & t)
{
	t.set_tutor();
	return keyboard;
}

ostream & operator<<(ostream & print, Student2 & s2)
{
	s2.show();
	s2.info_student();
	s2.info_student2();
	return print;
}

istream & operator>>(istream & keyboard, Student2 & s2)
{
	s2.set_student2();
	return keyboard;
}

//Wniosek 1:
//Destruktor wirtualny powoduje to, ¿e przy niszczeniu obiektów klas pochodnych s¹ wywo³ywane ich w³asne destruktory, a nie tylko destruktor klasy podstawowej.
//Jest on przydatny, gdy klasy pochodne rezerwuj¹ jak¹œ dodatkow¹ pamiêæ, któr¹ trzeba zwolniæ.