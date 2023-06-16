#include "Employee.h"
#ifndef SALES_H
#define SALES_H

class Sales :Employee {
private:
	int basePay;
	int salesRevenue;
public:
	Sales();
	Sales(string _name, int _basePay, int _salesRevenue);
	Sales(const Sales& s);
	~Sales();
	int Getpay();
	string Getname();
	void Setbasepay(int b);
	void Print();
};

#endif // !SALES_H