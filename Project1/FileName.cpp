//���� ����� Ű�� ������ �ݺ��ڷ� ����ϱ�

#include <iostream>
#include <map>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	map<string, int> m;

	pair<string, int> e = { "a",100 };
	m.insert(e);
	auto it = m.begin();

	while(it != m.end())
	{
		cout << "Key : " << e.first << " Value: " << e.second << "\n";
		it++;
	}

	return 0;
}