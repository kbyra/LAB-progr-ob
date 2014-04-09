#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include <iostream>

using namespace std;

enum sex {male = 1, female = 2};

class Human
{

protected:
	string name;
	string last_name;
	::sex sex;
	int age;
	int nfavorite_books;
	string *favorite_books = 0;

public:
	Human(string name, string last_name, ::sex sex, int age, int nfavorite_books);
	Human();
	virtual ~Human();

	void set_name(string name);
	void set_last_name(string last_name);
	void set_sex(::sex sex);
	void set_age(int age);
	void set_nfavorite_books(int nfavorite_books);
	void set_favorite_books(string *favorite_books);

	string get_name();
	string get_last_name();
	::sex get_sex();
	int get_age();
	int get_nfavorite_books();
	string *get_favorite_books();
	
	static int meter;

	void set_human(); //przydatne funkcje, umieszczone w przeladowanych operatorach, dzieki ktorym definicje tych operatorow sa czytelniejsze
	void show();

};

#endif