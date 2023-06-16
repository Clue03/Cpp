#include <iostream>
#include <string>
#include "Employee.h"
#include "Permanent.h"
using namespace std;

Permanent::Permanent() 
	:Employee()
{
	salary = 0;
	cout << "Permanent con" << endl;
}
Permanent::Permanent(string _name, int _salary) 
	:Employee(_name)
{
	name = _name;
	salary = _salary;
	cout << "Permanent parameter con" << endl;
}
Permanent::Permanent(const Permanent& p)
	:Employee(p)
{
	salary = p.salary;
	cout << "Permanent copy con" << endl;
}
Permanent::~Permanent() {
	cout << "Permanent decon" << endl;
}
int Permanent::Getpay() {
	return salary;
}
void Permanent::Setsalary(int sal) {
	salary = sal;
}
string Permanent::Getname() {
	return name;
}
//void Permanent::Print() {
//	cout << "ÀÌ¸§: " << name << endl;
//	cout << "¼Òµæ: " << Getpay() << endl;
//}