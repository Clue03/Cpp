//int �迭�� �Լ����� �����

#include <iostream>
using namespace std;

int* int_arr_return(int size);

int main()
{
	int size;
	cout << "�� ���� ������ �Է��Ͻÿ�: ";
	cin >> size;

	int* ip = int_arr_return(size);

	cout << "������ �Է��Ͻÿ�: ";
	for (int i = 0; i < size; i++) {
		cin >> *(ip + i);
	}

	/*int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(ip + i);
	}
	cout << "���: " << (float)sum / (float)size << endl;*/

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
