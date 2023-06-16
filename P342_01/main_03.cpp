//#include <iostream>
//#include <math.h>
//using namespace std;
//
//class Point {
//private:
//	int x;
//	int y;
//public:
//	Point();
//	Point(int dx, int dy);
//	Point(const Point& point);
//	~Point();
//	int getX() const;
//	int getY() const;
//	void setX(int dx);
//	void setY(int dy);
//	void print() const;
//	void print_relative_position(const Point& other) const;
//	double Distance(const Point& other) const;
//};
//
//int main()
//{
//	// 생성자 테스트
//	Point p1;
//	cout << "객체 p1 >> ";
//	p1.print();
//
//	Point p2(3, 4);
//	cout << "객체 p2 >> ";
//	p2.print();
//
//	Point p3(p1);
//	cout << "객체 p3 >> ";
//	p3.print();
//
//	Point p4(1, 2);
//	cout << "객체 p4 >> ";
//	p4.setX(5);
//	p4.setY(4);
//	p4.print();
//
//	Point p5(5, 4);
//	cout << "객체 p5 >> ";
//	p5.print();
//
//	Point p6(1, 2);
//	cout << "객체 p6 >> ";
//	p6.print();
//
//	cout << "p5와 p6의 상대적 위치 & 거리" << endl;
//	p5.print_relative_position(p6);
//	cout << "두 좌표 사이의 거리: " << p5.Distance(p6) << endl << endl;
//
//	return 0;
//}
//
//Point::Point() {
//	x = 0;
//	y = 0;
//	cout << "No parameter constructor" << endl;
//}
//Point::Point(int dx, int dy) {
//	x = dx;
//	y = dy;
//	cout << "Parameter constructor" << endl;
//}
//Point::Point(const Point& point) {
//	x = point.x;
//	y = point.y;
//	cout << "Copy constructor" << endl;
//}
//Point::~Point() {
//	cout << "destructor" << endl;
//}
//int Point::getX() const {
//	return x;
//}
//int Point::getY() const {
//	return y;
//}
//void Point::setX(int dx) {
//	x = dx;
//}
//void Point::setY(int dy) {
//	y = dy;
//}
//void Point::print() const {
//	cout << "좌표: (" << getX() << "," << getY() << ")" << endl << endl;
//}
//void Point::print_relative_position(const Point& other) const {
//	int dx = other.x;
//	int dy = other.y;
//	if (x > dx && y > dy)
//		cout << "두 좌표의 상대적 위치 비교: 오른쪽 위" << endl;
//	else if (x > dx && y < dy)
//		cout << "두 좌표의 상대적 위치 비교: 오른쪽 아래" << endl;
//	else if (x < dx && y > dy)
//		cout << "두 좌표의 상대적 위치 비교: 왼쪽 위" << endl;
//	else if (x < dx && y < dy)
//		cout << "두 좌표의 상대적 위치 비교: 왼쪽 아래" << endl;
//	else if (x > dx && y == dy)
//		cout << "두 좌표의 상대적 위치 비교: 오른쪽" << endl;
//	else if (x == dx && y > dy)
//		cout << "두 좌표의 상대적 위치 비교: 위" << endl;
//	else if (x == dx && y < dy)
//		cout << "두 좌표의 상대적 위치 비교: 아래" << endl;
//	else if (x < dx && y == dy)
//		cout << "두 좌표의 상대적 위치 비교: 왼쪽" << endl;
//	else
//		cout << "두 좌표의 상대적 위치 비교: 좌표가 서로 같다." << endl;
//}
//double Point::Distance(const Point& other) const {
//	int dx = x - other.x;
//	int dy = y - other.y;
//	double distance = sqrt(pow(dx, 2) + pow(dy, 2));
//	return distance;
//}
