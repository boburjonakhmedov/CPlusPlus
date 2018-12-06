/* Lab assignment #4 Task-4
Program name: Print stars
Author: Boburjon Akhmedov
Date: 16/10/2018*/

#include <iostream>
using namespace std;
int main()
{
	int i, j, k;
	for (i = 1; i <= 5; i++)
	{
		for (j = 3; j >= i; j--)
		{
			cout << "";
		}
		for (k = 1; k <= (1 * i - 1); k++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}