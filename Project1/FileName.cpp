//¦���� ã�� ���α׷��� ������.
//count_if()�� ����Ѵ�.
#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
bool is_even(const T& num)
{
	return num % 2 == 0;
}

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	vector<int> vec;

	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}

	int n = count_if(vec.begin(), vec.end(), is_even<int>);

	cout << "���� ¦���� ����� ����: " << n << "\n";

	return 0;
}