#include <iostream>
using namespace std;

int main() {
	int hour, min;

	cin >> hour >> min;

	if (min - 45 < 0)
	{
		min = (min - 45) + 60;

		if (hour == 0)
			hour = 23;

		else
			hour = hour - 1;
	}

	else
		min = min - 45;

	cout << hour << " " << min << endl;

	return 0;
}