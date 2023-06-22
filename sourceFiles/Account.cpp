#include"../headerFiles/Account.h"

Account::Account(){}
Account::Account(int ownerId,int accountId, int balance, AccountType type, AccountStatus status)
{
	this->ownerId = ownerId;
	this->accountId = accountId;
	this->balance = balance;
	this->type = type;
	this->status = status;
	
}
int Account::getOwnerId()	{return ownerId;}
int Account::getAccountId()	{return accountId;}
int Account::getBalance()	{ return balance; }
AccountStatus Account::getAccountStatus()
{
	switch (status)
	{
	case Active:	return Active;
		break;
	case Banned:	return Banned;
		break;
	case Deleted:	return Deleted;
		break;
	}
}
AccountType Account::getAccountType()
{
	switch (type)
	{
	case Longterm:	return Longterm;
		break;
	case Shortterm:	return Shortterm;
		break;
	case Current:	return Current;
		break;
	}

}
string Account::getStringAccountStatus()
{
	switch(status)
	{
	case Active:	return "Active";
		break;
	case Banned:	return "Banned";
		break;
	case Deleted:	return "Deleted";
		break;
	}
}
string Account:: getStringAccountType()
{
	switch (type)
	{
	case Longterm:	return "Longterm";
		break;
	case Shortterm:	return "Shortterm";
		break;
	case Current:	return "Current";
		break;
	}
}