#include "AAA.h"
#ifndef BBB_H
#define BBB_H

class BBB : public AAA { // ���
private:
	int b;
	string name;
public:
	BBB();
	BBB(int bval, string s);
	~BBB();
	void Print();
	void SetData();
};

#endif // !1
