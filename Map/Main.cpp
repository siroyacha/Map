// ** 이터레이터 공부하기
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

		Number.insert(make_pair("홍길동", 32));
		Number.insert(make_pair("임꺽정", 35));

		Number["이몽룡"] = 38;
		map<string, int>::iterator iter = Number.find("이몽룡");
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
			Number[i].insert(make_pair("홍길동", 32));

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
			void Render() { cout << "공격력 : " << Attack << endl; }
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
				cout << "이름 입력 : "; cin >> str;
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

			cout << "입력 종료" << endl << endl;
			cout << "탐색 시작" << endl;
			while (true)
			{
				// ** map 자료 탐색
				string str = "";
				cout << "이름 입력 : "; cin >> str;

				if (str == "q")
					break;

				map<string, list<Object*>>::iterator iter = ObjecList.find(str);

				if (iter == ObjecList.end())
				{
					cout << "무기가 없습니다." << endl;
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
			cout << "** 탐색 종료 **" << endl << endl;
		}
		*/

	}

	/*
	{
		multimap<string, int>strList;

		strList.insert(make_pair("홍길동", 1));
		strList.insert(make_pair("홍길동", 2));
		strList.insert(make_pair("홍길동", 3));
		strList.insert(make_pair("홍길동", 4));
		strList.insert(make_pair("홍길동", 5));
		strList.insert(make_pair("홍길동", 6));
		strList.insert(make_pair("홍길동", 7));
		strList.insert(make_pair("홍길동", 8));
		strList.insert(make_pair("홍길동", 9));
		strList.insert(make_pair("홍길동", 10));

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
			void SetTarget(object* _Target) { Target = _Target; }
			Vector3 GetPosition()const { return Position; }
			void SetPosition(const float& _x, const float& _y) { Position = Vector3(_x, _y); }
		};
		object* Player = new object;
		Player->SetPosition(25.0f, 25.0f);

		multimap<float, object*> ObjectList;


		for (int i = 0; i < 20; ++i)
		{
			// ** 색체 생성
			object* pObj = new object;

			// ** 객체 초기화
			pObj->Initialize();

			pObj->SetTarget(Player);

			// ** "Enemy" 값으로 객체 이름을 셋
			pObj->SetKey("Enemy");


			// ** 삼각 함수
			float X = pObj->GetPosition().x - Player->GetPosition().x;
			float Y = pObj->GetPosition().y - Player->GetPosition().y;

			float D = sqrt((X * X) + (Y * Y));


			// ** 거리를 키값으로 사용
			ObjectList.insert(make_pair(D, pObj));
		}

		// ** 출력
		for (multimap<float, object*>::iterator iter = ObjectList.begin();
			iter != ObjectList.end(); ++iter)
		{
			cout << "Player 와의 거리 : " << iter->first << endl;
			iter->second->Render();
		}

		// ** Player와 제일 가까운 Enemy를 Target로 설정.
		multimap<float, object*>::iterator iter = ObjectList.begin();
		Player->SetTarget((*iter).second);
	}



	return 0;
}