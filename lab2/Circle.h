#ifndef _CIRCLE_H
#define _CIRCLE_H

#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdio>

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
	static int number_obj;

public:
	Circle();
	Circle(struct location l, float r);
	~Circle();

	void set_location(struct location l);
	::location get_location();
	void set_radius(float r);
	float get_radius();
	float circumference();
	float area();

	static int get_number_obj();
	Circle operator+(Circle & plus);
	Circle operator*(float scalar);
};

#endif