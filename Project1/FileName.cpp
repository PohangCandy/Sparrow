#include <iostream>
using namespace std;

class MyClass {
public:
	int x;
	char c;
	string s;
	MyClass(int _x, char _c, string _s) : x(_x), c(_c), s(_s) { cout<<"������ �⺻ ������"<<endl; }
	MyClass(const MyClass& other) : x(other.x), c(other.c), s(other.s) { cout << "������ ���� ������" << endl; }
	~MyClass() {}

};

int main()
{
	MyClass c1(5, '3', "Jhon");
	MyClass c2 = c1;
	return 0;
}