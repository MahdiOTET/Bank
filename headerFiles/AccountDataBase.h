#pragma once
#include<vector>
#include"DataBase.h"
#include"Account.h"
#include"DataBaseUtilities.h"
class AccountDataBase : public Database<Account> , public Account
{
private:
	string filepath;
public:
	AccountDataBase(){}
	AccountDataBase(string path) { filepath = path; }
	string getFilePath() { return filepath; }
	
	
	virtual string objectToString()
	{	
		string stringObject = "";
		stringObject += to_string(this->getOwnerId());
		stringObject += ",";
		stringObject += to_string(this->getAccountId());
		stringObject += ",";
		stringObject += to_string(this->getBalance());
		stringObject += ",";
		switch (this->getAccountStatus())
		{
		case Longterm: stringObject += "Longterm";
			break;
		case Shortterm:	stringObject += "Shortterm";
			break;
		case Current:	stringObject += "Current";
			break;
		}
		stringObject += ",";
		switch (this->getAccountStatus())
		{
		case Active: stringObject += "Active";
			break;
		case Banned:	stringObject += "Banned";
			break;
		case Deleted:	stringObject += "Deleted";
			break;
		}
	
		return stringObject;
	}
	virtual Account stringToObject(vector<string>tokens)
	{
		int ownerId = stoi(tokens[0]);
		int accountId=stoi(tokens[1]);
		int balance=stoi(tokens[2]);
		AccountType type;
		if (tokens[3] == "Longterm")
			type = Longterm;
		else if (tokens[3] == "Shortterm")
			type = Shortterm;
		else if (tokens[3] == "Current")
			type = Current;
		AccountStatus status;
		if (tokens[4] == "Active")
			status = Active;
		else if (tokens[4] == "Banned")
			status = Banned;
		else if (tokens[4] == "Deleted")
			status = Deleted;

		Account object(ownerId, accountId, balance, type, status);
		return object;
	}
};
