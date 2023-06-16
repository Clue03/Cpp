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
	cout << "2. ��ü ������ �迭 ���" << endl;
	int size = ACCOUNT_MAX;
	Account* C[ACCOUNT_MAX];
	while (true) {
		int input;
		int index = 0;
		printMenu();
		cout << "�޴��� �����ϼ���: ";
		cin >> input;

		switch (input)
		{
		case MAKE:
			cout << "���� ������ �����ϼ̽��ϴ�." << endl;
			MakeAccount(C, index, size);
			break;
		case DEPOSIT:
			cout << "�Ա��� �����ϼ̽��ϴ�." << endl;
			Deposit(C, index);
			break;
		case WITHDRAW:
			cout << "����� �����ϼ̽��ϴ�." << endl;
			WithDraw(C, index);
			break;
		case INQUIRE:
			cout << "��ü��ȸ�� �����ϼ̽��ϴ�." << endl;
			Inquire(C, index);
			break;
		case EXIT:
			cout << "���Ḧ �����ϼ̽��ϴ�." << endl;
			cleanUp(C, index);
			break;
		default:
			cout << "���� �޴��Դϴ�." << endl;
			break;
		}
	}
	return 0;
}

void printMenu() {
	cout << "----------MENU----------" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �Ա�" << endl;
	cout << "3. ���" << endl;
	cout << "4. ��ü��ȸ" << endl;
	cout << "5. ����" << endl;
	cout << "------------------------" << endl << endl;
}
void MakeAccount(Account** C, int& index, int size) {
	int id, bal;
	char name[NAME_LEN];
	if (index < size) {
		cout << "���� ������ ���� �Է�(ID,�ܾ�,�̸�): ";
		cin >> id >> bal >> name;

		C[index] = new Account(id, bal, name);

		/*C[index] = new Account;
		(*(C + index))->SetName(name);
		(*(C + index))->SetId(id);
		(**(C + index)).SetBalance(bal);*/
		index++;
	}
	else {
		cout << "���°����� �Ұ����մϴ�." << endl;
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
	cout << "ID & �Աݾ� �Է�: ";
	cin >> id >> bal;
	bool found = false;
	for (int i = 0; i < index; i++) {
		if (C[i]->GetId() == id) {
			total = (*(C + i))->InMoney(bal);
			cout << "�ܾ�: " << total << endl;
			found = true;
			break;
		}
	}
	if(found == false) {
		cout << "�ش� ID�� ���°� �����ϴ�." << endl;
	}
}
void WithDraw(Account** C, int index) {
	int id, bal, total;
	cout << "ID & ��ݾ� �Է�: ";
	cin >> id >> bal;
	bool found = false;
	for (int i = 0; i < index; i++) {
		if (C[i]->GetId() == id) {		
			if ((*(C + i))->OutMoney(bal) == true) {
				total = C[i]->OutMoney(bal);
				cout << "�ܾ�: " << total << endl;
			}
			else
				cout << "�ܾ� ����" << endl;
			found = true;
			break;
		}
	}
	if (found == false) {
		cout << "�ش� ID�� ���°� �����ϴ�." << endl;
	}
}
