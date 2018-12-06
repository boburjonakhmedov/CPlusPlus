/* Lab assignment #8
Program name: Maximum array element
Author: Boburjon Akhmedov
Date: 05/12/2018 */

#include <iostream>
using namespace std;

int main()
{
	int i, element;
	float a[5];

	cout << "Write elements of array from 1 to 5: ";
	cin >> element;
	cout << endl;

	for (i = 0; i < element; ++i)
	{
		cout << "Write element " << i + 1 << " : ";
		cin >> a[i];
	}

	for (i = 1; i < element; ++i)
	{
		if (a[0] < a[i])
			a[0] = a[i];
	}
	cout << "Maximum is: " << a[0] << endl;

	system("pause");
	return 0;
}