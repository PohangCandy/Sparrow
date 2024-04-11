#include <iostream>
#include "¼Ò½º.h"
using namespace std;
class Point {
	int x = 0;
	int y = 0;

public:
	int getposX();
	int getposY();
	void setposX(int newPosX);
	void setposY(int newPosY);
};

int Point::getposX()
{
	return x;
}

int Point::getposY()
{
	return y;
}

void Point::setposX(int newPosX)
{
	x = newPosX;
}

void Point::setposY(int newPosY)
{
	y = newPosY;
}

int main()
{
	Point a;
	int newPosx;
	cin >> newPosx;
	a.setposX(newPosx);
	cout << a.getposX()<<endl;
	cout << a.getposY();



	return 0;
}