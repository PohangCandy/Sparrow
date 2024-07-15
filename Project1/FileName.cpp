#include <iostream>
using namespace std;

class Box {
private:
	double length;
	double width;
	double height;
public:
	Box(int l = 0,int w = 0,int h = 0) : length(l),width(w),height(h){}
	double getVolume(void)
	{
		return length * width * height;
	}

	friend void printBox(Box b);

};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	Box b1(10, 20, 30);
	printBox(b1);


	return 0;

}

void printBox(Box b)
{
	cout << b.length;
	cout << b.width;
	cout << b.height;
}
