#include "human.h"
#include "student.h"
#include "tutor.h"

#include <conio.h>

int main()
{

	Student s1("Jan", "Nowak", male, 20, 123456, 1, "ICT", "Electronic dept.");
	s1.show();
	s1.info();

	Human h1("Jan", "Kowalski", male, 30);
	h1.show();

	Tutor t1("Halina", "Kowalska", female, 50, "Professor", 30);
	t1.show();
	t1.info();

	{
		Tutor t2("x", "y", male, 60, "Professor", 25); //zakres lokalny do sprawdzenia dzialania destruktora i poprawnosci zliczania
	}
	
	cout << "Meter: " << Human::meter << "\t" << h1.meter << "\t" << s1.meter << "\t" << t1.meter << "\n\n";

	h1 = s1;
	h1.show();

	s1.set_last_name("Brzeczyszczykiewicz");
	cout << s1.get_last_name();

	_getch();
}

//Wniosek 1:
//Slowo kluczowe public powoduje to, ze dziedziczone w klasie pochodnej skladniki public i protected nie zmieniaja swojego dostepu znanego z klasy podstawowej.
//Natomiast slowo protected sprawia, ze skladniki public i protected maja w klasie pochodnej dostep protected. Analogicznie private. W przypadku tego programu
//zmiana na slowo inne niz public, powoduje blad kompilatora, gdyz nie mozna wywolac odziedziczonej funkcji "show" (z dostepem private lub protected)
//dla danego obiektu "Student" bezposrednio w main'e.

//Wniosek 2:
//Licznik obiektow w klasie Human w zapytaniu o wartosc pochodzacym z klas pochodnych zwraca takie same wartosci jak dla klasy podstawowej.

//Wniosek 3:
//Konwersja obiektu klasy pochodnej do obiektu klasy bazowej jest mozliwa. Skutkuje ona "przepisaniem" danych skladowych (wspolnych dla obu klas) z obiektu klasy
//pochodnej do obiektu klasy bazowej. Z kolei odwrotna konwersja nie jest mozliwa.