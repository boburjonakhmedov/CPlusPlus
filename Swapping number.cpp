/* Lab assignment #10
Program name: Swapping number
Author: Boburjon Akhmedov
Date: 08/10/2018
*/

#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter a and b" << endl;
	cin >> a;
	cin >> b;
	if (a == b){
		cout << "Numbers are equal" << endl;
	}
	else{
		a = a + b;
		b = a - b;
		a = a - b;
		cout << "The swap is A=" << a << " B=" << b << endl;
	}
	system("pause");
	return 0;
}