#include <iostream>
#include "point.h"
using namespace std;
//client
const int MAX = 3;
int main() 
{
	int x, y;
	cout << "1. 정적 객체 배열 방식" << endl;
	Point A[MAX];
	for (int i = 0; i < MAX; i++) {
		cout << "i번째 포인트 입력 - 정적 객체 배열 방식(x, y):";
		cin >> x >> y;
		A[i].setX(x);
		(A + i)->setY(y);
	}
	cout << "결과 출력" << endl;
	for (int i = 0; i < MAX; i++) {
		cout << i << "번째 포인트: ";
		A[i].Print();
	}

	cout << "2. 동적 객체 배열 방식" << endl;
	int num;
	cout << "몇 개의 객체?:";
	cin >> num;
	Point* B = new Point[num];
	for (int i = 0; i < num; i++) {
		cout << "i번째 포인트 입력 - 동적 객체 배열 방식(x, y):";
		cin >> x >> y;
		B[i].setX(x);
		(B + i)->setY(y);
	}
	cout << "결과 출력" << endl;
	for (int i = 0; i < num; i++) {
		cout << i << "번째 포인트: ";
		B[i].Print();
	}

	cout << "3. 객체 포인터 배열 방식" << endl;
	Point* C[MAX];
	for (int i = 0; i < MAX; i++) {
		cout << "i번째 포인트 입력 - 객체포인터 배열 방식(x, y):";
		cin >> x >> y;
		C[i] = new Point(x, y);
	}
	cout << "결과 출력" << endl;
	for (int i = 0; i < MAX; i++) {
		cout << i << "번째 포인트: ";
		C[i]->Print(); // (*(C + i))->Print();  (**(C + 1)).Print();
	}

	cout << "4. Clean UP!" << endl;
	// 동적 객체 배열 소멸
	delete[] B; B = NULL;
	
	//객체포인터 배열 소멸
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