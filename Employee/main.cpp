#include <iostream>
#include <string>
#include "Employee.h"
#include "Permanent.h"
#include "Sales.h"
#include "Temporary.h"
using namespace std;
void Showmenu();
void AddPermanent(Employee** A, int& index);
void AddTemporary(Employee** A, int& index);
void AddSales(Employee** A, int& index);
void Cleanup(Employee** A, int index);
void CalcPay(Employee** A, int index);

const int EMAX = 10;
enum { PERMANENT = '1', TEMPORARY, SALES, PAYROLL, QUIT };
int main() {

	Employee* A[EMAX];
	char choice;
	int index = 0;

	while (true) {
		Showmenu();
		cout << "메뉴를 선택하세요: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case PERMANENT:
			AddPermanent(A, index);
			break;
		case TEMPORARY:
			AddTemporary(A, index);
			break;
		case SALES:
			AddSales(A, index);
			break;
		case PAYROLL:
			CalcPay(A, index);
			break;
		case QUIT:
			Cleanup(A, index);
			break;
		default:
			cout << "잘못된 메뉴 선택. 강제 종료하겠습니다." << endl;
			break;
		}
	}

	/*Permanent p1;
	p1.Print();
	Permanent p2("Lee", 1000);
	p2.Print();
	Permanent p3(p2);
	p3.Print();

	Sales s1;
	s1.Print();
	Sales s2("Park", 100, 2000);
	s2.Print();
	Sales s3(s2);
	s3.Print();

	Temporary t1;
	t1.Print();
	Temporary t2("Choi", 5, 9000);
	t2.Print();
	Temporary t3(t2);
	t3.Print();*/

	return 0;
}

void Showmenu() {
	cout << "=====MENU=====" << endl;
	void Showmenu();
	cout << "1. 직원 입력 [Permanent]" << endl;
	cout << "2. 직원 입력 [Temporary]" << endl;
	cout << "3. 직원 입력 [Sales]" << endl;
	cout << "4. 직원 월급여 계산" << endl;
	cout << "5. 종료" << endl;

 }

void AddPermanent(Employee** A, int& index) {
	string name;
	int sal;
	cout << "name: ";
	cin >> name;
	cout << "salary: ";
	cin >> sal;

	A[index] = new Permanent(name, sal);
	index++;
}
void AddSales(Employee** A, int& index) {
	string name;
	int base, rev;
	cout << "name: ";
	cin >> name;
	cout << "basePay: ";
	cin >> base;
	cout << "salesRevenue: ";
	cin >> rev;

	A[index] = new Temporary(name, base, rev);
	index++;
}
void AddTemporary(Employee** A, int& index) {
	string name;
	int h, hw;
	cout << "name: ";
	cin >> name;
	cout << "hours: ";
	cin >> h;
	cout << "hourlyWage: ";
	cin >> hw;

	A[index] = new Sales(name, h, hw);
	index++;
}
void Cleanup(Employee** A, int index) {
	for (int i = 0; i < index; i++) {
		delete A[i]; A[i] = NULL;
	}
}
void CalcPay(Employee** A, int index) {
	for (int i = 0; i < index; i++) {
		cout << "Name: " << A[i]->Getname() << endl;
		cout << "Pay: " << A[i]->Getpay() << endl;
	}
}