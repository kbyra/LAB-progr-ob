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
	sex s;
	int age;

public:
	Human(char n[], char ln[], sex se, int a);
	~Human();
	void show();
	static int meter;

};

#endif