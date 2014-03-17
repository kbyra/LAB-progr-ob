#include "Circle.h"

int Circle::number_obj;

Circle::Circle()
{
	location = { 0, 0 };
	radius = 0;
	number_obj++;
}

Circle::Circle(struct location l, float r)
{
	location = l;
	radius = r;
	number_obj++;
}

Circle::~Circle()
{
	/*printf("Destruktor pracuje (okrag o lokalizacji: %.1fx%.1f i promieniu: %.1f\n", //sprawdzenie dzialania destruktora
		get_location().x, get_location().y, get_radius());*/
}

void Circle::set_location(struct location l)
{
	location = l;
}

::location Circle::get_location()
{
	return location;
}

void Circle::set_radius(float r)
{
	radius = r;
}

float Circle::get_radius()
{
	return radius;
}

float Circle::circumference()
{
	return 2 * M_PI * radius;
}

float Circle::area()
{
	return M_PI * pow(radius, 2);
}

int Circle::get_number_obj()
{
	return number_obj;
}

Circle Circle::operator+(Circle & plus)
{
	Circle sum;
	sum.location.x = (location.x + plus.location.x)/2;
	sum.location.y = (location.y + plus.location.y)/2;
	sum.radius = radius + plus.radius;
	return sum;
}

Circle Circle::operator*(float scalar)
{
	Circle sca(location, radius * scalar);
	return sca;
}