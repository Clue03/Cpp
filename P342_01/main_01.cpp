//#include <iostream>
//using namespace std;
//
//class One {
//private:
//	int x;
//	int y;
//public:
//	One();
//	One(int px, int py);
//	One(const One& one);
//	int getX() const;
//	int getY() const;
//	~One();
//};
//
//int main()
//{
//	One one1;
//	cout << one1.getX() << endl;
//	cout << one1.getY() << endl;
//
//	One one2(10, 20);
//	cout << one2.getX() << endl;
//	cout << one2.getY() << endl;
//
//	One one3(one1);
//	cout << one3.getX() << endl;
//	cout << one3.getY() << endl;
//
//	return 0;
//}
//
//One::One() {
//	x = 0;
//	y = 0;
//	cout << "No parameter constructor" << endl;
//}
//One::One(int px, int py) {
//	x = px;
//	y = py;
//	cout << "Parameter constructor" << endl;
//}
//One::One(const One& one) {
//	x = one.getX();
//	y = one.getY();
//	cout << "Copy constructor" << endl;
//}
//int One:: getX() const {
//	return x;
//}
//int One:: getY() const {
//	return y;
//}
//One::~One() {
//	cout << "destructor" << endl;
//}