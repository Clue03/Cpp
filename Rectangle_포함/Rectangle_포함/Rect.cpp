#include <iostream>
#include "Rect.h"
#include "Point.h"
using namespace std;

Rect::Rect() {
	cout << "매개변수 없는 생성자" << endl;
}
Rect::Rect(const Rect& r) {
	topLeft = r.topLeft;
	bottomRight = r.bottomRight;
	cout << "복사 생성자" << endl;
}
Rect::Rect(const Point& TL, const Point& BR){
	topLeft = TL;
	bottomRight = BR;
	cout << "복사 생성자" << endl;
}
Rect::Rect(int a, int b, int c, int d){
	topLeft.SetX(a);
	topLeft.SetY(b);
	bottomRight.SetX(c);
	bottomRight.SetY(d);
	cout << "매개변수 있는 생성자" << endl;
}
Rect::~Rect(){
	cout << "Rect 소멸자" << endl;
}
void Rect::Print() const{
	cout << "TopLeft: ";
	topLeft.Print();
	cout << endl;
	cout << "BottomRight: ";
	bottomRight.Print();
	cout << endl;
}