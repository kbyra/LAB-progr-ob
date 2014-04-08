#ifndef STUDENT_H
#define STUDENT_H

#include "human.h"

class Student : public Human
{

protected:
	int register_no;
	int semester;
	string major;
	string dept;
	string *dynamism = 0;

public:
	Student(string n, string ln, sex se, int a, int nfb, int no, int sem, string ma, string dep);
	Student();
	~Student();
	void info();
	void set_s();
	
};

#endif