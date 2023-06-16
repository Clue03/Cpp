#ifndef PERSON_H
#define PERSON_H
#include "Date.h"
class Person
{
private:
	long identity;
	Date birthDate; // Date Ÿ���� ��� �����͸� ����
public:
	Person();
	Person(long id, const Date& bd);
	Person(const Person& p);
	~Person();
	void print() const;
};
#endif // !PERSON_H

