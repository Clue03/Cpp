#ifndef POINT_H
#define POINT_H
#endif // !POINT_H
#include <iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point();
	Point(int _x, int _y);
	Point(const Point& p);
	~Point();
	int getX();
	int getY();
	void setX(int _x);
	void setY(int _y);
	void Print();
};