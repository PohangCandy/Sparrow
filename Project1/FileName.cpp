//짝수를 찾는 프로그램을 만들어본다.
//count_if()를 사용한다.
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

	cout << "값이 짝수인 요소의 개수: " << n << "\n";

	return 0;
}