#include <iostream>
#include "point.h"
using namespace std;
//client
const int MAX = 3;
int main() 
{
	int x, y;
	cout << "1. ���� ��ü �迭 ���" << endl;
	Point A[MAX];
	for (int i = 0; i < MAX; i++) {
		cout << "i��° ����Ʈ �Է� - ���� ��ü �迭 ���(x, y):";
		cin >> x >> y;
		A[i].setX(x);
		(A + i)->setY(y);
	}
	cout << "��� ���" << endl;
	for (int i = 0; i < MAX; i++) {
		cout << i << "��° ����Ʈ: ";
		A[i].Print();
	}

	cout << "2. ���� ��ü �迭 ���" << endl;
	int num;
	cout << "�� ���� ��ü?:";
	cin >> num;
	Point* B = new Point[num];
	for (int i = 0; i < num; i++) {
		cout << "i��° ����Ʈ �Է� - ���� ��ü �迭 ���(x, y):";
		cin >> x >> y;
		B[i].setX(x);
		(B + i)->setY(y);
	}
	cout << "��� ���" << endl;
	for (int i = 0; i < num; i++) {
		cout << i << "��° ����Ʈ: ";
		B[i].Print();
	}

	cout << "3. ��ü ������ �迭 ���" << endl;
	Point* C[MAX];
	for (int i = 0; i < MAX; i++) {
		cout << "i��° ����Ʈ �Է� - ��ü������ �迭 ���(x, y):";
		cin >> x >> y;
		C[i] = new Point(x, y);
	}
	cout << "��� ���" << endl;
	for (int i = 0; i < MAX; i++) {
		cout << i << "��° ����Ʈ: ";
		C[i]->Print(); // (*(C + i))->Print();  (**(C + 1)).Print();
	}

	cout << "4. Clean UP!" << endl;
	// ���� ��ü �迭 �Ҹ�
	delete[] B; B = NULL;
	
	//��ü������ �迭 �Ҹ�
	for (int i = 0; i < MAX; i++) {
		delete C[i]; C[i] = NULL;
	}

	/*Point p1;
	p1.Print();

	Point p2(10, 20);
	p2.Print();

	Point p3(p2);
	p3.Print();*/

	/*Point pt(50, 50);
	Point* p1 = new Point(100, 100);
	Point* p2 = &pt;
	p2->Print();
	delete p1; p1 = NULL;*/


	return 0;
}