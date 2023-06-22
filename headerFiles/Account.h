#pragma once
#include<string>

using namespace std;
enum AccountStatus
{
	Active = 1,
	Banned = 2,
	Deleted = 3
};
enum AccountType
{
	Longterm = 1,
	Shortterm = 2,
	Current = 3
};
class Account
{
public:
	Account();
	Account(int, int, int, AccountType, AccountStatus);
	int getOwnerId();
	int getAccountId();
	int getBalance();
	AccountStatus getAccountStatus();
	AccountType getAccountType();
	string getStringAccountStatus();
	string getStringAccountType();

private:
	int ownerId;
	int accountId;
	int balance;
	AccountStatus status;
	AccountType type;
};
