#ifndef STUDENT2_H
#define STUDENT2_H

#include "student.h"

class Student2 : public Student
{

friend ostream & operator<<(ostream & print, Student2 & s2);
friend istream & operator>>(istream & keyboard, Student2 & s2);

private:
	string degree;
	double *average = 0;

public:
	Student2(string name, string last_name, ::sex sex, int age, int nfavorite_books, int register_no, int semester, string major, string dept, string degree);
	Student2();
	~Student2();

	void set_degree(string degree);
	void set_average(double *average);

	string get_degree();
	double *get_average();

	void set_student2();
	void info_student2();

};

#endif
