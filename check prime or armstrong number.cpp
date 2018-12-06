/* Lab assignment #6
Program name: check prime or armstrong number
Author: Boburjon Akhmedov
Date: 15/11/18 */

#include <iostream>
using namespace std;

int checkPrimeNumber(int);

int main()
{
	int n;

	cout << "Enter a positive  integer: ";
	cin >> n;

	if (checkPrimeNumber(n) == 0)
		cout << n << " is a prime number.\n";
	else
		cout << n << " is a armstrong number.\n";
	
	system("pause");
	return 0;
}
int checkPrimeNumber(int n)
{
	bool flag = false;

	for (int i = 2; i <= n / 2; ++i)
	{
		if (n%i == 0)
		{
			flag = true;
			break;
		}
	}
	return flag;
}