#include <conio.h>

#include "Circle.h"

int main()
{
	Circle circle;
	Circle circle2(location{ 10., 4.5 }, 15);
	Circle circle3(location{ 8., 11.5 }, 20);
	Circle circle4(location{ 24., 3. }, 7);

	printf("Circle location is %.1fx%.1f., radius is %.1f.\n\n", //spawdzanie konstruktora domyslnego
		circle.get_location().x, circle.get_location().y, circle.get_radius());

	printf("Circle2 location is %.1fx%.1f., radius is %.1f.\n\n", //spawdzanie konstruktora z parametrami
		circle2.get_location().x, circle2.get_location().y, circle2.get_radius());

	circle.set_location(location{ 4., 2. });
	circle.set_radius(15.);

	printf("Circle location is %.1fx%.1f.\n",
		circle.get_location().x, circle.get_location().y);
	printf("Circle radius is %.1f.\n",
		circle.get_radius());
	printf("Circle circumference is %.2f.\n",
		circle.circumference());
	printf("Circle area is %.2f.\n\n",
		circle.area());


	Circle sum1 = circle2 + circle3;
	printf("circle 2 + circle 3: \n location: %.1fx%.1f, radius: %.1f. \n\n",
		sum1.get_location().x, sum1.get_location().y, sum1.get_radius());

	Circle sum2 = circle4 + circle;
	printf("circle 4 + circle: \n location: %.1fx%.1f, radius: %.1f. \n\n",
		sum2.get_location().x, sum2.get_location().y, sum2.get_radius());

	Circle scalar1 = circle2 * 10;
	printf("circle 2 * 10: \n location: %.1fx%.1f, radius: %.1f. \n\n",
		scalar1.get_location().x, scalar1.get_location().y, scalar1.get_radius());

	printf("The number of existing objects of class Circle: %.1d.\n\n", Circle::get_number_obj());

	_getch();
}

//Wniosek 1: Klasa Circle nie potrzebuje destruktora, poniewaz obiekty tej klasy nie rezerwuja duzej ilosci dodatkowej pamieci (np. dla wieloelementowych tablic
//definiowanych operatorem new), ktora wartobyloby zwolnic. Ewentualnie w przypadku usuwania obiektow (np. wyjscie z zakresu lokalnego) destruktor moze sie 
//przydac do zmniejszania licznka obiektow o 1.

//Wniosek 2: Zmienne i funkcje statyczne moga sie przydac do statystyki klasy - np. liczenie wywolan danej funkcji skladowej lub po prostu do okreslania
//cech wspolnych danych obiektow, ktore moga ulec zmianie. Zmienna statyczna moze byc takze argumentem domniemanym jakiejs funkcji skladowej klasy.
