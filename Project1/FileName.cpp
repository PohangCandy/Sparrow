#include <iostream>
using namespace std;

//Ȩ ��ũ��ũ�� ���� ��ǰ���� ���� �����ϱ� ���� �������̽�
class RemoteControl {
	//���� ���� �Լ� ����
public:

	virtual void turnON() = 0; //���� ��ǰ�� �Ҵ�
	virtual void turnOFF() = 0; //���� ��ǰ�� ����
	virtual void print() { cout << "print Remote"; }
};

class Television : public RemoteControl {
public:

	void turnON()
	{
		//TV ������ �ѱ� ���� �ڵ尡 ��� ����.
		cout << "TV turn On"<< endl;
	}

	void turnOFF()
	{
		//TV ������ ���� ���� �ڵ尡 ��� ����.
	}
};

class Refrigerator : public RemoteControl {
public:

	void turnON()
	{
		//TV ������ �ѱ� ���� �ڵ尡 ��� ����.
		cout << "Refrigerator turn On" << endl;
	}

	void turnOFF()
	{
		//TV ������ ���� ���� �ڵ尡 ��� ����.
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