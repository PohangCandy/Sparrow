#include <iostream>
using namespace std;

class Date {
	int year, month, day;

public:
	Date(int y = 0,int m = 0,int d = 0): year(y), month(m), day(d) {}
	bool equals(Date obj) {
		return year == obj.year && month == obj.month && day == obj.day;
	}
};


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	return 0;
}