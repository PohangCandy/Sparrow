#include <iostream>
using namespace std;

template<typename T>
T getSmallest(T arr[],int size)
{
	T min = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	return min;
}

int main()
{
	double list[] = { 1.2,3.3,9.0,1.5,8.7 };
	int size = sizeof(list) / sizeof(list[0]);
	cout << getSmallest(list,size);

	return 0;
}