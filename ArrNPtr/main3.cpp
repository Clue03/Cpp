#include <iostream>
using namespace std;
int main()
{
	int k = 1000;
	int* pk = &k;
	int** ppk = &pk;

	cout << "k: " << k << " &k: " << &k << endl;
	cout << "pk: " << pk << " &pk: " << &pk << " *pk: " << *pk << endl;
	cout << "ppk: " << ppk << " &ppk: " << &ppk << " *ppk: " << *ppk << " **ppk: " << **ppk << endl;

	//pointer array
	double* D[5]; // ��� �ϳ��ϳ��� ������
 
	return 0;
}