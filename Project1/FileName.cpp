#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);

	//3의 배수를 컨테이너에서 제거하는 프로그램
	vector<int> vec;

	for (int i = 0; i < 20; i++)
	{
		vec.push_back(i);
	}

	vector<int>::iterator it = vec.begin();
	//auto it = vec.begin();
	while (it != vec.end())
	{
		if (*it % 3 == 0)
		{
			it = vec.erase(it);
		}
		else
		{
			it++;
		}
	}


	for (auto& a : vec)
	{
		cout << a << " ";
	}

	return 0;
}