#include <iostream>
using namespace std;

class Box {
private:
	double length;
	double width;
	double height;
	static int count;
public:
	Box(double l = 2.0, double w = 2.0, double h = 2.0) : length(l), width(w), height(h) { count++; }
	double Volume() {
		return length * width * height;
	}

	void print() {
		cout << count;
	}
};

int Box::count = 0;


int main() 
{
	Box b1;
	Box b2;
	Box b3;
	b3.print();

	return 0;
}