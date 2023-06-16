////P.456 ~ 481
//#include <iostream>
//using namespace std;
//
//void printArray(int* B, int size);
//void printArray1(int* B, int size);
//void printArray2(int* B, int size);
//void printArray3(int* B, int size);
//
//
//int main()
//{
//	int A[10] = { -999 };
//	cout << sizeof(A) << endl;
//
//	int* p = A;
//	cout << "1. 배열명을 사용한 index 표현 (i로 대입)" <<endl;
//	for (int i = 0; i < 10; i++)
//	{
//		A[i] = i;
//	}
//	printArray(A, 10);
//
//	cout << "2. 배열명을 사용한 포인터 표현 (i*i로 대입)" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		A[i] = i*i;
//	}
//	printArray1(A, 10);
//
//	p = A;
//	cout << "3. 배열명을 저장한 포인터변수를 사용한 포인터표현 (i*i*i로 대입)" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		A[i] = i*i*i;
//	}
//	printArray2(A, 10);
//
//	cout << "3-1. pointer by pointer saving n_arr" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		*++p = i;					//Run - Time Check Failure #2 - Stack around the variable 'A' was corrupted.
//	}
//	cout << "p: " << p << endl;
//	printArray2(A, 10);
//
//	cout << "4. 배열명을 저장한 포인터변수를 사용한 index 표현 (i*i*i*i로 대입)" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		A[i] = i*i*i*i;
//	}
//	printArray3(A, 10);
//
//	return 0;
//}
//
//void printArray(int* B, int size)
//{
//	int* pb = B;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << B[i] << " ";
//	}
//	cout << endl;
//}
//void printArray1(int* B, int size)
//{
//	int* pb = B;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << *(B + i) << " ";
//	}
//	cout << endl;
//}
//void printArray2(int* B, int size)
//{
//	int* pb = B;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << *(pb + i) << " ";
//	}
//	cout << endl;
//}
//void printArray3(int* B, int size)
//{
//	int* pb = B;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << pb[i] << " ";
//	}
//	cout << endl;
//}
