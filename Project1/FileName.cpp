#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	//�Է��� �������κ��� �ܾ��� �󵵸� ����ϴ� ������Ʈ
	map<string, int> word_num;
	string s;
	//eof()�� ������ ������ �ܾ �Է¹޴´�.
	while (1)
	{
		//string s;
		cin >> s;
		if (cin.eof())
		{
			break;
		}
		word_num[s]++;
	}

	for (auto it = word_num.begin(); it != word_num.end(); it++)
	{
		cout << it->first << " " << it->second;
		cout << "\n";
	}

	//string input;
	//cin >> input;
	//cout << input;

	return 0;
}