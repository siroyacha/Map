#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<list>

using namespace std;

int main()
{
	{
		map<string, int>Number;

		Number.insert(make_pair("È«±æµ¿", 32));
		Number.insert(make_pair("ÀÓ²©Á¤", 35));

		Number["ÀÌ¸ù·æ"] = 38;
		map<string, int>::iterator iter = Number.find("ÀÌ¸ù·æ");
		cout << iter->second << endl;
	}

	{
		map<string, list<int>>Number;
	}

	{
		map<string, vector<int>>Number;
	}

	{
		vector<map<string, int>>Number;
		for (int i = 0; i < 10; i++)
		{
			Number[i].insert(make_pair("È«±æµ¿", 32));

		}
	}
	return 0;
}