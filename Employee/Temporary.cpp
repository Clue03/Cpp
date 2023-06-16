#include <iostream>
#include <string>
#include "Employee.h"
#include "Temporary.h"
using namespace std;

Temporary::Temporary() 
	:Employee()
{
	hours = 0;
	hourlywage = 0;
	cout << "Temporary con" << endl;
}
Temporary::Temporary(string _name, int _hours, int _hourlywage) 
	:Employee(_name)  // ��ü�� ����ȯ (bObj = dObj)
{
	name = _name;
	hours = _hours;
	hourlywage = _hourlywage;
	cout << "Temporary parameter con" << endl;
}
Temporary::Temporary(const Temporary& t) 
	:Employee(t)
{
	hours = t.hours;
	hourlywage = t.hourlywage;
	cout << "Temporary copy con" << endl;
}
Temporary::~Temporary() {
	cout << "Temporary decon" << endl;
}
int Temporary::Getpay() {
	return hours * hourlywage;
}
void Temporary::Sethours(int h) {
	hours = h;
}
void Temporary::SethourlyWage(int w) {
	hourlywage = w;
}
string Temporary::Getname() {
	return name;
}
//void Temporary::Print() {
//	cout << "�̸�: " << this->name << endl;
//	cout << "�ҵ�: " << this->Getpay() << endl;
//}