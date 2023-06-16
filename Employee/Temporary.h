#include "Employee.h"
#ifndef TEMPORARY_H
#define TEMPORARY_H

class Temporary :Employee {
private:
	int hours;
	int hourlywage;
public:
	Temporary();
	Temporary(string _name, int _hours, int _hourlywage);
	Temporary(const Temporary& t);
	~Temporary();
	int Getpay();
	string Getname();
	void Sethours(int h);
	void SethourlyWage(int w);
	void Print();
};

#endif // !TEMPORARY_H
