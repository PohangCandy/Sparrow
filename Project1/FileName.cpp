#include <iostream>
using namespace std;

class Counter {
private:
	int value;

public:
	Counter() : value(0) {};
	~Counter() {}
	int getValue() const { return value; }
	void setValue(int x) { value = x; }

	Counter& operator++()
	{
		++value;
		return *this; 
	}

	const Counter operator++(int)
	{
		Counter temp = { *this };
		++value;
		return temp;
	}
};


int main()
{
	Counter c;
	Counter c1 = c++;
	cout << c1.getValue() << endl;
	Counter c2 = ++c;
	cout << c.getValue();

	return 0;
}