#include <iostream>
#include "hotdog.h"
using namespace std;

HotDogStand::HotDogStand() {
	id = 0;
	hotdog = 0;
	total += hotdog;
}
HotDogStand::HotDogStand(int _id, int _hotdog) {
	this->id = _id;
	hotdog = _hotdog;
	total += hotdog;
}
HotDogStand::HotDogStand(const HotDogStand& h) {
	id = h.id;
	hotdog = h.hotdog;
	total += hotdog;
}
HotDogStand::~HotDogStand() {}

int HotDogStand::getID() const {
	return id;
}
void HotDogStand::setID(int pid) {
	id = pid;
}
void HotDogStand::JustSold() {
	hotdog++;
	total++;
}
int HotDogStand::getSold() const {
	return hotdog;
}

int HotDogStand::getTotal() {
	return total;
}
