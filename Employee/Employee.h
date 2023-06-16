#include <string>
using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
protected:
	string name;
public:
	Employee();
	Employee(string _name);
	Employee(const Employee& e);
	~Employee();
	virtual int Getpay();
	void Setpay(int n);
	string Getname();
	//void Print();
};

#endif // !EMPLOYEE_H
