#include <iostream>

using namespace std;

int main()
{
	int hour, minute, time;

	cin >> hour >> minute;
	cin >> time;

	hour += (minute + time) / 60;
	minute = (minute + time) % 60;

	if (hour >= 24)
	{
		hour %= 24;
	}

	cout << hour << " " << minute << endl;

	return 0;
}