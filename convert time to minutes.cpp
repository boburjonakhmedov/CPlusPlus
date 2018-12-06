/*Lab assignment #5
Program name: Convert time to minutes
Author: Boburjon Akhemdov
Date: 06/11/2018 */

#include<iostream>
using namespace std;
int main()
{
	float hrs, min, sec = 0;
	cout << "Enter hours : ";
	cin >> hrs;
	min = hrs * 60;
	sec = min * 60;
	cout << "\n" << hrs << " hours = " << min << " minutes = " << sec << " seconds \n";
	
	system("pause");
	return 0;
}