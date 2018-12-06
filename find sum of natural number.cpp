/* Lab assignment #6
Program name: find sum of natural numbers
Author: Boburjon Akhemdov
Date: 15/11/18 */

#include<iostream>
using namespace std;

int add(int n);

int main()
{
	int n;

	cout << "Enter a positive integer: ";
	cin >> n;

	cout << "Sum =  " << add(n);

	system("pause");
	return 0;
}

int add(int n)
{
	if (n != 0)
		return n + add(n - 1);
	return 0;
}