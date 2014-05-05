#include "Mammal.h"
#include "Human.h"
#include "Student_interface.h"
#include "Student.h"
#include "Tutor.h"
#include "Student2.h"

#include <conio.h>

ostream & operator<<(ostream & print, Human & h);
istream & operator>>(istream & keyboard, Human & h);

ostream & operator<<(ostream & print, Student & s);
istream & operator>>(istream & keyboard, Student & s);

ostream & operator<<(ostream & print, Tutor & t);
istream & operator>>(istream & keyboard, Tutor & t);

ostream & operator<<(ostream & print, Student2 & s2);
istream & operator>>(istream & keyboard, Student2 & s2);

int main()
{

	Student s1("Jan", "Nowak", male, 20, 1, 123456, 2, "ICT", "WEKA");
	Student s2("Arnold", "Boczek", male, 50, 2, 654321, 4, "IT", "WEKA");
	Human h1("Jan", "Kowalski", male, 30, 1);
	Tutor t1("Halina", "Kowalska", female, 50, 2, "Professor", 30);
	Student2 s21("Marian", "Pazdzioch", male, 55, 10, 112233, 2, "Telecom", "WEKA", "Engineer");
	Student2 s22("Janina", "Kowalska", female, 25, 4, 445566, 1, "IT", "WPPT", "Engineer");

	Mammal *pointer;
	pointer = &s1;
	pointer->birthday();
	pointer = &h1;
	pointer->birthday();
	pointer = &t1;
	pointer->birthday();

	s1 == s2;
	s21 == s22;

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
<<<<<<< HEAD
//Po utworzeniu klasy abstrakcyjnej Mammal, a w niej funkcji czysto wirtualnej birthday, niezbedne bylo napisanie funkcji birthday w klasach dziedziczacych po Mammal,
=======
//Po utworzeniu klasy abstrakcyjnej Mammal, a w niej funkcji czysto wirtualnej birthday, niezbedne by³o napisanie funkcji birthday w klasach dziedziczacych po Mammal,
>>>>>>> 4b26f7066b12624182b28ce12306f88f29b6ea91
//poniewaz bez tego klasy pochodne dziedzicza funkcje czysto wirtualna i sa traktowane jako klasy abstrakcyjne, co uniemozliwia utworzenie ich obiektow.
//Przykladowe zastosowanie zalet polimorfizmu - dzieki funkcji czysto wirtualnej wskaznik na obiekt Mammal wybiera odpowiednia funkcje birthday, w zaleznosci na co wskazuje.

//Wniosek 2:
//Klasa abstrakcyjna bedaca interfejsem zawiera wylacznie publiczne deklaracje funkcji czysto wirtualnych, w odroznieniu od zwyklej klasy abstrakcyjnej ktora musi zawierac co najmniej
<<<<<<< HEAD
//jedna funkcje czysto wirtualna, a poza nia moze miec np. jakies zdefiniowane funkcje skladowe lub dane (niekoniecznie publiczne). Klasa abstrakcyjna z interfejsem gwarantuje to, ze klasa ja
=======
//jedna funkcje czysto wirtualna, a poza nia moze miec np. jakies zdefiniowane funkcje skladowe lub dane. Klasa abstrakcyjna z interfejsem gwarantuje to, ze klasa ja
>>>>>>> 4b26f7066b12624182b28ce12306f88f29b6ea91
//implementujaca bedzie zawierala jej metody. Zwykla klasa moze implementowac wiele interfejsow. Interfejs przydaje sie gdy zalezy nam na polimorfizmie i
//zaimplementujemy go do kilku klas.