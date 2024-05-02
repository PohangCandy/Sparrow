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

		cout << "�̸��� �Է��Ͻÿ� : ";
		cin >> newname;
		

		cout << "��ȭ��ȣ�� �Է��Ͻÿ� : ";
		cin >> newtel;
		
		v.push_back(Contact(newname, newtel));
	}

	string FindName;
	cout << "Ž���ϰ� ���� �̸��� ���ÿ� : ";
	cin >> FindName;

	for (auto& a : v)
	{
		if (a.GetName() == FindName)
			cout << "��ȭ��ȣ: " << a.GetTel();
			break;
	}

	return 0;
}

