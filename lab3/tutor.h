#ifndef TUTOR_H
#define TUTOR_H

#include "human.h"

class Tutor : public Human
{

private:
	char *degree;
	int publications;

public:
	Tutor(char n[], char ln[], sex se, int a, char d[], int p);
	void info();

};

#endif