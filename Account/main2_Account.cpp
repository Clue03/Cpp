#include <iostream>
#include "Account.h"
using namespace std;

void printMenu();
void MakeAccount(Account** C, int& index, int size);
void Deposit(Account** C, int index);
void WithDraw(Account** C, int index);
void Inquire(Account** C, int index);
void cleanUp(Account** C, int index);

enum{MAKE = 1,DEPOSIT, WITHDRAW, INQUIRE, EXIT};
const int ACCOUNT_MAX = 10;
int main()
{
	cout << "2. 객체 포인터 배열 방식" << endl;
	int size = ACCOUNT_MAX;
	Account* C[ACCOUNT_MAX];
	while (true) {
		int input;
		int index = 0;
		printMenu();
		cout << "메뉴를 선택하세요: ";
		cin >> input;

		switch (input)
		{
		case MAKE:
			cout << "계좌 개설을 선택하셨습니다." << endl;
			MakeAccount(C, index, size);
			break;
		case DEPOSIT:
			cout << "입금을 선택하셨습니다." << endl;
			Deposit(C, index);
			break;
		case WITHDRAW:
			cout << "출금을 선택하셨습니다." << endl;
			WithDraw(C, index);
			break;
		case INQUIRE:
			cout << "전체조회를 선택하셨습니다." << endl;
			Inquire(C, index);
			break;
		case EXIT:
			cout << "종료를 선택하셨습니다." << endl;
			cleanUp(C, index);
			break;
		default:
			cout << "없는 메뉴입니다." << endl;
			break;
		}
	}
	return 0;
}

void printMenu() {
	cout << "----------MENU----------" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 전체조회" << endl;
	cout << "5. 종료" << endl;
	cout << "------------------------" << endl << endl;
}
void MakeAccount(Account** C, int& index, int size) {
	int id, bal;
	char name[NAME_LEN];
	if (index < size) {
		cout << "계좌 개설을 위한 입력(ID,잔액,이름): ";
		cin >> id >> bal >> name;

		C[index] = new Account(id, bal, name);

		/*C[index] = new Account;
		(*(C + index))->SetName(name);
		(*(C + index))->SetId(id);
		(**(C + index)).SetBalance(bal);*/
		index++;
	}
	else {
		cout << "계좌개설이 불가능합니다." << endl;
	}
}
void Inquire(Account** C, int index) {
	for (int i = 0; i < index; i++) {
		(*(C + i))->ShowAllData();
		// C[i]->ShowAllData();
		// (**(C + i)).ShowAllData();
	}
}
void cleanUp(Account** C, int index) {
	for (int i = 0; i < index; i++) {
		delete C[i]; C[i] = NULL;
	}
}
void Deposit(Account** C, int index) {
	int id, bal, total;
	cout << "ID & 입금액 입력: ";
	cin >> id >> bal;
	bool found = false;
	for (int i = 0; i < index; i++) {
		if (C[i]->GetId() == id) {
			total = (*(C + i))->InMoney(bal);
			cout << "잔액: " << total << endl;
			found = true;
			break;
		}
	}
	if(found == false) {
		cout << "해당 ID의 계좌가 없습니다." << endl;
	}
}
void WithDraw(Account** C, int index) {
	int id, bal, total;
	cout << "ID & 출금액 입력: ";
	cin >> id >> bal;
	bool found = false;
	for (int i = 0; i < index; i++) {
		if (C[i]->GetId() == id) {		
			if ((*(C + i))->OutMoney(bal) == true) {
				total = C[i]->OutMoney(bal);
				cout << "잔액: " << total << endl;
			}
			else
				cout << "잔액 부족" << endl;
			found = true;
			break;
		}
	}
	if (found == false) {
		cout << "해당 ID의 계좌가 없습니다." << endl;
	}
}
