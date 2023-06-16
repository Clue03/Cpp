#include <iostream>
using namespace std;
const int MAX = 100;

class Person {
private:
	int age;
	char name[MAX];
public:
	Person();
	Person(const char* na, int a);
	Person(const Person& person);

	int getAge();
	char* getName();
	void setAge(int ag);
	void setName(const char* na);

	~Person();
};

int main()
{
	Person p1;
	cout << "�̸�: " << p1.getName() << " ����: " << p1.getAge() << endl;

	Person p2("Kim", 16);
	cout << "�̸�: " << p2.getName() << " ����: " << p2.getAge() << endl;

	Person p3(p2);
	cout << "�̸�: " << p3.getName() << " ����: " << p3.getAge() << endl << endl;

	p3.setName("Lee");
	p3.setAge(21);

	cout << "������ �̸�: " << p3.getName() << " ������ ����: " << p3.getAge() << endl << endl;

	return 0;
}

Person::Person() {
	name[0] = NULL;
	age = 0;
	cout << "No parameter constructor" << endl;
}
Person::Person(const char* na, int a) {
	age = a;
	strcpy_s(this->name, MAX, na);
	cout << "Parameter constructor" << endl;
}
Person::Person(const Person& person) {
	this->age = person.age;
	strcpy_s(this->name, MAX, person.name);
	cout << "Copy constructor" << endl;
}
int Person::getAge(){
	return this->age;
}
char* Person::getName(){
	return this->name;
}
void Person::setAge(int ag) {
	this->age = ag;
}
void Person::setName(const char* na) {
	strcpy_s(this->name, MAX, na);
}
Person::~Person() {
	cout << "destructor" << endl;
}