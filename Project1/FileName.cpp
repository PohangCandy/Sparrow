#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);

	//3�� ����� �����̳ʿ��� �����ϴ� ���α׷�
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