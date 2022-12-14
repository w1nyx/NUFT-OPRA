#include <iostream>
#include<math.h>

using namespace std;

int main()
{
	float x, y, rangeStart, rangeEnd, rangeStep;

	cout << "Enter start of range: ";
	cin >> rangeStart;
	cout << "Enter end of range: ";
	cin >> rangeEnd;
	cout << "Enter step in range: ";
	cin >> rangeStep;

	cout << endl << "X\tY" << endl;
	x = rangeStart - rangeStep;

	while (x < rangeEnd)
	{
		x += rangeStep;
		y = cos(pow(x, 3) + pow(x, 2) - x + 1) * pow(exp(1), 2 * x);

		cout << x << "\t" << y << endl;
	}

	return 0;
}