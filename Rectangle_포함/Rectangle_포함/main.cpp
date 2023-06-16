#include <iostream>
#include "Point.h"
#include "Rect.h"
using namespace std;

int main() {
	cout << "����Ʈ �ΰ� ����� " << endl;
	Point p1(10, 20);
	Point p2(30, 40);

	cout << "r1 ��ü��������..." << endl;
	Rect r1(p1, p2);
	r1.Print();

	cout << "r2 ��ü��������..." << endl;
	Rect r2(100, 200, 300, 400);
	r2.Print();

	Rect r3;
	r3.Print();
	return 0;
}
