#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

char* shiftLeftstring(char* msg, int len);

int main()
{
	char message[] = "BINGO JJANG!!!";
	int len = strlen(message);
	cout << "¿øÇü: " << message << endl;

	char* orig = new char[len + 1];
	strcpy_s(orig, len + 1, message);
	
	char* copy;
	for (int i = 0; i < sizeof(message) - 1; i++) {
		copy = shiftLeftstring(orig, 14);
		cout << copy << endl;
		strcpy_s(orig, len + 1, copy);
		delete[] copy; copy = NULL;
	}
	delete[] orig; orig = NULL;
	return 0;
}

char* shiftLeftstring(char* msg, int len) 
{
	char* copy_msg = new char[len + 1];
	for (int i = 0; i < len - 1; i++)
		copy_msg[i] = msg[i + 1];
	copy_msg[len - 1] = msg[0];
	copy_msg[len] = NULL;
	
	return copy_msg;
}
