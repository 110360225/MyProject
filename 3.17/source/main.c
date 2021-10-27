#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float number, balance, charges, credit, limit;
	printf("Enter account number(-1 to end): ");
	scanf_s("%f", &number);
	while ((int)number != EOF)
	{
		printf("Enter beginning balance: ");
		scanf_s("%f", &balance);
		printf("Enter total charges: ");
		scanf_s("%f", &charges);
		printf("Enter total credits: ");
		scanf_s("%f", &credit);
		printf("Enter credit limit: ");
		scanf_s("%f", &limit);
		if ((balance + charges - credit) > limit)
		{
			printf("Account:  %.0f\n", number);
			printf("Credit limit:%.2f\n", limit);
			printf("Balance:  %.2f\n", (balance + charges - credit));
			printf("Credit Limit Exceeded.");
		}
		puts("\n");
		printf("Enter account number(-1 to end): ");
		scanf_s("%f", &number);
	}
	return 0;
}