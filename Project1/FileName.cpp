#include <iostream>
using namespace std;

//홈 네크워크의 가전 제품들을 원격 조종하기 위한 인테페이스
class RemoteControl {
	//순수 가상 함수 정의
public:

	virtual void turnON() = 0; //가전 제품을 켠다
	virtual void turnOFF() = 0; //가전 제품을 끈다
	virtual void print() { cout << "print Remote"; }
};

class Television : public RemoteControl {
public:

	void turnON()
	{
		//TV 전원을 켜기 위한 코드가 들어 간다.
		cout << "TV turn On"<< endl;
	}

	void turnOFF()
	{
		//TV 전원을 끄기 위한 코드가 들어 간다.
	}
};

class Refrigerator : public RemoteControl {
public:

	void turnON()
	{
		//TV 전원을 켜기 위한 코드가 들어 간다.
		cout << "Refrigerator turn On" << endl;
	}

	void turnOFF()
	{
		//TV 전원을 끄기 위한 코드가 들어 간다.
	}
};

int main()
{
	ios_base::sync_with_stdio(false);

	Television* pt = new Television();
	pt->turnON();

	Refrigerator* pr = new Refrigerator();
	pr->turnON();

	return 0;
}