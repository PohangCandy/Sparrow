#include <iostream>
using namespace std;

class Animal {
public:
	string name;
	Animal(string n) : name(n) {}

	virtual void speak() { cout << "Animal Speak" << "\n"; }
	virtual ~Animal() { cout << "ºÎ¸ðµ¿¹°ÀÇ ¼Ò¸êÀÚ" << "\n"; }
};

class Dog : public Animal {
public:
	Dog(string n) : Animal(n) {}

	void speak() { cout << "¸Û¸Û" << "\n"; }
	~Dog() { cout << "°³ÀÇ ¼Ò¸êÀÚ" << "\n"; }
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Animal* a = new Dog("ÇÃ¶õ´õ½º");
	delete a;

	return 0;
}