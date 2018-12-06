/* Lab assignment #8
Program name: Maximum and Minimum array element
Author: Boburjon Akhmedov
Date: 05/12/2018 */

#include<iostream>
using namespace std;

int main()
{
	int arr[10], n, i, max, min;
	cout << "Enter the size of the array : ";
	cin >> n;
	cout << "Enter the elements of the array : ";

	for (i = 0; i < n; i++)
		cin >> arr[i];
	max = arr[0];

	for (i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	min = arr[0];

	for (i = 0; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}

	cout << "\nLargest element : " << max;
	cout << "\nSmallest element : " << min << "\n";

	system("pause");
	return 0;
}