/*Lab assignment #4 task-2
Program name: a menu driven program
Author: Boburjon Akhemdov
Date: 21/10/2018 */

#include <iostream>
using namespace std;

int main()
{
	int first, second, add, subtract, multiply;

	cout << "Enter two integers\n";
	cin >> first >> second;

	add = first + second;
	subtract = first - second;
	multiply = first * second;

	cout << "Sum = " << add;
	cout << "\nDifference = " << subtract;
	cout << "\nMultiplication = " << multiply;

	system("pause");
	return 0;
}