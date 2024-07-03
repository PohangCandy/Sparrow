#include <iostream>
using namespace std;

class MyArray {
public:
	int size;
	int* data;
	MyArray(const MyArray& other);
	MyArray(int size);

	~MyArray()
	{
		if (data != NULL) delete[] this->data;
	}
};



int main()
{
	MyArray buffer(10);
	buffer.data[0] = 1; 
	{
		MyArray clone = buffer;
	}
	buffer.data[0] = 2;

	return 0;
}

MyArray::MyArray(const MyArray& other)
{
	this->size = other.size;
	this->data = new int[other.size]; //새로운 공간 할당
	for (int i = 0; i < other.size; i++) // 데이터 복사
	{
		this->data[i] = other.data[i];
	}
}

MyArray::MyArray(int size)
{
	this->size = size;
	data = new int[size];
}
