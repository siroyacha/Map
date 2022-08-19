// ** ÀÌÅÍ·¹ÀÌÅÍ °øºÎÇÏ±â
#include<iostream>
#include<Windows.h>
#include<math.h>
#include<string>
#include<map>
#include<vector>
#include<list>

using namespace std;

int main()
{
	/*
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
	*/

	{
		/*
		class Object
		{
		private:
			string Key;
			int Attack;
		public:
			void Initiailize() { Key = " "; Attack = rand() % 250 + 50; }
			void Render() { cout << "°ø°İ·Â : " << Attack << endl; }
		public:
			string GetKey() { return Key; }
			void SetKey(const string& _key) { Key = _key; }
			void SetAttack(const int& _Attack) { Attack = _Attack; }
		};
		*/
		/*
		{
			map<string, list<Object*>> ObjecList;

			for (int i = 0; i < 7; ++i)
			{
				Object* pObj = new Object;
				pObj->Initiailize();

				string str = " ";
				cout << "ÀÌ¸§ ÀÔ·Â : "; cin >> str;
				pObj->SetKey(str);
				map<string, list<Object*>>::iterator iter = ObjecList.find(str);

				if (iter == ObjecList.end())
				{
					list<Object*> TempList;
					TempList.push_back(pObj);

					ObjecList.insert(make_pair(pObj->GetKey(), TempList));
				}
				else
					iter->second.push_back(pObj);
			}

			cout << "ÀÔ·Â Á¾·á" << endl << endl;
			cout << "Å½»ö ½ÃÀÛ" << endl;
			while (true)
			{
				// ** map ÀÚ·á Å½»ö
				string str = "";
				cout << "ÀÌ¸§ ÀÔ·Â : "; cin >> str;

				if (str == "q")
					break;

				map<string, list<Object*>>::iterator iter = ObjecList.find(str);

				if (iter == ObjecList.end())
				{
					cout << "¹«±â°¡ ¾ø½À´Ï´Ù." << endl;
					continue;
				}
				else
				{
					for (list<Object*>::iterator iter2 = iter->second.begin();
						iter2 != iter->second.end(); ++iter2)
					{
						(*iter2)->Render();
					//iter->second.front()->Render();

					for (size_t i = 0; i < iter->second.size(); i++)
					{
						iter->second.front()->Render();
						iter->second.push_back(iter->second.front());
						iter->second.pop_front();
					}

					}
				}
			}
			cout << "** Å½»ö Á¾·á **" << endl << endl;
		}
		*/

	}

	/*
	{
		multimap<string, int>strList;

		strList.insert(make_pair("È«±æµ¿", 1));
		strList.insert(make_pair("È«±æµ¿", 2));
		strList.insert(make_pair("È«±æµ¿", 3));
		strList.insert(make_pair("È«±æµ¿", 4));
		strList.insert(make_pair("È«±æµ¿", 5));
		strList.insert(make_pair("È«±æµ¿", 6));
		strList.insert(make_pair("È«±æµ¿", 7));
		strList.insert(make_pair("È«±æµ¿", 8));
		strList.insert(make_pair("È«±æµ¿", 9));
		strList.insert(make_pair("È«±æµ¿", 10));

		for (multimap<string, int>::iterator iter = strList.begin();
			iter != strList.end(); ++iter)
		{
			cout << iter->first << " : " << iter->second << endl;
		}
	}
	*/

	int i = 0;

	{
		class Vector3
		{
		public:
			float x, y, z;
			Vector3() {}
			Vector3(float _x, float _y) :x(_x), y(_y), z(0) {}
			Vector3(float _x, float _y, float _z) :x(_x), y(_y), z(_z) {}
		};
		class object
		{
		private:
			string Key;
			Vector3 Position;
			object* Target;
		public:
			void Initialize()
			{
				Key = " ";
				Target = nullptr;
				srand(GetTickCount64());
				Position = Vector3(
					rand() % 50 + 1,
					rand() % 50 + 1);
			}

			void Render()
			{
				cout << "X : " << Position.x << endl;
				cout << "Y : " << Position.y << endl;
			}
		public:
			string GetKey() { return Key; }
			void SetKey(const string& _key) { Key = _key; }
			//void SetTarget(const object& _Target) { Target = _Target; }
			Vector3 GetPosition()const { return Position; }
			void SetPosition(const float& _x, const float& _y) { Position = Vector3(_x, _y); }
		};
		object* Player = new object;
		Player->SetPosition(25.0f, 25.0f);

		multimap<float, object*> ObjectList;
	}



	return 0;
}