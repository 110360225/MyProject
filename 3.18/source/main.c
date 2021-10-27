#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b ;
	while (1)
	{
	printf("Enter sales in dollars (-1 to end)\n");
	scanf_s("%f", &a);
	b = 200 + 0.09 * a;
		if ((int)a == -1)
		{
			system("pause");
			return 0;
		}
		else
		{
			printf("Salary is %f", b);
			printf("Enter sales in dollars (-1 to end)\n");
		}
	}
}