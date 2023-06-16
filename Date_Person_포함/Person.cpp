#include <iostream>
#include <cassert>
#include "Date.h"
#include "Person.h"
using namespace std;

Person::Person():birthDate() {
	identity = 0;
	cout << "매개변수 없는 Person 생성자" << endl;
}
Person::Person(long id, const Date& bd):birthDate(bd)
{
	identity = id;
	assert(identity > 111111111 && identity < 999999999);
	cout << "매개변수 있는 Person 생성자" << endl;
}
Person::Person(const Person& p):birthDate(p.birthDate)
{
	identity = p.identity;
	cout << "Person 복사 생성자" << endl;
}
Person :: ~Person()
{
	cout << "Person 소멸자" << endl;
}
void Person::print() const
{
	cout << "Person Identity: " << identity << endl;
	cout << "Person date of birth: ";

	birthDate.print();
	cout << endl << endl;
}

