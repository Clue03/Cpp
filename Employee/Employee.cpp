#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

Employee::Employee(){
	name = '\0';
	cout << "Employee con" << endl;
}
Employee::Employee(string _name){
	name = _name;
	cout << "Employee parameter con" << endl;
}
Employee::Employee(const Employee& e){
	name = e.name;
	cout << "Employee copy con" << endl;
}
Employee::~Employee(){
	cout << "Employee decon" << endl;
}
int Employee::Getpay(){
	return 0;
}
void Employee::Setpay(int n){
	name = n;
}
string Employee::Getname() {
	return name;
}
//void Employee::Print() {
//	cout << "ÀÌ¸§: " << this->name << endl;
//	cout << "¼Òµæ: " << this->Getpay() << endl;
//}