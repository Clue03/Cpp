#include <iostream>
#include "AAA.h"
using namespace std;

AAA::AAA() {
	cout << "AAA con w/o parameters" << endl;
	pri = 0; pro = 0; pub = 0;
}
AAA::AAA(int a, int b, int c) {
	cout << "AAA con with parameters" << endl;
	pri = a; pro = b; pub = c;
}
AAA::~AAA() {
	cout << "AAA decon" << endl;
}