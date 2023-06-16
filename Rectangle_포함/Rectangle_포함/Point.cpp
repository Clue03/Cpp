#include <iostream>
#include "Point.h"
using namespace std;

Point::Point(){
	x = 0;
	y = 0;
	cout << "�Ű����� ���� ������" << endl;
}
Point::Point(int initialX, int initialY){
	x = initialX;
	y = initialY;
	cout << "�Ű����� �ִ� ������" << endl;
}
Point::Point(const Point& pt){
	x = pt.x;
	y = pt.y;
	cout << "���� ������" << endl;
}
Point::~Point(){
	cout << "Point �Ҹ���" << endl;
}
void Point::SetX(int value){
	x = value;
}
void Point::SetY(int value){
	y = value;
}
int Point::GetX() const{
	return x;
}
int Point::GetY() const{
	return y;
}
void Point::Print() const{
	cout << "(" << x << "," << y << ")" << endl;
}