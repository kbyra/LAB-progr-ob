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
	Student2(string n, string ln, sex se, int a, int nfb, int no, int sem, string ma, string dep, string deg);
	Student2();
	~Student2();
	void info2();
	void set_s2();
	void set_average();
	void show_average();
};

#endif
