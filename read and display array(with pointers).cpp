/* Lab assignment #9
Program name: read and display array (with pointers)
Author: Boburjon Akhmedov
Date: 12/12/2018 */

#include<iostream>
using namespace std;

int main()
{
	int arr[5];
	int *ptr;

	ptr = &arr[5];

	cout << "Displaying size of array: " << sizeof(arr) << endl;

	system("pause");
	return 0;
}

