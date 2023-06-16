//#include <iostream>
//#include <cassert>
//using namespace std;
//
//const int MAX = 100;
//class Account {
//private:
//	int id;
//	int balance; // 잔고
//	char name[MAX];
//public:
//	Account();
//	Account(int id1, int balance1, const char* name1);
//	Account(const Account& account);
//	~Account();
//
//	int getID() const;
//	int getBalance() const; //잔고
//	char* getName();
//	void setID(int id1);
//	void setBalance(int balance1);
//	void setName(const char* name1);
//
//	void inMoney(int val); // val 만큼 입금
//	void outMoney(int val); // val 만큼 출금
//};
//
//int main()
//{
//	Account a1;
//	cout << "ID: " << a1.getID() << endl;
//	cout << "잔고: " << a1.getBalance() << endl;
//	cout << "이름: " << a1.getName() << endl << endl;
//
//	Account a2(1,10000,"Kim");
//	cout << "ID: " << a2.getID() << endl;
//	cout << "잔고: " << a2.getBalance() << endl;
//	cout << "이름: " << a2.getName() << endl << endl;
//
//	Account a3(a2);
//	a3.setID(003);
//	a3.setName("Lee");
//	cout << "ID: " << a3.getID() << endl;
//	a3.inMoney(3000);
//	cout << "잔고: " << a3.getBalance() << endl;
//	cout << "이름: " << a3.getName() << endl << endl;
//
//	return 0;
//}
//
//Account::Account() {
//	id = 0;
//	balance = 0;
//	name[0] = NULL;
//	cout << "No parameter constructor" << endl;
//}
//Account::Account(int id1, int balance1, const char* name1) {
//	id = id1;
//	balance = balance1;
//	strcpy_s(this->name, MAX, name1);
//	cout << "Parameter constructor" << endl;
//	if (balance1 < 0) {
//		cout << "잔액은 음수가 될 수 없습니다." << endl;
//		assert(false);
//	}
//}
//Account::Account(const Account& account) {
//	id = account.id;
//	balance = account.balance;
//	strcpy_s(this->name, MAX, account.name);
//	cout << "Copy constructor" << endl;
//}
//Account::~Account() {
//	cout << "destructor" << endl;
//}
//int Account::getID() const{
//	return id;
//}
//int Account::getBalance() const{
//	return balance;
//}
//char* Account::getName() {
//	return this->name;
//}
//void Account::setID(int id1) {
//	id = id1;
//}
//void Account::setBalance(int balance1) {
//	balance = balance1;
//}
//void Account::setName(const char* name1) {
//	strcpy_s(this->name, MAX, name1);
//}
//void Account::inMoney(int val) {
//	balance = balance + val;
//}
//void Account::outMoney(int val) {
//	balance = balance - val;
//}