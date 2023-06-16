//#include <iostream>
//#include "Account.h"
//using namespace std;
//
//void printMenu();
//int main() 
//{
//	cout << "1. 동적 객체 배열 방식" << endl;
//	int size;
//	cout << "동적 객체 배열 size: ";
//	cin >> size;
//	Account* A = new Account[size];
//	while (true) {
//		int input;
//		printMenu();
//		cout << "메뉴를 선택하세요: ";
//		cin >> input;
//
//		if (input == 1) {
//			int id;
//			char* name = new char[NAME_LEN];
//			cout << "----------1. 계좌개설----------" << endl;
//			for (int i = 0; i < size; i++) {
//				cout << "이름 입력:";
//				cin >> name;
//				(A + i)->SetName(name);
//
//				cout << "계좌번호 입력: ";
//				cin >> id;
//				(A + i)->SetId(id);
//			}
//		}
//		else if (input == 2) {
//			int bal;
//			int a;
//			cout << "----------2. 입금----------" << endl;
//			cout << "입금할 계좌 선택 (0~" << size - 1 << "): ";
//			cin >> a;
//			cout << "입금할 금액: ";
//			cin >> bal;
//			(A + a)->InMoney(bal);
//			
//		}
//		else if (input == 3) {
//			int bal;
//			int a;
//			cout << "----------3. 출금----------" << endl;
//			cout << "출금할 계좌 선택 (0~" << size - 1 << "): ";
//			cin >> a;
//			cout << "출금할 금액: ";
//			cin >> bal;
//			(A + a)->OutMoney(bal);
//			if ((A + a)->OutMoney(bal) == false) {
//				cout << "잔액이 음수가 될 수 없으므로 프로그램을 강제 종료합니다." << endl;
//				break;
//			}
//		}
//		else if (input == 4) {
//			cout << "----------4. 전체조회----------" << endl;
//			for (int i = 0; i < size; i++) {
//				(A + i)->ShowAllData();
//				cout << endl;
//			}
//		}
//		else if (input == 5) {
//			cout << "프로그램을 종료합니다." << endl;
//			break;
//		}
//		else
//			cout << "해당 메뉴에 존재하지 않습니다." << endl;
//	}
//
//	delete[] A; A = NULL;
//	return 0;
//}
//
//void printMenu() {
//	cout << "----------MENU----------" << endl;
//	cout << "1. 계좌개설" << endl;
//	cout << "2. 입금" << endl;
//	cout << "3. 출금" << endl;
//	cout << "4. 전체조회" << endl;
//	cout << "5. 종료" << endl;
//	cout << "------------------------" << endl << endl;
//}
