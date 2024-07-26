#include <iostream>
#include <vector>
using namespace std;

// ��ġ�� �������� Ŭ������ shape�� �׸���.
// ����ϸ� ���, �����, �Ǵ�, ������ �׸� �� ������
// ���ӿ� �� �׸��� ��Ÿ�� Board Ŭ������ �����.
// Board Ŭ�����¿��� ���ӿ� �� �� Ÿ�Ͽ� �ش��ϴ� ���� �迭�� �����Ѵ�.
// �⺻ ������ �迭�� '-' ���� �����ϸ�, �����,�Ǵ�,������ ��ġ�� �ȴٸ�
// �迭�� �ش� ��ġ�� �� ĳ������ ����� ��Ÿ����.

class Board {
public:
	char* board; //��ü ���� ���� ��Ÿ�� ���� �迭�� ������ ������ ������ �����Ѵ�.
	int width, height;
	Board(int w,int h) : width(w), height(h) 
	{
		board = new char[width * height]; //������ ��ü ���� �� ����, ��ġ�� ���� ���� �Ҵ�
		clearBoard();
	}

	void clearBoard() //���� ���� ��� ������ '.'�� �ʱ�ȭ
	{ 
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
				board[i * width + j] = '.';
		}
	}
	void printBoard() //���� �� ��� ���� �׸���
	{ 
		for (int i = 0; i < height; i++)
		{
			cout << "\t";
			for (int j = 0; j < width; j++)
				cout << board[i * width + j];
			cout << endl;
		}
	}

	void setValue(int _x,int _y, char newValue) // ���� �� ���� ������ ���� ���ο� ������ ����
	{
		board[_y * width + _x] = newValue;
	}

	~Board(){}
};

class Sprite {
protected:
	int x, y;     // ���� ��ġ�� x��ǥ(�¿�), y��ǥ(����)
	char shape;   // ������ ���
public:
	Sprite(int _x, int _y, char _s) : x(_x), y(_y), shape(_s) {}
	virtual void move(char d) = 0;
	//virtual void draw(char d) = 0;
	
	//vector ����Ʈ�� �����, �Ǵ�, ������ �־�ΰ� 
	// ���ǹ����� �� ��ü���� ��ġ�� ����� �޾ƿ� ���̹Ƿ�
	// ����� �ż���� ȣ�����ֱ� ���ؼ� �θ� Ŭ�������� ȣ�����ش�.
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
		//���콺 wasd�� ���ϵ¿� �̵�
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
		//���ڸ�
	}
};

class Enemy : public Sprite {
public:
	Enemy(int _x, int  _y) : Sprite(_x, _y, 'E') {}
	void move(char input)
	{
		//�����ϰ� �̵�
		//25%Ȯ���� ��/��/��/�� �̵�

	}
};


//���� ����� ���� �ڵ带 �����ϱ� ���� ���� ���
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

	//����, ��, ������ ���� ����
	//��� ������ �ż���� ȣ���ϱ� ���ؼ� Sprite Ŭ���� �����ͷ� ��´�.
	vector<Sprite*> list;
	int width, height;

	cout << "������ ũ�⸦ �Է��Ͻÿ�[�ִ� 10 X 10]: " << endl;
	cout << "����: ";
	cin >> width;
	cout << "����: ";
	cin >> height;

	Board B(width, height);
	list.push_back(new Hero(0, 0));
	list.push_back(new Treasure(height - 1, width - 1));
	list.push_back(new Enemy(3,3));
	

	cout << "�� ������ ��ǥ�� ����(T)�̳� ��(E)�� ������ �ʰ� ������ �����ϴ� ���̴�.";
	cout << "���ΰ��� a,s,w,d Ű�� �̿��Ͽ� ������ �� �ִ�." << endl;
	drawline('*');
	cout << endl;

	while (true)
	{
		B.clearBoard(); //������ �ʱ�ȭ
		for (auto& e : list) //����Ʈ�� ��� ���ΰ�, ��, ������ �����͸� �����ǿ� ���
			B.setValue(e->getXpos(), e->getYpos(), e->getShape());
		B.printBoard(); //������ �����͸� ������� ��ü ������ ���

		char input;
		cout << "���� �����ϱ�?(w,a,s,d): ";
		cin >> input;

		for (auto& e : list) //��� ��ü���� ���� ������ �� move�Լ��� ���� �����̵��� ������ش�.
			e->move(input);
		drawline('-');
		cout << endl;
		
	}

	//���� ���� ��� ���� �Ҵ��� �����Ѵ�.
	for (auto& e : list)
		delete e;
	list.clear();

	return 0;
}