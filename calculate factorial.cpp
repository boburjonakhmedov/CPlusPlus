/* Lab assignment #6
Program name: calculate Factorial
Author: Boburjon Akhemdov
Date: 15/11/18 */

#include <iostream>
using namespace std;

int factorial(int);

int main()
{
	int n;
	cout << "Enter a number to find factorial: ";
	cin >> n;
	cout << "Factorial of " << n << " = " << factorial(n);
	
	system("pause");
	return 0;
}

int factorial(int n)
{
	if (n > 1)
	{
		return n * factorial(n - 1);
	}
	else
	{
		return 1;
	}
}