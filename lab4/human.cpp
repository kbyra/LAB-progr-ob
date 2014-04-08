#include "human.h"

int Human::meter = 0;

Human::Human(string n, string ln, sex se, int a, int nfb) : name(n), last_name(ln), s(se), age(a), nfavorite_books(nfb)
{
	meter++;
}

Human::Human() : name("unkown"), last_name("unkown"), s(male), age(0), nfavorite_books(0)
{
	meter++;
}

Human::~Human()
{
	meter--;
}

void Human::show()
{

	cout << "--------------------------------------------------\n" 
		<< name << " " << last_name << " ";
	if (s == 1)
		cout << "male ";
	else if (s == 2)
		cout << "female ";
	cout << age << "\n\n";

}

void Human::set()
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
		s = male;
	else if (sc == 2)
		s = female;
	
	cout << "Age: ";
	cin >> age;

}

void Human::add_books()
{
	cout << "Number of favorite books: ";
	cin >> nfavorite_books;

	if (nfavorite_books != 0)
	{
		favorite_books = new string[nfavorite_books];
		cout << "Type " << nfavorite_books << " favorite books:\n";
		for (int i = 0; i < nfavorite_books; i++)
		{
			cout << i+1 << ". ";
			cin >> favorite_books[i];
		}
		cout << "\n";
	}
}

void Human::show_books()
{
	if (nfavorite_books != 0)
	{
		cout << nfavorite_books << " favorite books:\n";
		for (int i = 0; i < nfavorite_books; i++)
			cout << i + 1 << ". " << favorite_books[i] << "\n";

		cout << "\n";
	}
}