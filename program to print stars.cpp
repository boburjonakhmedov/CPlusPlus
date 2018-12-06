/* Lab assignment #4 task-3
Program name: Print stars
Author: Boburjon Akhemdov
Date:21/10/2018*/

#include <iostream>
using namespace std;

int main()  // with alphabet I can't print this rows
{
	int rows;

	cout << "Enter number of rows: ";
	cin >> rows;

	for (int i = 1; i <= rows; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << j << " ";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}