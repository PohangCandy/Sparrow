#include <iostream>

using namespace std;

class PizzaStore {
	int pizza_size;

public:

	PizzaStore(int psize) :pizza_size{ psize }
	{
	}

	int getPizzaSize()
	{
		return pizza_size;
	}

	void setPizzaSize(int newSize)
	{
		pizza_size = newSize;
	}
	void print();
};

void sizeUP(PizzaStore &P)
{
	P.setPizzaSize(P.getPizzaSize() * 2);
}

void PizzaStore::print()
{
	cout << getPizzaSize();
}

PizzaStore returnPizzaObj()
{
	PizzaStore p{20};
		return p;
}

int main()
{
	PizzaStore P{ 10 };
	P = returnPizzaObj();
	P.print();

	return 0;
}