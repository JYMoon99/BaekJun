#include <iostream>

using namespace std;

int main()
{
	int dice, dice2, dice3;

	cin >> dice >> dice2 >> dice3;
	
	if (dice == dice2 && dice2 == dice3)
	{
		cout << 10000 + (dice * 1000) << endl;
	}

	else if (dice == dice2 || dice2 == dice3 || dice == dice3)
	{
		if (dice == dice2 || dice == dice3)
			cout << 1000 + (dice * 100) << endl;
		else if (dice2 == dice3)
			cout << 1000 + (dice2 * 100) << endl;
	}

	else if (dice != dice2 && dice2 != dice3)
	{
		cout << max(max(dice, dice2), dice3) * 100 << endl;
	}

	return 0;

}