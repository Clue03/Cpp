#include <iostream>
#include "Account.h"
using namespace std;

Account::Account() {
	name = new char[NAME_LEN];
	id = 0;
	balance = 0;
	name[0] = NULL;
	cout << "constructor" << endl;
}
Account::Account(int _id, int _balance, const char* _name) {
	name = new char[NAME_LEN];
	id = _id;
	balance = _balance;
	strcpy_s(name, NAME_LEN, _name);
	cout << "Parameter constructor" << endl;
}
Account::Account(const Account& a) {
	name = new char[NAME_LEN];
	strcpy_s(name, NAME_LEN, a.name);
	id = a.id;
	balance = a.balance;
	cout << "Copy constructor" << endl;
}
Account::~Account() {
	cout << "destructor" << endl;
}
Account& Account::operator=(const Account& a) {
	if (this != &a) {
		delete[] name; name = NULL;
		name = new char[NAME_LEN];
		strcpy_s(name, NAME_LEN, a.name);
	}
	return *this;
}
void Account::ShowAllData() const {
	cout << "ID: " << this->id << endl;
	cout << "ÀÌ¸§: " << this->name << endl;
	cout << "µ·: " << this->balance << endl;
	cout << endl;
}
int Account::InMoney(int val) {
	balance += val;
	return balance;
}
bool Account::OutMoney(int val) {
	if (balance >= val) {
		balance -= val;
		return true;
	}
	else {
		return false;
	}
}
int Account::GetId() const {
	return id;
}
int Account::GetBalance() const {
	return balance;
}
char* Account::GetName() const {
	return name;
}
void Account::SetId(int val) {
	id = val;
}
void Account::SetBalance(int val) {
	balance = val;
}
void Account::SetName(char* _name) {
	name = _name;
}