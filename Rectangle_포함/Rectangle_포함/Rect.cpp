#include <iostream>
#include "Rect.h"
#include "Point.h"
using namespace std;

Rect::Rect() {
	cout << "�Ű����� ���� ������" << endl;
}
Rect::Rect(const Rect& r) {
	topLeft = r.topLeft;
	bottomRight = r.bottomRight;
	cout << "���� ������" << endl;
}
Rect::Rect(const Point& TL, const Point& BR){
	topLeft = TL;
	bottomRight = BR;
	cout << "���� ������" << endl;
}
Rect::Rect(int a, int b, int c, int d){
	topLeft.SetX(a);
	topLeft.SetY(b);
	bottomRight.SetX(c);
	bottomRight.SetY(d);
	cout << "�Ű����� �ִ� ������" << endl;
}
Rect::~Rect(){
	cout << "Rect �Ҹ���" << endl;
}
void Rect::Print() const{
	cout << "TopLeft: ";
	topLeft.Print();
	cout << endl;
	cout << "BottomRight: ";
	bottomRight.Print();
	cout << endl;
}