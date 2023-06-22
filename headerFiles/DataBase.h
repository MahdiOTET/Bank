#pragma once
#include<string>
#include<vector>
using namespace std;
template<typename T>
class Database
{
public:
	virtual string objectToString() = 0;
	virtual T stringToObject(vector<string>) = 0;
};
