#pragma once
#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

template<typename T, typename F>
class DataBaseUtilities
{
public:
	void save(T type,vector<F> objects)
	{
		fstream file(type.getFilePath());

		for (const F object : objects)
		{
			string csvFileLine = type.objectToString();

			file << csvFileLine << endl;
		}

		file.close();
	}

	vector<F> load(T type)
	{
		vector<F> objects;
		string filepath = type.getFilePath();
		ifstream file(filepath);
		string line;

		if (file.is_open())
			while (getline(file, line))
			{
				vector<string> datas = splitString(line, ',');

				T tempdata;
				F createddata = tempdata.stringToObject(datas);		
				objects.push_back(createddata);
			}

		file.close();

		return objects;
		
	}

	
private:
	vector<string> splitString(const string& str, char delimiter)
	{
		vector<std::string> tokens;
		string token;
		istringstream tokenStream(str);

		while (getline(tokenStream, token, delimiter))
		{
			tokens.push_back(token);
		}

		return tokens;
	}
};
