/* Lab assignment #5
Program name: sum of the series
Author: Boburjon Akhmedov
Date: 06/11/2018 */

#include <iostream>
using namespace std;

int main()
{
	int i, n, sum = 0;
	cout << "\n\n Find the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n):\n";
	cout << "------------------------------------------------------------------------------------\n";
	cout << " Input the value for nth term: ";
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		sum += i * i;
		cout << i << "*" << i << " = " << i * i << endl;
	}
	cout << " The sum of the above series is: " << sum << endl;
	
	system("pause");
	return 0;
}
