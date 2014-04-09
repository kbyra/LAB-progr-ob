#ifndef STUDENT_H
#define STUDENT_H

#include "human.h"

class Student : public Human
{

private:
	int register_no;
	int semester;
	char *major;
	char *dept;

public:
	Student(char name[], char last_name[], ::sex sex, int age, int register_no, int semester, char major[], char dept[]);
	
	void set_register_no(int register_no);
	void set_semester(int semester);
	void set_major(char *major);
	void set_dept(char *dept);

	int get_register_no();
	int get_semester();
	char *get_major();
	char *get_dept();

	void info();
	
};

#endif