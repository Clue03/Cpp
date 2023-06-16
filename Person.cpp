#include <iostream>
#include <cassert>
#include "Date.h"
#include "Person.h"
using namespace std;

Person::Person():birthDate() {
	identity = 0;
	cout << "�Ű����� ���� Person ������" << endl;
}
Person::Person(long id, const Date& bd):birthDate(bd)
{
	identity = id;
	assert(identity > 111111111 && identity < 999999999);
	cout << "�Ű����� �ִ� Person ������" << endl;
}
Person::Person(const Person& p):birthDate(p.birthDate)
{
	identity = p.identity;
	cout << "Person ���� ������" << endl;
}
Person :: ~Person()
{
	cout << "Person �Ҹ���" << endl;
}
void Person::print() const
{
	cout << "Person Identity: " << identity << endl;
	cout << "Person date of birth: ";

	birthDate.print();
	cout << endl << endl;
}

