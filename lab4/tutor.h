#ifndef TUTOR_H
#define TUTOR_H

#include "human.h"

class Tutor : public Human
{

private:
	string degree;
	int publications;

public:
	Tutor(string n, string ln, sex se, int a, int nfb, string d, int p);
	Tutor();
	~Tutor();
	void info();
	void set_t();

};

#endif