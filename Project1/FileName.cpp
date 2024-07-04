#include <iostream>
using namespace std;

class Game {
public:
	static int playercount;

	Game() { playercount++; }

	void print() { cout << playercount << endl; }
};

int Game::playercount = 0;


int main()
{
	Game player1;
	Game player2;
	player2.print();


	return 0;
}