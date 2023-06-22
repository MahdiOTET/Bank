#pragma once
enum Result
{
	Successful = 1,
	Failed = 2
};
class Transaction
{
public:
	Transaction();
	Transaction(int,int,int,Result);
	
private:
	int reciverAccountId;
	int senderAccountId;
	int moneyAmount;
	Result result;
};


