#ifndef TUTOR_H
#define TUTOR_H

#include "Human.h"

class Tutor : public Human
{

private:
	string degree;
	int publications;

public:
	Tutor(string name, string last_name, ::sex sex, int age, int nfavorite_books, string degree, int publications);
	Tutor();
	~Tutor();

	void set_degree(string degree);
	void set_publications(int publications);

	string get_degree();
	int get_publications();

	void set_tutor();
	void info();

	void birthday();

};

#endif