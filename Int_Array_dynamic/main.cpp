//int 배열을 함수에서 만들기

#include <iostream>
using namespace std;

int* int_arr_return(int size);

int main()
{
	int size;
	cout << "몇 개의 정수를 입력하시오: ";
	cin >> size;

	int* ip = int_arr_return(size);

	cout << "정수를 입력하시오: ";
	for (int i = 0; i < size; i++) {
		cin >> *(ip + i);
	}

	/*int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(ip + i);
	}
	cout << "평균: " << (float)sum / (float)size << endl;*/

	cout << "Before delete ip: " << ip << endl;
	cout << "Before delete * ip: " << *ip << endl;

	delete[] ip; ip = NULL;

	cout << "After delete ip: " << ip << endl;
	cout << "After delete * ip: " << *ip << endl;


 	return 0;
}

int* int_arr_return(int size)
{	
	int* ip = new int[size];
	return ip;
}
