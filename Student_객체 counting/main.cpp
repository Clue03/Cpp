#include <iostream>
using namespace std;
const int MAX = 100;
// 1. 클래스 정의
class Student {
private:
	char name[MAX];
	int sNo;
public:
	Student();
	Student(const char* n, int s);
	Student(const Student& sobj);
	~Student();
	char* getName();
	int getNo();
	void setName(const char* n);
	void setNo(int s);
private:
	static int cnt;
public:
	static void PrintCount();
	static int getCnt();
};

int Student::cnt = 0; // static member reset;

// 2. 멤버 함수 정의
Student:: Student() {
	cout << "constructor w/o parameter" << endl;
	sNo = 0;
	name[0] = NULL;
	Student::cnt++;
}
Student::Student(const char* n, int s) {
	cout << "constructor w parameter" << endl;
	this->sNo = s;
	strcpy_s(this->name, MAX, n);
	Student::cnt++;
}
Student::Student(const Student& sobj) {
	cout << "copy constructor" << endl;
	this->sNo = sobj.sNo;
	strcpy_s(this->name, MAX, sobj.name);
	Student::cnt++;
}
Student:: ~Student() {
	cout << "destructor" << endl;
	Student::cnt--;
}
void Student::PrintCount() {
	cout << "In Print Count() Student 객체 수: " << cnt << endl;
}
int Student::getCnt() {
	return cnt;
}
char* Student::getName() {
	return this->name;
}
int Student::getNo() {
	return this->sNo;
}
void Student::setName(const char* n) {
	strcpy_s(this->name, MAX, n);
}
void Student::setNo(int s) {
	this->sNo = s;
}
// 3. 애플리케이션
void func();
int main()
{
	cout << "sizeof(Student): " << sizeof(Student) << endl;

	Student::PrintCount();
	Student std1("Jeffrey", 123);

	Student::PrintCount();
	Student std2;

	Student::PrintCount();
	Student std3(std1);

	//cout << "Before func() call" << endl; // 객체 수: 1
	func(); // 실행 후: 3 (std1, std2 in func is poped)
	cout << "After func() call" << endl; // 객체 수: 1
	Student::PrintCount();

	Student std2("Heffrey", 321); // 객체 수: 2
	Student::PrintCount();

	//cout << "sizeof(Student): " << sizeof(Student) << endl;
	//cout << "sizeof(std1): " << sizeof(std1) <<endl;

	return 0;
}

void func() {
	Student std1("Bill", 342);
	/*std1.setName("William");
	cout << std1.getName() << endl;*/
	Student std2("James", 452);
	Student::PrintCount();
}