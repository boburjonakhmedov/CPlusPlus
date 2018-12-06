/* Lab assignment #8
Program name: Find addition 2 dimension array element
Author: Boburjon Akhmedov
Date: 05/12/2018 */

#include <iostream>
using namespace std;

int main() 
{
	int a[3][3], b[3][3], result[3][3], i, j;
	cout << "Write elements of first array: " << endl;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			cout << "Write element for matrix A " << i + 1 << " " << j + 1 << " : ";
			cin >> a[i][j];
		}

	cout << endl << "Enter elements of second array: " << endl;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			cout << "Write element for matrix b " << i + 1 << " " << j + 1 << " : ";
			cin >> b[i][j];
		}

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			result[i][j] = a[i][j] + b[i][j];

	cout << endl << "Sum of two arrays is: " << endl;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			cout << result[i][j] << "  ";
			if (j == 3 - 1)
				cout << endl;
		}

	system("pause");
	return 0;
}