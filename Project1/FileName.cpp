#include <iostream>
using namespace std;

int main()
{
	int pizza_slices = 12;
	int persons = 0;
	int slices_pre_person = 0;

	try {
		cout << "피자 조각수를 입력하시오: ";
		cin >> pizza_slices;
		cout << "사람 수를 입력하시오: ";
		cin >> persons;

		if (persons == 0)
			throw persons;
		if (persons < 0)
			throw "negative";
		slices_pre_person = pizza_slices / persons;
		cout << "한 사람당 피자는 " << slices_pre_person << "입니다." << endl;
	}
	catch (const char* e)
	{
		cout << "오류 : 사람수가 " << e << "입니다. ";
	}
	catch (int e)
	{
		cout << "오류 : 사람수가 " << e << "입니다. ";
	}

	return 0;
}