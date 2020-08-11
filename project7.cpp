#include <iostream>
#include <string>
int cal_age(int);

using namespace std;

void main() {
	int nump;
	cout << "Enter person : ";
	cin >> nump;
	for (int n = 1; n <= nump; n++) {
		int year, totalyear = 0;
		cout << "Enter Year : ";
		cin >> year;
		int total = cal_age(year);
		cout << "Age : " << total << endl;
	}
	cout << "Thank you.";
}

int cal_age(int year) {
	int total = 0;
	total += (2563 - year);
	return total;
}
