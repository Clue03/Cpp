#include <iostream>
#include "hotdog.h"
using namespace std;

int HotDogStand::total = 0;
int main()
{
	int count;
	cout << "Stand count(3~10개): ";
	cin >> count;

	HotDogStand* sList = new HotDogStand[count];

	for (int i = 0; i < count; i++) {
		sList[i].setID(i);
	}

	while (true) {
		char id[2];
		cout << "ID: ";
		cin >> id;

		if (strcmp(id, "q") == 0) {
			break;
		}
		else {
			int num_id = atoi(id);
			if (num_id >= count) {
				cout << "해당 ID를 가진 곳은 없습니다. 프로그램을 강제 종료합니다." << endl;
				break;
			}
			else if (sList[num_id].getID() == num_id) {
				sList[num_id].JustSold();
			}
		}
	}

	for (int i = 0; i < count; i++) {
		cout << "Stand " << sList[i].getID() << " sold " << sList[i].getSold() << endl;
	}

	cout << "Total Sold = " << HotDogStand::getTotal() << endl;

	delete[] sList; sList = NULL;
	return 0;
}