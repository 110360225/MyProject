#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	float b, c;
	while (1)
	{
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%d", &a);
		if (a == -1)
		{
			system("pause");
			return 0;
		}
		else
		{
			printf("Enter hourly rate of the worker ($00.00):");
			scanf_s("%f", &b);
			if (a <= 40)
			{
				c = a * b;
				printf("Salary is $%f\n", c);
			}
			else
			{
				c = a * b + (a - 40) * 5;
				printf("Salary is $%f\n", c);
			}
		}
	}
}