#include "human.h"

int Human::meter = 0;

Human::Human(char name[], char last_name[], ::sex sex, int age) : sex(sex), age(age)
{

	this->name = new char[strlen(name) + 1];
	memcpy(this->name, name, strlen(name) + 1);

	this->last_name = new char[strlen(last_name) + 1];
	memcpy(this->last_name, last_name, strlen(last_name) + 1);

	meter++;

}

Human::~Human()
{
	meter--;
}

void Human::set_name(char* name)
{
	this->name = new char[strlen(name) + 1];
	memcpy(this->name, name, strlen(name) + 1);
}

void Human::set_last_name(char* last_name)
{
	this->last_name = new char[strlen(last_name) + 1];
	memcpy(this->last_name, last_name, strlen(last_name) + 1);
}

void Human::set_sex(::sex sex)
{
	this->sex = sex;
}

void Human::set_age(int age)
{
	this->age = age;
}

char *Human::get_name()
{
	return name;
}

char *Human::get_last_name()
{
	return last_name;
}

::sex Human::get_sex()
{
	return sex;
}

int Human::get_age()
{
	return age;
}

void Human::show()
{

	cout << name << " " << last_name << " ";
	if (sex == 1)
		cout << "male ";
	else if (sex == 2)
		cout << "female ";
	cout << age << "\n\n";

}