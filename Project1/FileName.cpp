#include <iostream>
using namespace std;

class Weapon {
public:
	virtual void load() = 0;
};

class Gun : public Weapon {
	void load() { cout << "���� �����մϴ�."; }
};

class Bomb : public Weapon {
	void load() { cout << "��ź�� �����մϴ�."; }
};

int main()
{
	ios_base::sync_with_stdio(false);

	Weapon* a[3];
	a[0] = new Gun();
	a[1] = new Bomb();
	a[2] = new Bomb();

	for (auto& arr : a)
	{
		arr->load();
		cout << "\n";
	}
}