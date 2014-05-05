#include "Human.h"

int Human::meter = 0;

Human::Human(string name, string last_name, ::sex sex, int age, int nfavorite_books) : name(name), last_name(last_name), sex(sex), age(age),
nfavorite_books(nfavorite_books)
{
	meter++;
}

Human::Human() : name("unkown"), last_name("unkown"), sex(male), age(0), nfavorite_books(0)
{
	meter++;
}

Human::~Human()
{
	meter--;
}

void Human::set_name(string name)
{
	this->name = name;
}

void Human::set_last_name(string last_name)
{
	this->last_name = last_name;
}

void Human::set_sex(::sex sex)
{
	this->sex = sex;
}

void Human::set_age(int age)
{
	this->age = age;
}

void Human::set_nfavorite_books(int nfavorite_books)
{
	this->nfavorite_books = nfavorite_books;
}

void Human::set_favorite_books(string *favorite_books)
{
	this->favorite_books = favorite_books;
}

string Human::get_name()
{
	return name;
}

string Human::get_last_name()
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

int Human::get_nfavorite_books()
{
	return nfavorite_books;
}

string *Human::get_favorite_books()
{
	return favorite_books;
}

void Human::show()
{
	cout << "--------------------------------------------------\n"
		<< name << " " << last_name << " ";
	if (sex == 1)
		cout << "male ";
	else if (sex == 2)
		cout << "female ";
	cout << age << "\n";
	cout << "\n";

	if (nfavorite_books != 0)
	{
		cout << nfavorite_books << " favorite books:\n";
		for (int i = 0; i < nfavorite_books; i++)
			cout << i + 1 << ". " << favorite_books[i] << "\n";

		cout << "\n";
	}
}

void Human::set_human()
{
	cout << "--------------------------------------------------\n" 
		<< "Enter name: ";
	cin >> name;
	cout << "Last name: ";
	cin >> last_name;
	cout << "Sex [1]male, [2]female: ";

	int sc;
	cin >> sc;
	if (sc == 1)
		sex = male;
	else if (sc == 2)
		sex = female;
	
	cout << "Age: ";
	cin >> age;

	cout << "Number of favorite books: ";
	cin >> nfavorite_books;

	if (nfavorite_books != 0)
	{
		favorite_books = new string[nfavorite_books];
		cout << "Type " << nfavorite_books << " favorite books:\n";
		for (int i = 0; i < nfavorite_books; i++)
		{
			cout << i + 1 << ". ";
			cin >> favorite_books[i];
		}
		cout << "\n";
	}
}

void Human::birthday()
{
	cout << "Birthday of human!\n";
}