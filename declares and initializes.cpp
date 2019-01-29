/* Lab assignment #9
Program name: Declares and initializes
Author: Boburjon Akhmedov
Date: 11/12/2018 */

#include<iostream>
using namespace std;

int main()
{
	int var = 10;
	int *abc;

	abc = &var;

	cout << sizeof(var);
	cout << "\nValue of var variable: ";
	cout << var << endl;
	cout << "Address in abc variable: ";
	cout << abc << endl;
	cout << "Value of *abc variable: ";
	cout << *abc << endl;

	double bobur = 5;
	double *name;

	name = &bobur;

	cout << sizeof(bobur);
	cout << "\nValue of bobur variable: ";
	cout << bobur << endl;
	cout << "Address in name variable: ";
	cout << name << endl;
	cout << "Value of *name variable: ";
	cout << *name << endl;

	char cpp = 8;
	char *oop;

	oop = &cpp;

	cout << sizeof(cpp);
	cout << "\nValue of cpp variable: ";
	cout << cpp << endl;
	cout << "Address in oop variable: ";
	cout << oop << endl;
	cout << "Value of *oop variable: ";
	cout << *oop << endl;

	system("pause");
	return 0;
}