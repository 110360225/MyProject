#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float in, pr, ra, day;
	while (1)
	{
		printf("Enter loan principal(-1 to end):\n");
		scanf_s("%f", &pr);
		if ((int)pr == -1)
		{
			system("pause");
			return 0;
		}
		else
		{
			printf("Enter interest rate:\n");
			scanf_s("%f", &ra);
			printf("Enter term of the loan in days:\n");
			scanf_s("%f", &day);
			in = pr * ra * day / 365;
			printf("The interest charge is:%f\n", in);
		}
	}
}