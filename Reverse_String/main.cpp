#include <iostream>
#include <cstring>
using namespace std;

char* reverse_str(char* orig, int len);
char* reverse_str_static(char* orig, int len);

int main()
{
	char orig[] = "abcde";
	int len = strlen(orig);

	////reverse string in main
	//char* rev = new char[len + 1];
	////문자열을 역순으로 복사
	//for (int i = 0; i < len; i++)
	//{
	//	rev[i] = orig[len - i - 1];
	//}

	//rev[len] = '\n';

	char* rev = reverse_str(orig, len);
	//char* rev = reverse_str_static(orig, len);

	cout << "뒤집힌 문자: " << rev << endl;
	delete[] rev; rev = NULL;
	cout << "delete[] rev: " << rev << endl;
	return 0;
}

char* reverse_str(char* orig, int len)
{
	char* r = new char[len + 1]; // dynamic array

	for (int i = 0; i < len; i++)
	{
		r[i] = orig[len - i - 1];
	}

	r[len] = '\0';
	return r;
}

char* reverse_str_static(char* orig, int len)
{
	char r[100]; 

	for (int i = 0; i < len; i++)
	{
		r[i] = orig[len - i - 1];
	}

	r[len] = '\0';
	return r;
}