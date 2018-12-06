/* Lab assignment #11
Program name: finding greatest number
Author: Boburjon Akhemdov
Date: 08/10/2018
*/

#include<iostream>
using namespace std;

int main()
{
	int n1, n2, n3, gr;
	cout << "Enter 3 numbers"<<endl;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	if (n1 >= n2){
		gr = n1;
	}
	else { int gr = n2; }

	if (gr>=n3){
		cout << "Greatest number is " << gr << endl;
	}
	else{
		cout << "Greatest number is " << n3 << endl;
	}
	system("pause");
	return 0;
}