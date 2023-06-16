#ifndef HOTDOG_H
#define HOTDOG_H
#endif

class HotDogStand {
private:
	int id;
	int hotdog;
public:
	HotDogStand();
	HotDogStand(int _id, int _hotdog);
	HotDogStand(const HotDogStand& h);
	~HotDogStand();
	int getID() const;
	void setID(int pid);
	void JustSold();
	int getSold() const;
private:
	static int total;
public:
	static int getTotal();
};
