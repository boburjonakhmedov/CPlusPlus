/* Lab assignment #12
Program name: Leap year or not
Author: Boburjon Akhmedov
Date: 08/0/2018
*/

#include<iostream>
using namespace std;

int main()
{
	int year;
	cout << "Enter a year" << endl;
	cin >> year;
	if (year % 4 == 0){
		cout << "Entered year is leap"<<endl;
	}
	else{
		cout << "Entered year is not leap"<<endl;
	}
	system("pause");
	return 0;

}