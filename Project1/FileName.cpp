#include <iostream>
using namespace std;

int main()
{
	int pizza_slices = 12;
	int persons = 0;
	int slices_pre_person = 0;

	try {
		cout << "���� �������� �Է��Ͻÿ�: ";
		cin >> pizza_slices;
		cout << "��� ���� �Է��Ͻÿ�: ";
		cin >> persons;

		if (persons == 0)
			throw persons;
		if (persons < 0)
			throw "negative";
		slices_pre_person = pizza_slices / persons;
		cout << "�� ����� ���ڴ� " << slices_pre_person << "�Դϴ�." << endl;
	}
	catch (const char* e)
	{
		cout << "���� : ������� " << e << "�Դϴ�. ";
	}
	catch (int e)
	{
		cout << "���� : ������� " << e << "�Դϴ�. ";
	}

	return 0;
}