#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);

	//컨테이너에서 3의 배수를 골라서 삭제하는 코드
	vector<int> vec;

	for (int i = 0; i < 20; i++)
	{
		vec.push_back(i);
	}

	auto it = vec.begin();

	while (it != vec.end())
	{
		if (*it % 3 == 0)
		{
			it = vec.erase(it);
		}
		else
			it++;
	}

	return 0;
}