/*Lab assignment: Practise lab
Program name: calculating GPA
Author: Boburjon Akhmedov
Date: 23/10/2018 */

#include <iostream>
using namespace std;

int main()
{
	double grade, sum_grade, gpa;
	int credit, sum_credit;

	cout << "Welcome to program calculating GPA: \n" << endl;
	cout << "Input your grades\n" << endl;

	for (int i = 1; i <= 5; i++)
		cin >> grade;
	sum_grade = grade;

	cout << "Input your credits\n" << endl;

	for (float i = 0; i <= 4.5; i++)
		cin >> credit;
	sum_credit = credit;

	if (grade == 4.5)
		cout << "Excellent, you did a great job, many congratulations \n";
	if (grade >= 4.0)
		cout << "Well done, Congratulations \n";
	if (grade >= 3.5)
		cout << "Good, job \n";
	if (grade >= 3.0)
		cout << "Passed, you need to improve \n";
	if (grade >= 2.5)
		cout << "Warning, Your score is too low \n";
	if (grade == 2.5)
		cout << "Failed…..You must repeat this course \n";


	system("pause");
	return 0;
}