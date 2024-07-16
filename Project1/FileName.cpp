#include <iostream>
using namespace std;


class Person {
	string job;
	int age;
	bool Cantalk;
	bool CanWalk;
public:
	Person(string j,int a,bool ct,bool cw):job(j),age(a),Cantalk(ct),CanWalk(cw){}
	void print()
	{
		cout << "나이 : " << age << endl;
		cout << "직업 : " << job << endl;
		if (Cantalk == true)
		{
			cout << "말할 수 있음" << endl;
		}
		if (CanWalk == true)
		{
			cout << "걸을 수 있음" << endl;
		}
	}
};

class Professor : Person
{
	bool CanStudy;
public:
	Professor(string j, int a, bool ct, bool cw, bool cs) : Person(j, a, ct, cw), CanStudy(cs) {}

	void print() {
		Person::print();
		if (CanStudy == true)
		{
			cout << "가르칠 수 있음" << endl;
		}
	}
};

class TennisPlayer : Person
{
	bool CanPlay;
public:
	TennisPlayer(string j, int a, bool ct, bool cw, bool cp) : Person(j, a, ct, cw), CanPlay(cp) {}

	void print() {
		Person::print();
		if (CanPlay == true)
		{
			cout << "테니스 경기를 할 수 있음" << endl;
		}
	}
};


int main()
{

	Professor dumbledoor("교수", 39, true, true, true);
	dumbledoor.print();
	TennisPlayer jocobitch("테니스 선수", 23, true, true, true);
	jocobitch.print();

	return 0;
}
