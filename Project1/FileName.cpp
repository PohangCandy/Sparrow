#include <conio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	vector<string> words;
	ifstream infile("d:/words.txt");
	//파일 경로에 해당 파일이 없어서 잘못된건 아닐까?

	while (infile)
	{
		string word;
		infile >> word;
		words.push_back(word);
	}

	while (true)
	{
		string r = words[rand() % words.size()];
		cout << "이번에 선택된 단어는 " << r << endl;
		getch();
	}

	return 0;
}