#include <iostream>
#include <vector>

using namespace std;

class Contact {
	string name;
	string tel;

public:
	Contact(string _name,string _tel): tel(_tel),name(_name) {}
	string GetName() { return name; }
	string GetTel() { return tel; }
	void SetName(string newName) { name = newName; }
	void SetTel(string newTel) { tel = newTel; }
};

int main() {

	vector<Contact> v;

	for (int i = 0 ; i < 3 ; i ++)
	{
		string newname;
		string newtel;

		cout << "이름을 입력하시오 : ";
		cin >> newname;
		

		cout << "전화번호를 입력하시오 : ";
		cin >> newtel;
		
		v.push_back(Contact(newname, newtel));
	}

	string FindName;
	cout << "탐색하고 싶은 이름을 고르시오 : ";
	cin >> FindName;

	for (auto& a : v)
	{
		if (a.GetName() == FindName)
			cout << "전화번호: " << a.GetTel();
			break;
	}

	return 0;
}

