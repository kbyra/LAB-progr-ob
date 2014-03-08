#define _USE_MATH_DEFINES
#include <stdio.h>
#include <cmath>
#include <conio.h>

using namespace std;

struct location
{
	float x;
	float y;
};

class Circle
{
	location location;
	float radius;

public:
	void set_location(struct location l)
	{
		location.x = l.x;
		location.y = l.y;
	}

	::location get_location()
	{
		return location;
	}

	void set_radius(float r)
	{
		radius = r;
	}

	float get_radius()
	{
		return radius;
	}

	float circumference()
	{
		return 2 * M_PI * radius;
	}

	float area()
	{
		return M_PI * pow(radius, 2);
	}

};

int main()
{
	Circle circle;
	circle.set_location(location{ 4., 2. });
	circle.set_radius(15.);

	printf("Circle location is %.1fx%.1f.\n",
		circle.get_location().x, circle.get_location().y);
	printf("Circle radius is %.1f.\n",
		circle.get_radius());
	printf("Circle circumference is %.2f.\n",
		circle.circumference());
	printf("Circle area is %.2f.\n",
		circle.area());

	_getch();
}

// Wniosek 1: Zmienne obiektu struktury domyslnie sa widoczne.
// Wniosek 2: Zmienne obiektu klasy domyslnie sa nie widoczne - prywatne ("cannot access private member declared in class 'Circle'").
// Wniosek 3: Pobieramy i ustawiamy dane w klasie przy uzyciu specjalnych publicznych metod, poniewaz tylko metody danej klasy
//maja dostep do skladnikow private klasy.
