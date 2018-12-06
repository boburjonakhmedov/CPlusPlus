/* Lab assignment #4 task-4
Program name: Print stars sequence 2
Author: Boburjon Akhemdov
Date: 21/10/2018 */

#include <stdio.h>
using namespace std;

int main()
{
	int i, j, rows;

	printf("Enter number of rows: ");
	scanf_s("%d", &rows);

	for (i = rows; i >= 1; --i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("* ");
		}
		printf("\n");

		for (i = 2; i <= rows; ++i)
		{
			for (j = 2; j <= i; ++j)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	system ("pause");
	return 0;
}