/* Lab assignment #7
Program name: 1 Dimension Array
Author: Boburjon Akhmedov
Date: 30/11/2018 */

#include <iostream>
using namespace std;
int main();

int ReadA(int n[5]) 
{
	cout << "Reading array" << endl;
	cout << "First array is: " << n[0] << endl;
	cout << "Second array is: " << n[1] << endl;
	cout << "Third array is: " << n[2] << endl;
	cout << "Fouth array is: " << n[3] << endl;
	cout << "Fifth array is: " << n[4] << endl;

	return 0;
}

int DisplayA(int n[5]) 
{
	cout << "Displaying array" << endl;
	for (int i = 0; i < 5; ++i)
	{
		cout << "Array " << i + 1 << ": " << n[i] << endl;

	}
	return 0;
}

int Search(int n[5]) 
{
	cout << "Searching array" << endl;
	int key;
	cout << "Write array: ";
	cin >> key;
	if (key == n[0] || key == n[1] || key == n[2] || key == n[3] || key == n[4])
		cout << key << " Array found" << endl;
	else
		cout << key << " Array is not found" << endl;

	return 0;
}

int SortA(int n[5]) 
{
	cout << "Sorting array ascending" << endl;
	cout << n[0] << " " << n[1] << " " << n[2] << " " << n[3] << " " << n[4] << " " << endl;

	return 0;
}

int SortD(int n[5]) 
{
	cout << "Reading array descending" << endl;
	cout << n[4] << " " << n[3] << " " << n[2] << " " << n[1] << " " << n[0] << " " << endl;

	return 0;
}

int MeanA(int n[5]) 
{
	cout << "Finding average, median, mode of array" << endl;
	int n1, n2, n3, n4, n5, sum, average, median, mode;
	n1 = n[0];
	n2 = n[1];
	n3 = n[2];
	n4 = n[3];
	n5 = n[4];
	sum = n1 + n2 + n3 + n4 + n5;
	average = sum / 5;
	median = (5 + 1) / 2;
	mode = n5 - n1;
	cout << "Average of arrays is: " << average << endl;
	cout << "Median of arrays is: " << median << endl;
	cout << "Mode of arrays is: " << mode << endl;

	return 0;
}

int Sum(int n[5]) 
{
	cout << "Addition array" << endl;
	int n1, n2, n3, n4, n5, sum;
	n1 = n[0];
	n2 = n[1];
	n3 = n[2];
	n4 = n[3];
	n5 = n[4];
	sum = n1 + n2 + n3 + n4 + n5;
	cout << "Arrays sum is: " << sum << endl;
	return 0;
}

int Shift(int n[5]) 
{
	cout << "Shifting array" << endl;
	int n1, n2, n3, n4, n5;
	n1 = n[0];
	n2 = n[1];
	n3 = n[2];
	n4 = n[3];
	n5 = n[4];
	cout << "Before shifting arrays are: " << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << " " << endl;
	n1 = n[2]; n2 = n[4]; n3 = n[1]; n4 = n[2]; n5 = n[3];
	cout << "After shifting arrays are: " << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << " " << endl;
	return 0;
}

int Reverseprint(int n[5]) 
{
	cout << "Reversing array" << endl;
	int n1 = n[0], n2 = n[1], n3 = n[2], n4 = n[3], n5 = n[4];
	cout << "Default arrays are: " << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << " " << endl;

	for (int i = n5; i >= n1; i -= 10)
		cout << i << " ";

	return 0;
}

int ExitM() 
{
	return main();
}

int Exit() 
{
	return 0;
}


int main() {

	int numbers[5] = { 5,20,10,25,15 };
	char functions;

	cout << "Choose any function: " << endl;
	cout << "1 - Reading arrays" << endl;
	cout << "2 - Displaying arrays" << endl;
	cout << "3 - Searching arrays" << endl;
	cout << "4 - Sorting arrays ascending" << endl;
	cout << "5 - Sorting arrays descending" << endl;
	cout << "6 - Finding average, median, mode of arrays" << endl;
	cout << "7 - Summing arrays" << endl;
	cout << "8 - Shifting arrays" << endl;
	cout << "9 - Reversing arrays" << endl;
	cout << "0 - Exit" << endl;
	cin >> functions;
	
	switch (functions)
	{
	case'1':
		cout << ReadA(numbers) << endl;
		cout << ExitM() << endl;
		break;

	case'2':
		cout << DisplayA(numbers) << endl;
		cout << ExitM() << endl;
		break;

	case'3':
		cout << Search(numbers) << endl;
		cout << ExitM() << endl;
		break;

	case'4':
		cout << SortA(numbers) << endl;
		cout << ExitM() << endl;
		break;

	case'5':
		cout << SortD(numbers) << endl;
		cout << ExitM() << endl;
		break;

	case'6':
		cout << MeanA(numbers) << endl;
		cout << ExitM() << endl;
		break;

	case'7':
		cout << Sum(numbers) << endl;
		cout << ExitM() << endl;
		break;

	case'8':
		cout << Shift(numbers) << endl;
		cout << ExitM() << endl;
		break;

	case'9':
		cout << Reverseprint(numbers) << endl;
		cout << ExitM() << endl;
		break;

	case'0':
		cout << "Exit " << Exit() << endl;
		break;

	default:
		cout << "Choose function from 0 to 9" << endl;
		break;
	}

	system("pause");
	return 0;
}
