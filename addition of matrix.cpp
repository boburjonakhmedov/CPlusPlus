/* Lab assignment #8
Program name: Row and column wise addition and addition of diagonal
Author: Boburjon Akhmedov
Date: 04/12/1996 */

#include <iostream>
using namespace std;

int main()
{

	int a[3][3];
	int i, j, s = 0, sum = 0;

	cout << "Write elements for Matrix: " << endl;
	cout << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << "Write elementy " << i + 1 << " " << j + 1 << " : ";
			cin >> a[i][j];
		}
	}

	cout << endl << "Elements: " << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	cout << endl;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			s = s + a[i][j];
		cout << "sum of " << i + 1 << " row is: " << s;
		s = 0;
		cout << endl;
	}
	cout << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			s = s + a[j][i];
		cout << "sum of " << i + 1 << " column is: " << s;
		s = 0;
		cout << endl;
	}

	cout << endl;

	for (i = 0; i < 3; i++)
	{
		sum = sum + a[i][i];
	}
	cout << "Sum of diagonal elements is: " << sum << endl;
	cout << endl;


	system("pause");
	return 0;
}