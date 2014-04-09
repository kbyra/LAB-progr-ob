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
	Student(string name, string last_name, ::sex sex, int age, int nfavorite_books, int register_no, int semester, string major, string dept);
	Student();
	~Student();

	void set_register_no(int register_no);
	void set_semester(int semester);
	void set_major(string major);
	void set_dept(string dept);

	int get_register_no();
	int get_semester();
	string get_major();
	string get_dept();

	void set_student();
	void info_student();
	
};

#endif