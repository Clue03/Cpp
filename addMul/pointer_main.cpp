// �Լ��� ���: �� ���� ���� �Է� �ް�, �� �� ���� �հ� ���� main���� ����  (pass_by_pointer)
#include <iostream>
using namespace std;

void addMul(int a, int b, int* add_result, int* mul_result);

int main()
{
	int a = 0, b = 0, sum = 0, mul = 0;
	int* add_result = &sum;
	int* mul_result = &mul;

	addMul(a, b, add_result, mul_result);

	return 0;
}

void addMul(int a, int b, int* add_result, int* mul_result)
{
	int sum = 0, mul = 0;

	cout << "ù��° ����: ";
	cin >> a;
	cout << "�ι�° ����: ";
	cin >> b;
	cout << endl;

	sum = a + b;
	mul = a * b;

	add_result = &sum;
	mul_result = &mul;

	cout <<"��: " << *add_result << endl;
	cout << "��: " << *mul_result << endl;
}
