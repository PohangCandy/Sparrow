#include <iostream>
using namespace std;

class Person {
	
public:
	int age;
	Person(int a):age(a){}
};


int main()
{
	Person p1(10);
	Person p2(10);

	if (p1 == p2)
	{
		cout<< "�����ϴ�." << endl;
	}


	return 0;
}