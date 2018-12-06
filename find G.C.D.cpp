/* Lab assignment #6
Program name: Find G.C.D
Author: Boburjon Akhmedov
Date: 16/11/18 */

#include <iostream>
using namespace std;

int hcf(int num1, int num2);

int main()
{
	int num1, num2;

	cout << "Enter two positive integers: ";
	cin >> num1 >> num2;

	cout << "Highest Common Factor of " << num1 << " & " << num2 << " is: " << hcf(num1, num2);

	system("pause");
	return 0;
}

int hcf(int num1, int num2)
{
	if (num2 != 0)
		return hcf(num2, num1 % num2);
	else
		return num1;
}