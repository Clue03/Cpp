#include "Employee.h"
#ifndef PERMANENT_H
#define PERMANENT_H

class Permanent : Employee {
private:
	int salary;
public:
	Permanent();
	Permanent(string _name, int _salary);
	Permanent(const Permanent& p);
	~Permanent();
	int Getpay();
	string Getname();
	void Setsalary(int sal);
	void Print();
};

#endif // !PERMANENT_H