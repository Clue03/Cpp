#include <iostream>
#include <string>
#include "Employee.h"
#include "Sales.h"
using namespace std;

Sales::Sales() 
	:Employee()
{
	basePay = 0;
	salesRevenue = 0;
	cout << "Sales con" << endl;
}
Sales::Sales(string _name, int _basePay, int _salesRevenue) 
	:Employee(_name)
{
	name = _name;
	basePay = _basePay;
	salesRevenue = _salesRevenue;
	cout << "Sales parameter con" << endl;
}
Sales::Sales(const Sales& s) 
	:Employee(s)
{
	basePay = s.basePay;
	salesRevenue = s.salesRevenue;
	cout << "Sales copy con" << endl;
}
Sales::~Sales() {
	cout << "Sales decon" << endl;
}
int Sales::Getpay() {
	return basePay + ((double)salesRevenue * 0.15);
}
void Sales::Setbasepay(int b) {
	basePay = b;
}
string Sales::Getname() {
	return name;
}
//void Sales::Print() {
//	cout << "ÀÌ¸§: " << this->name << endl;
//	cout << "¼Òµæ: " << this->Getpay() << endl;
//}