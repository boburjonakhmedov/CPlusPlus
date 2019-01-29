/* Lab assignment #9
Program name: Declares and define function
Author: Boburjon Akhmedov
Date: 11/12/2018 */

#include<iostream>
using namespace std;

void swap(int*, int*);
int main()
{
	int a = 5, b = 10;
	cout << "Before swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap(&a, &b);
	cout << "After swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}

void swap(int *n1, int *n2)
{
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}