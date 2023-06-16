#ifndef ACCOUNT_H
#define ACCOUNT_H

const int NAME_LEN=20;
class Account
{
private:
	int id;
	int balance;
	char* name;
public:
	Account();
	Account(int _id, int _balance, const char* _name);
	Account(const Account& a);
	~Account();
	Account& operator=(const Account & a);
	void ShowAllData() const;
	int InMoney(int val);
	bool OutMoney(int val);
	int GetId()const;
	int GetBalance() const;
	char* GetName() const;
	void SetId(int val);
	void SetBalance(int val);
	void SetName(char* _name);
};
#endif