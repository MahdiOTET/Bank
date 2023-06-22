#include"../headerFiles/Account.h"
#include"../headerFiles/AccountDataBase.h"
#include"../headerFiles/DataBaseUtilities.h"
#include<iostream>



int main()
{
	AccountDataBase accountDatabase("C:/Users/MahdiOTET/Desktop/Project2/x64/Debug/bin/Accounts.txt");
	DataBaseUtilities <AccountDataBase,Account> accountDataBaseUtilities;
	vector<Account> accs = accountDataBaseUtilities.load(accountDatabase);
	
	for (auto& i : accs)
	{
		cout << i.getOwnerId() << "\t" << i.getAccountId() << "\t" << i.getBalance() << "\t" << i.getStringAccountType() << "\t" << i.getStringAccountStatus() << endl;
	}


	//accountDataBaseUtilities.save(accountDatabase, accs);

	

	return 0;
}
