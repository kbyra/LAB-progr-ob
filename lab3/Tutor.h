#ifndef TUTOR_H
#define TUTOR_H

#include "human.h"

class Tutor : public Human
{

private:
	char *degree;
	int publications;

public:
	Tutor(char name[], char last_name[], ::sex sex, int age, char degree[], int publications);

	void set_degree(char *degree);
	void set_publications(int publications);

	char *get_degree();
	int get_publications();

	void info();

};

#endif