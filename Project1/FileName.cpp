#include <iostream>
using namespace std;

class Animal {
public:
	void speak()
	{
		cout << "悼拱捞 家府甫 郴绊 乐澜" << endl;
	}
};

class Dog : public Animal {
public:
	void speak()
	{
		cout << "港港!" << endl;
	}
};

class Cat : public Animal {
public:
	void speak()
	{
		cout << "具克!" << endl;
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