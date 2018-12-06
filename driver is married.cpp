/* Lab assignment #4, Task-1
Program name: Driver is married
Author: Boburjon Akhmedov
Date: 16/10/2018*/

#include<iostream>
using namespace std;

int main()
{
	int age;
	char sex, ms;
		cout << "Enter the age of driver's: ";
		cin >> age;
		cout << "Enter the sex of driver's: ";
		cin >> sex;
		cout << "Enter the marital status: ";
		cin >> ms;

		if (sex=='M' && ms == 'M' && age > 30)
			{
				cout << "Driver is insured";
			}
		else
			{
				cout << "Driver is not insured \n";
			}
		if (sex == 'F' && ms == 'M' && age > 25)
			{
				cout << "Driver is insured";
			}
		

	system("pause");
	return 0;
}