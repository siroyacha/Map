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

		Number.insert(make_pair("ȫ�浿", 32));
		Number.insert(make_pair("�Ӳ���", 35));

		Number["�̸���"] = 38;
		map<string, int>::iterator iter = Number.find("�̸���");
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
			Number[i].insert(make_pair("ȫ�浿", 32));

		}
	}
	return 0;
}