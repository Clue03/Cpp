// 함수의 기능: 두 개의 수를 입력 받고, 그 두 수의 합과 곱을 main에게 전달  (pass_by_pointer)
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

	cout << "첫번째 정수: ";
	cin >> a;
	cout << "두번째 정수: ";
	cin >> b;
	cout << endl;

	sum = a + b;
	mul = a * b;

	add_result = &sum;
	mul_result = &mul;

	cout <<"합: " << *add_result << endl;
	cout << "곱: " << *mul_result << endl;
}
