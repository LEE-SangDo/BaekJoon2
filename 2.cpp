#include <iostream>
using namespace std;

int main() {
	int n;

	cin >> n;

	if (n / 10 >= 9 && n / 10 <= 10)
		cout << "A" << endl;

	else if (n / 10 >= 8 && n / 10 < 9)
		cout << "B" << endl;

	else if (n / 10 >= 7 && n / 10 < 8)
		cout << "C" << endl;

	else if (n / 10 >= 6 && n / 10 < 7)
		cout << "D" << endl;

	else
		cout << "F" << endl;

	return 0;
}