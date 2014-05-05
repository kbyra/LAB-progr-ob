#ifndef STUDENT_INTERFACE_H
#define STUDENT_INTERFACE_H

class Student_interface
{
public:
	virtual void operator==(Student_interface &s2) = 0;
};

#endif