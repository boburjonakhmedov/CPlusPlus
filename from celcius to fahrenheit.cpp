/* Lab assignment #9
Program name: Convertor from celcius to fahrenheit
Author: Boburjon Akhmedov
Date: 08/10/2018
*/

#include<iostream>
using namespace std;

int main()
{
	float degree;
	cout << "Enter a degree in celsius" << endl;
	cin >> degree;
	float f = degree * 9 / 5 + 32;
	cout << "Your temirature in fahrenheit is " << f<< endl;

	system("pause");
	return 0;
}