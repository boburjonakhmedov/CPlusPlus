/* Lab assignment #10
Program name: Structure and string
Author: Boburjon Akhmedov
Date: 20/12/18 */

#include <iostream>
using namespace std;

int main();

struct student1 
{
	char name[15] = "Boburjon";
	int id = 1810186;
	float oop = 5.0, english = 4.5, math = 4.5;
	float tscore = oop + english + math;
	float ascore = (oop + english + math) / 3;
};
struct student2 
{
	char name[15] = "Asadbek";
	int id = 1810166;
	double oop = 4.6, english = 4.0, math = 4.0;
	double tscore = oop + english + math;
	double ascore = (oop + english + math) / 3;
};
struct student3 
{
	char name[15] = "Khumoyun";
	int id = 1810121;
	double oop = 4.0, english = 4.5, math = 4.0;
	double tscore = oop + english + math;
	double ascore = (oop + english + math) / 3;
};
struct student4 
{
	char name[15] = "Jaloliddin";
	int id = 1810190;
	double oop = 4.4, english = 3.5, math = 3.5;
	double tscore = oop + english + math;
	double ascore = (oop + english + math) / 3;
};
struct student5 
{
	char name[15] = "Azimiddinhuja";
	int id = 1810045;
	double oop = 5.0, english = 5.0, math = 4.5;
	double tscore = oop + english + math;
	double ascore = (oop + english + math) / 3;
};

struct student1 s1;
struct student2 s2;
struct student3 s3;
struct student4 s4;
struct student5 s5;

int read() 
{
	cout << "Name of first student is: " << s1.name << endl;
	cout << "ID number of first student is: " << s1.id << endl;
	cout << "OOP score of first student is: " << s1.oop << endl;
	cout << "English score of first student is: " << s1.english << endl;
	cout << "Maths score of first student is: " << s1.math << endl;
	cout << endl;

	cout << "Name of second student is: " << s2.name << endl;
	cout << "ID number of second student is: " << s2.id << endl;
	cout << "OOP score of second student is: " << s2.oop << endl;
	cout << "English score of second student is: " << s2.english << endl;
	cout << "Maths score of second student is: " << s2.math << endl;
	cout << endl;

	cout << "Name of third student is: " << s3.name << endl;
	cout << "ID number of third student is: " << s3.id << endl;
	cout << "OOP score of third student is: " << s3.oop << endl;
	cout << "English score of third student is: " << s3.english << endl;
	cout << "Maths score of third student is: " << s3.math << endl;
	cout << endl;

	cout << "Name of forth student is: " << s4.name << endl;
	cout << "ID number of forth student is: " << s4.id << endl;
	cout << "OOP score of forth student is: " << s4.oop << endl;
	cout << "English score of forth student is: " << s4.english << endl;
	cout << "Maths score of forth student is: " << s4.math << endl;
	cout << endl;

	cout << "Name of fifth student is: " << s5.name << endl;
	cout << "ID number of fifth student is: " << s5.id << endl;
	cout << "OOP score of fifth student is: " << s5.oop << endl;
	cout << "English score of fifth student is: " << s5.english << endl;
	cout << "Maths score of fifth student is: " << s5.math << endl;
	cout << endl;

	return main();
}

int display() 
{
	cout << "Name of first student is: " << s1.name << endl;
	cout << "ID number of first student is: " << s1.id << endl;
	cout << "OOP score of first student is: " << s1.oop << endl;
	cout << "English score of first student is: " << s1.english << endl;
	cout << "Maths score of first student is: " << s1.math << endl;
	cout << "Total score of first student is: " << s1.tscore << endl;
	cout << "Average score of first student is: " << s1.ascore << endl;
	cout << endl;

	cout << "Name of second student is: " << s2.name << endl;
	cout << "ID number of second student is: " << s2.id << endl;
	cout << "OOP score of second student is: " << s2.oop << endl;
	cout << "English score of second student is: " << s2.english << endl;
	cout << "Maths score of second student is: " << s2.math << endl;
	cout << "Total score of second student is: " << s2.tscore << endl;
	cout << "Average score of second student is: " << s2.ascore << endl;
	cout << endl;

	cout << "Name of third student is: " << s3.name << endl;
	cout << "ID number of third student is: " << s3.id << endl;
	cout << "OOP score of third student is: " << s3.oop << endl;
	cout << "English score of third student is: " << s3.english << endl;
	cout << "Maths score of third student is: " << s3.math << endl;
	cout << "Total score of third student is: " << s3.tscore << endl;
	cout << "Average score of third student is: " << s3.ascore << endl;
	cout << endl;

	cout << "Name of forth student is: " << s4.name << endl;
	cout << "ID number of forth student is: " << s4.id << endl;
	cout << "OOP score of forth student is: " << s4.oop << endl;
	cout << "English score of forth student is: " << s4.english << endl;
	cout << "Maths score of forth student is: " << s4.math << endl;
	cout << "Total score of forth student is: " << s4.tscore << endl;
	cout << "Average score of forth student is: " << s4.ascore << endl;
	cout << endl;

	cout << "Name of fifth student is: " << s5.name << endl;
	cout << "ID number of fifth student is: " << s5.id << endl;
	cout << "OOP score of fifth student is: " << s5.oop << endl;
	cout << "English score of fifth student is: " << s5.english << endl;
	cout << "Maths score of fifth student is: " << s5.math << endl;
	cout << "Total score of fifth student is: " << s5.tscore << endl;
	cout << "Average score of fifth student is: " << s5.ascore << endl;
	cout << endl;

	return main();
}

int search() 
{
	int student;
	cout << "1. Boburjon" << endl;
	cout << "2. Asadbek" << endl;
	cout << "3. Khumoyun" << endl;
	cout << "4. Jaloliddin" << endl;
	cout << "5. Azimiddinhuja" << endl;
	cout << endl;

	cout << "Choose student name for searching: ";
	cin >> student;
	cout << endl;
	switch (student)
	{
	case 1:
		cout << "Name: Boburjon" << endl << "ID number: 1810186" << endl << "OOP score: 5.0" << endl << "English score: 4.5" << endl << "Math score: 4.5" << endl;
		break;
	case 2:
		cout << "Name: Asadbek" << endl << "ID number: 1810166" << endl << "OOP score: 4.6" << endl << "English score: 4.0" << endl << "Math score: 4.0" << endl;
		break;
	case 3:
		cout << "Name: Khumoyun" << endl << "ID number: 1810121" << endl << "OOP score: 4.0" << endl << "English score: 4.5" << endl << "Math score: 4.0" << endl;
		break;
	case 4:
		cout << "Name: Jaloliddin" << endl << "ID number: 1810190" << endl << "OOP score: 4.4" << endl << "English score: 3.5" << endl << "Math score: 3.5" << endl;
		break;
	case 5:
		cout << "Name: Azimiddinhuja" << endl << "ID number: 1810045" << endl << "OOP score: 5.0" << endl << "English score: 5.0" << endl << "Math score: 4.5" << endl;
		break;

	default:
		cout << "Student is not found!" << endl;
		break;

	}
	return main();
}

int modify() {
	int student;
	
	cout << "1. Boburjon" << endl;
	cout << "2. Asadbek" << endl;
	cout << "3. Khumoyun" << endl;
	cout << "4. Jaloliddin" << endl;
	cout << "5. Azimiddinhuja" << endl;
	cout << endl;

	cout << "Choose student name for searching: ";
	cin >> student;
	cout << endl;
	switch (student)
	{
	case 1:
		cout << "Name: Boburjon" << endl << "ID number: 1810186" << endl << "OOP score: 5.0" << endl << "English score: 4.5" << endl << "Math score: 4.5" << endl << "Total score: 14.0" << endl << "Average score: 4.6" << endl;
		break;
	case 2:
		cout << "Name: Asadbek" << endl << "ID number: 1810166" << endl << "OOP score: 4.6" << endl << "English score: 4.0" << endl << "Math score: 4.0" << endl << "Total score: 12.6" << endl << "Average score: 4.2" << endl;
		break;
	case 3:
		cout << "Name: Khumoyun" << endl << "ID number: 1810121" << endl << "OOP score: 4.0" << endl << "English score: 4.5" << endl << "Math score: 4.0" << endl << "Total score: 12.5" << endl << "Average score: 4.2" << endl;
		break;
	case 4:
		cout << "Name: Jaloliddin" << endl << "ID number: 1810190" << endl << "OOP score: 4.4" << endl << "English score: 3.5" << endl << "Math score: 3.5" << endl << "Total score: 11.5" << endl << "Average score: 3.8" << endl;
		break;
	case 5:
		cout << "Name: Azimiddinhuja" << endl << "ID number: 1810045" << endl << "OOP score: 5.0" << endl << "English score: 5.0" << endl << "Math score: 4.5" << endl << "Total score: 14.5" << endl << "Average score: 4.8" << endl;
		break;

	default:
		cout << "Student is not found!" << endl;
		break;

	}
	return main();
}

int max() {
	cout << "Maximum score in OOP depends on: " << endl << s1.name << endl << s1.id << endl << s1.oop << s1.english << endl << s1.math << endl;
	cout << "Maximum score in English depends on" << endl << s5.name << endl << s5.id << endl << s5.oop << s5.english << endl << s5.math << endl;
	cout << "Maximum score in Maths depends on" << endl << s3.name << endl << s3.id << endl << s3.oop << s3.english << endl << s3.math << endl;

	return main();
}

int maxa() {
	cout << "Maximum average score in OOP depends on: " << endl << s1.name << endl << s1.id << endl << s1.oop << s1.english << endl << s1.math << endl;

	return main();
}
int exit() {
	return 0;
}

int main() {
	int choice;

	cout << endl;
	cout << "1. Read data of students" << endl;
	cout << "2. Display data of student with total scores and average of scores" << endl;
	cout << "3. Search student data based on student name" << endl;
	cout << "4. Modify student data based on student name" << endl;
	cout << "5. Display details of student who score is maximum in each course" << endl;
	cout << "6. Display details of student who average is maximum" << endl;
	cout << "7. Exit" << endl;
	cout << endl;

	cout << "Choose function: ";
	cin >> choice;
	cout << endl;

	switch (choice)
	{
	case 1:
		read();
		break;
	case 2:
		display();
		break;
	case 3:
		search();
		break;
	case 4:
		modify();
		break;
	case 5:
		max();
		break;
	case 6:
		maxa();
		break;
	case 7:
		exit();
		break;
	default:
		cout << "Function is not found!" << endl;
		break;
	}

	system("pause");
	return 0;
}