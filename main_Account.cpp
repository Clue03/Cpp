//#include <iostream>
//#include "Account.h"
//using namespace std;
//
//void printMenu();
//int main() 
//{
//	cout << "1. ���� ��ü �迭 ���" << endl;
//	int size;
//	cout << "���� ��ü �迭 size: ";
//	cin >> size;
//	Account* A = new Account[size];
//	while (true) {
//		int input;
//		printMenu();
//		cout << "�޴��� �����ϼ���: ";
//		cin >> input;
//
//		if (input == 1) {
//			int id;
//			char* name = new char[NAME_LEN];
//			cout << "----------1. ���°���----------" << endl;
//			for (int i = 0; i < size; i++) {
//				cout << "�̸� �Է�:";
//				cin >> name;
//				(A + i)->SetName(name);
//
//				cout << "���¹�ȣ �Է�: ";
//				cin >> id;
//				(A + i)->SetId(id);
//			}
//		}
//		else if (input == 2) {
//			int bal;
//			int a;
//			cout << "----------2. �Ա�----------" << endl;
//			cout << "�Ա��� ���� ���� (0~" << size - 1 << "): ";
//			cin >> a;
//			cout << "�Ա��� �ݾ�: ";
//			cin >> bal;
//			(A + a)->InMoney(bal);
//			
//		}
//		else if (input == 3) {
//			int bal;
//			int a;
//			cout << "----------3. ���----------" << endl;
//			cout << "����� ���� ���� (0~" << size - 1 << "): ";
//			cin >> a;
//			cout << "����� �ݾ�: ";
//			cin >> bal;
//			(A + a)->OutMoney(bal);
//			if ((A + a)->OutMoney(bal) == false) {
//				cout << "�ܾ��� ������ �� �� �����Ƿ� ���α׷��� ���� �����մϴ�." << endl;
//				break;
//			}
//		}
//		else if (input == 4) {
//			cout << "----------4. ��ü��ȸ----------" << endl;
//			for (int i = 0; i < size; i++) {
//				(A + i)->ShowAllData();
//				cout << endl;
//			}
//		}
//		else if (input == 5) {
//			cout << "���α׷��� �����մϴ�." << endl;
//			break;
//		}
//		else
//			cout << "�ش� �޴��� �������� �ʽ��ϴ�." << endl;
//	}
//
//	delete[] A; A = NULL;
//	return 0;
//}
//
//void printMenu() {
//	cout << "----------MENU----------" << endl;
//	cout << "1. ���°���" << endl;
//	cout << "2. �Ա�" << endl;
//	cout << "3. ���" << endl;
//	cout << "4. ��ü��ȸ" << endl;
//	cout << "5. ����" << endl;
//	cout << "------------------------" << endl << endl;
//}
