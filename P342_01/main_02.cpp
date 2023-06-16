//#include <iostream>
//using namespace std;
//
//class Two {
//private:
//	int x;
//	char a;
//public:
//	Two();
//	Two(int px, char pa);
//	Two(const Two& Two);
//	int getX() const;
//	char getA() const;
//	void setX(int px);
//	void setA(char pa);
//	~Two();
//};
//
//int main()
//{
//	Two two1;
//	cout << two1.getX() << endl;
//	cout << two1.getA() << endl;
//
//	Two two2(10, 'C');
//	cout << two2.getX() << endl;
//	cout << two2.getA() << endl;
//
//	Two two3(two2);
//	cout << two3.getX() << endl;
//	cout << two3.getA() << endl;
//
//	Two two4(30, 'B');
//	two4.setX(50);
//	two4.setA('A');
//	cout << two4.getX() << endl;
//	cout << two4.getA() << endl;
//
//	return 0;
//}
//
//Two::Two() {
//	x = 0;
//	a = NULL;
//	cout << "No parameter constructor" << endl;
//}
//Two::Two(int px, char pa) {
//	x = px;
//	a = pa;
//	cout << "Parameter constructor" << endl;
//}
//Two::Two(const Two& two) {
//	x = two.x;
//	a = two.a;
//	cout << "Copy constructor" << endl;
//}
//int Two::getX() const {
//	return x;
//}
//char Two::getA() const {
//	return a;
//}
//void Two::setX(int px) {
//	x = px;
//}
//void Two::setA(char pa) {
//	a = pa;
//}
//Two::~Two() {
//	cout << "destructor" << endl;
//}