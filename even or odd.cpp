/* Lab assignment #13
Program name: Even or odd
Author: Boburjon Akhemdov
Date: 08/10/2018*/

#include<iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter a number" << endl;
	cin >> number;
	if (number % 2 == 0){
		cout << "Entered number is even" << endl;
	}
	else{
		cout << "Entered number is odd" << endl;
	}

	system("pause");
	return 0;
}