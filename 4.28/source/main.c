#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c, d;
	printf("Enter your Salary code(1,2,3,4):");
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:
			puts("you are manager and your Salary is:400$\n");
			break;
	case 2:
		puts("you are Hourly wage(10$ per hour) and enter your working time:");
		scanf_s("%d", &b);
		if (b <= 40)
		{
			printf("your Salary is %d$", 10 * b);
		}
		if (b > 40)
		{
			printf("your Salary is %d$", 10 * b + 5 * (b - 40));
		}
		break;
	case 3:
		puts("you are Rake worker and enter your week sell $:");
		scanf_s("%d", &c);
		printf("your Salary is :%f$", (250 + 0.057 * c));
		break;
	case 4:
		puts("you are Odd job and enter how many product you make(3$ per product):");
		scanf_s("%d", &d);
		printf("your Salary is %d $", (3 * d));
		break;
	}
	system("pause");
	return 0;
}