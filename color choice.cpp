/* Lab assignment #
Program name: color choise
Author: Boburjon Akhmedov
Date: 08/10/2018
*/

#include<iostream>
using namespace std;

int main()
{
	int choice;
	cout << "\n Please enter your choice 1:red, 2:green, 3:yellow, 4:blue, 5:black, 6:white, 7:wrong : relax any color";
	cin >> choice;
	switch (choice)
	{
	default:cout << "sunday : relax any color"; break;
	case 1:cout << "red"; break;
	case 2:cout << "green"; break;
	case 3:cout << "yellow"; break;
	case 4:cout << "blue"; break;
	case 5:cout << "black"; break;
	case 6:cout << "white"; break;
	}
	cout << "bye";
	system("pause");
	return 0;

}