#include <iostream>
using namespace std;

class Time
{
public:
	int hour, min, sec;
	Time() {}
	Time(int h, int m, int s) : hour(h), min(m), sec(s) {};
	~Time() {};

	void print() { cout << hour << ":" << min << ":" << sec << endl; }
	int getHour() { return this->hour; }
	int getMin() { return this->hour; }
	int getSec() { return this->hour; }
	void setHour(int newHour) { this->hour = newHour; }
	void setMin(int newMin) { this->min = newMin; }
	void setSec(int newSec) { this->sec = newSec; }
};

bool isEqual(Time& t1, Time& t2)
{
	t1.print();
	t2.print();
	if (t1.hour == t2.hour)
	{
		if (t1.min == t2.min)
		{
			if (t1.sec == t2.sec)
			{
				return true;
			}
		}
	}
	return false;
}
bool isEqual(Time* pt1, Time* pt2)
{
	pt1->print();
	pt2->print();
	if (pt1->hour == pt2->hour)
	{
		if (pt1->min == pt2->min)
		{
			if (pt1->sec == pt2->sec)
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	Time* pTime = new Time[2];
	for (int i = 0; i < 2; i++)
	{
		cout << i << "��° �ð� ��ü�� �ð��� �Է��Ͻÿ�: ";
		int newhour;
		cin >> newhour;
		pTime[i].setHour(newhour);

		cout << i << "��° �ð� ��ü�� ���� �Է��Ͻÿ�: ";
		int newmin;
		cin >> newmin;
		pTime[i].setMin(newmin);

		cout << i << "��° �ð� ��ü�� �ʸ� �Է��Ͻÿ�: ";
		int newsec;
		cin >> newsec;
		pTime[i].setSec(newsec);

	}
	
	if (isEqual(pTime[0], pTime[1]))
	{
		cout << "�ð��� ��ġ��" << endl;
	}

	return 0;
}