#include <iostream>
using namespace std;

class Animal {
public:
	void speak()
	{
		cout << "������ �Ҹ��� ���� ����" << endl;
	}
};

class Dog : public Animal {
public:
	void speak()
	{
		cout << "�۸�!" << endl;
	}
};

class Cat : public Animal {
public:
	void speak()
	{
		cout << "�߿�!" << endl;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Dog obj1;
	obj1.speak();

	Cat obj2;
	obj2.speak();

	return 0;
}