/* Lab assignment #9
Program name: declare and define function name
Author: Boburjon Akhemdov
Date: 12/12/2018 */

#include<iostream>
using namespace std;

int main()
{
	char name[] = "Bobur";
	char surname[] = "Akhmedov";

	cout << "The first word is: " << name << endl;
	cout << "The second word is: " << surname << endl;

	char *s1, *s2;
	s1 = name;
	s2 = surname;

	int length1, length2;
	length1 = strlen(s1);
	length2 = strlen(s2);

	cout << "Characters number in first word: " << length1 << endl;
	cout << "Characters number in second word: " << length2 << endl;

	system("pause");
	return 0;
}