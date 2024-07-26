#include <iostream>
#include <vector>
using namespace std;

// 위치를 바탕으로 클래스의 shape를 그린다.
// 어떻게하면 배경, 히어로, 악당, 보물을 그릴 수 있을까
// 게임에 들어갈 그림을 나타낼 Board 클래스를 만든다.
// Board 클래스는에선 게임에 들어갈 각 타일에 해당하는 값을 배열로 저장한다.
// 기본 값으로 배열에 '-' 값을 저장하며, 히어로,악당,보물의 위치를 안다면
// 배열의 해당 위치에 각 캐릭터의 모양을 나타낸다.

class Board {
public:
	char* board; //전체 게임 맵을 나타낼 문자 배열을 저장할 포인터 변수를 선언한다.
	int width, height;
	Board(int w,int h) : width(w), height(h) 
	{
		board = new char[width * height]; //게임판 객체 생성 시 높이, 위치에 따른 동적 할당
		clearBoard();
	}

	void clearBoard() //게임 판의 모든 영역을 '.'로 초기화
	{ 
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
				board[i * width + j] = '.';
		}
	}
	void printBoard() //게임 판 모든 영역 그리기
	{ 
		for (int i = 0; i < height; i++)
		{
			cout << "\t";
			for (int j = 0; j < width; j++)
				cout << board[i * width + j];
			cout << endl;
		}
	}

	void setValue(int _x,int _y, char newValue) // 게임 판 영역 내부의 값을 새로운 값으로 설정
	{
		board[_y * width + _x] = newValue;
	}

	~Board(){}
};

class Sprite {
protected:
	int x, y;     // 현재 위치의 x좌표(좌우), y좌표(상하)
	char shape;   // 현재의 모양
public:
	Sprite(int _x, int _y, char _s) : x(_x), y(_y), shape(_s) {}
	virtual void move(char d) = 0;
	//virtual void draw(char d) = 0;
	
	//vector 리스트에 히어로, 악당, 보물을 넣어두고 
	// 조건문으로 각 객체들의 위치와 모습을 받아올 것이므로
	// 공통된 매서드로 호출해주기 위해서 부모 클래스에서 호출해준다.
	int getXpos() { return x; }
	int getYpos() { return y; }
	char getShape() { return shape; }
	virtual ~Sprite(){}
};

class Hero : public Sprite {
public:
	Hero(int _x,int _y) : Sprite(_x,_y,'H') {}
	void move(char input)
	{
		//마우스 wasd로 상하돠우 이동
		if (input == 'w') { this->y -= 1; }
		else if (input == 'a') { this->x -= 1; }
		else if (input == 's') { this->y += 1; }
		else if (input == 'd') { this->x += 1; }
		else {}
	}
	void draw(){
		
	}
};

class Treasure : public Sprite {
public:
	Treasure(int _x, int  _y) : Sprite(_x, _y,'T') {}
	void move(char input)
	{
		//제자리
	}
};

class Enemy : public Sprite {
public:
	Enemy(int _x, int  _y) : Sprite(_x, _y, 'E') {}
	void move(char input)
	{
		//랜덤하게 이동
		//25%확률로 상/하/좌/우 이동

	}
};


//게임 설명과 실행 코드를 구분하기 위한 라인 출력
void drawline(char _x)
{
	cout << endl;
	for (int i = 0; i < 100; i++)
		cout << _x;
	cout << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);

	//영웅, 적, 보물을 담을 벡터
	//모두 동일한 매서드로 호출하기 위해서 Sprite 클래스 포인터로 담는다.
	vector<Sprite*> list;
	int width, height;

	cout << "보드의 크기를 입력하시오[최대 10 X 10]: " << endl;
	cout << "가로: ";
	cin >> width;
	cout << "새로: ";
	cin >> height;

	Board B(width, height);
	list.push_back(new Hero(0, 0));
	list.push_back(new Treasure(height - 1, width - 1));
	list.push_back(new Enemy(3,3));
	

	cout << "이 게임의 목표는 함정(T)이나 적(E)을 만나지 않고 보물에 도달하는 것이다.";
	cout << "주인공은 a,s,w,d 키를 이용하여 움직일 수 있다." << endl;
	drawline('*');
	cout << endl;

	while (true)
	{
		B.clearBoard(); //게임판 초기화
		for (auto& e : list) //리스트에 담긴 주인공, 적, 보물의 데이터를 게임판에 담기
			B.setValue(e->getXpos(), e->getYpos(), e->getShape());
		B.printBoard(); //게임판 데이터를 기반으로 전체 게임판 출력

		char input;
		cout << "어디로 움직일까?(w,a,s,d): ";
		cin >> input;

		for (auto& e : list) //모든 객체들이 각기 재정의 된 move함수를 통해 움직이도록 만들어준다.
			e->move(input);
		drawline('-');
		cout << endl;
		
	}

	//벡터 안의 모든 동적 할당을 해제한다.
	for (auto& e : list)
		delete e;
	list.clear();

	return 0;
}