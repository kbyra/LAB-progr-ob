#ifndef HUMAN_H
#define HUMAN_H

#include <cstring>
#include <iostream>

using namespace std;

enum sex {male = 1, female = 2};

class Human
{

private:
	char *name;
	char *last_name;
	::sex sex;
	int age;

public:
	Human(char name[], char last_name[], ::sex sex, int age);
	~Human();

	void set_name(char* name);
	void set_last_name(char* last_name);
	void set_sex(::sex sex);
	void set_age(int age);

	char *get_name();
	char *get_last_name();
	::sex get_sex();
	int get_age();

	void show();
	static int meter;

};

#endif