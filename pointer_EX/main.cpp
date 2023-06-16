#include <iostream>
using namespace std;

void do_it(int* p);

int main()
{
	/*short S[10] = { 0,1,2,3,4,5,6,7,8,9 };
	short* ps1 = (S + 3);
	cout << "ps1 = " << ps1 << endl;
	short* ps2 = (S + 7);
	cout << "ps2 = " << ps2 << endl;

	cout << ps2 - ps1 << endl;*/

	int k = 5;
	int* pk = &k;

	do_it(pk);

	/*int i = 0; short s = 2; double d = 33.45; char c = 'A';
	int* ip = &i; short* sp = &s; double* dp = &d; char* cp = &c;

	cout << "ip = " << ip << " ip + 2 = " << ip + 2 << endl;
	cout << "sp = " << sp << " sp + 2 = " << sp + 2 << endl;
	cout << "dp = " << dp << " dp + 2 = " << dp + 2 << endl;
	cout << "(void* )cp = " << (void* )cp << " (void* )(cp + 2) = " << (void* )(cp + 2) << endl;*/

	/*int num = 10;
	cout << "Original: " << num << endl;

	do_it(&num);
	cout << "result: " << num << endl;*/

	
	///*char A[9] = "sillicon";
	//cout << A << endl;
	//cout << (void*)A << endl;

	//int B[5] = {1,2,3,4,5};
	//cout << B << endl;
	////ip = &B[0];
	//ip = (B + 1);
	//ip = ip + 2;
	//cout << ip << endl;

	return 0;
}

void do_it(int* p)
{
	cout << * p << endl << endl;
	*p += 1;
	cout << *p << endl;
}
