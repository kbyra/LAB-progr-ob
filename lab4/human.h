#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include <iostream>

using namespace std;

enum sex {male = 1, female = 2};

class Human
{

private:
	string name;
	string last_name;
	sex s;
	int age;
	int nfavorite_books;
	string *favorite_books = 0;

public:
	Human(string n, string ln, sex se, int a, int nfb);
	Human();
	virtual ~Human();
	void show();
	static int meter;
	void set();
	void add_books();
	void show_books();

};

#endif