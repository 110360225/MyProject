#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n1, n2;
	printf("Enter two integers and I will tell you\n");
	printf("If first number is a multiple of the second number\n");
	scanf_s("%d%d", &n1, &n2);
	if (n1 % n2 == 0)
	{
		printf("%d is a multiple of %d ", n1, n2);
	}
	if (n1 % n2 != 0)
	{
		printf("%d is not a multiple of %d ", n1, n2);
	}
	system("pause");
	return 0;
}