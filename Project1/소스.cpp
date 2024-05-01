#include <Windows.h>
#include <conio.h>
#include <iostream>

using namespace std;

class Circle {
public:
	Circle() : x(0), y(0), radius(0) {};
	Circle(int _x, int _y, int _radius) : x(_x), y(_y), radius(_radius) {};
	void draw();
private:
	int x, y;
	int radius;
public:
	int GetXpos() { return x; }
	int GetYpos() { return y; }
	int GetRadius() { return radius; }
	void SetXpos(int newXpos) { x = newXpos; }
	void SetYpos(int newYpos) { y = newYpos; }
	void SetRadius(int newRadius) { radius = newRadius; }
};

int main() {

	Circle circles[10];
	while (true)
	{
		for (Circle& c : circles)
		{
			c.SetXpos(rand() % 500);
			c.SetYpos(rand() % 300);
			c.SetRadius(rand() % 100);
			c.draw();
		}
		char ch = _getch();
		if (ch == 'q')
		{
			break;
		}
		if (ch == 'm')
		{
			for (Circle& c : circles)
			{
				c.SetXpos(c.GetXpos() + 1000);
				c.draw();
			}
		}
	}


}

void Circle::draw()
{
	int r = radius / 2;
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, x - r, y - r, x + r, y + r);
}
