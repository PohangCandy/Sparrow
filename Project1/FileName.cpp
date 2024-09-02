#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	//입력한 문장으로부터 단어의 빈도를 계산하는 프로젝트
	map<string, int> word_num;
	string s;
	//eof()가 나오기 전까지 단어를 입력받는다.
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