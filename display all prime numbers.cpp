/* Lab assignment #6
Program name: display all prime numbers
Author: Boburjon Akhemdov
Date: 15/11/18 */

#include<iostream>
using namespace std;

int prime(int num)
{
	if (num == 1)
		return 0;
	else
	{
		for (int i = 2; i <= num / 2; i++)
		{
			if (num%i == 0)
			{
				return 0;
			}
		}
	}
	return 1;
}

int main()
{
	int start, ending;

	cout << "Please, enter the starting and ending number for the interval to search the prime numbers: " << endl;
	cin >> start >> ending;

	for (int i = start; i <= ending; i++)
	{
		if (prime(i))
			cout << "\n" << i << "is " << "prime number\n";
	}

	system("pause");
	return 0;
}