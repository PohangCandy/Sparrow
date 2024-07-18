#include <iostream>
using namespace std;

class Animal {
public:
	string name;
	Animal(string n) : name(n) {}

	virtual void speak() { cout << "Animal Speak" << "\n"; }
	virtual ~Animal() { cout << "�θ𵿹��� �Ҹ���" << "\n"; }
};

class Dog : public Animal {
public:
	Dog(string n) : Animal(n) {}

	void speak() { cout << "�۸�" << "\n"; }
	~Dog() { cout << "���� �Ҹ���" << "\n"; }
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Animal* a = new Dog("�ö�����");
	delete a;

	return 0;
}