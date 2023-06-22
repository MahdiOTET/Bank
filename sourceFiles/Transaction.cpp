#include"../headerFiles/Transaction.h"

Transaction::Transaction(){}
Transaction::Transaction(int receiverAccountId, int senderAccountId, int amountMoney, Result result)
{
	this->reciverAccountId = receiverAccountId;
	this->senderAccountId = senderAccountId;
	this->moneyAmount = amountMoney;
	this->result = result;
}
