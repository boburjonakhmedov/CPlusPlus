/* Lab assignment #5
Program name: Area of circle
Author: Boburjon Akhmedov
Date: 06/11/2018 */

#include <iostream>
#define PI 3.14159
using namespace std;

float AreaOfCircle(float radius);
float AreaWithDiameter(float diameter);

int main()
{
	float radius, diameter, circleArea;
	char choice = '0';
	cout << "\n\t\t\tFind Area Of Circle:" << endl;


	for (; choice != '1'&&choice != '2';)
	{
		cout << "\nEnter 1 to Enter Radius OR 2 to Enter Diameter : ";
			cin >> choice;
		if (choice != '1'&&choice != '2')
			cout << "\n\t\tEnter a VALID Option ";

	}

	if (choice == '1')
	{
		cout << "\n\t\tEnter Radius To Find Area: ";
		cin >> radius;
		circleArea = AreaOfCircle(radius);
	}
	else if (choice == '2')
	{
		cout << "\n\t\tEnter Diameter To Find Area: ";
		cin >> diameter;
		circleArea = AreaWithDiameter(diameter);

	}
	cout << "\n\n\t\tArea of Circle is:->> " << circleArea << endl;
	system("pause");
	return 0;
}

float AreaOfCircle(float radius)
{
	return (PI*(radius*radius));
}

float AreaWithDiameter(float diameter)
{
		return (AreaOfCircle(diameter / 2));
}