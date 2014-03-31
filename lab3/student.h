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
	Student(char n[], char ln[], sex se, int a, int no, int sem, char ma[], char dep[]);
	void info();
	
};

#endif