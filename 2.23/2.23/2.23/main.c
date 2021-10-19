#include<stdio.h>
#include<stdlib.h>	

int main(void)
{
	int n1, n2, n3;
	printf("Enter three integers,and I will tell you\n");
	printf("the lagerest and smallest integers\n");
	scanf_s("%d%d%d", &n1, &n2, &n3);
	if (n1 > n2 && n2 > n3)
	{
		printf("%d is lagerest and %d is smallest\n", n1, n3);
	}

	if (n2 > n1 && n1 > n3)
	{
		printf("%d is lagerest and %d is smallest\n", n2, n3);
	}

	if (n3 > n2 && n2 > n1)
	{
		printf("%d is lagerest and %d is smallest\n", n3, n1);
	}

	if (n3 > n1 && n1 > n2)
	{
		printf("%d is lagerest and %d is smallest\n", n3, n2);
	}

	if (n1 > n3 && n3 > n2)
	{
		printf("%d is lagerest and %d is smallest\n", n1, n2);
	}

	if (n2 > n3 && n3 > n1)
	{
		printf("%d is lagerest and %d is smallest\n", n2, n1);
	}

	if (n1 == n2 && n2 > n3)
	{
		printf("%d=%d are lagerest and %d is smallest\n", n1, n2, n3);
	}

	if (n1 == n3 && n3 > n2)
	{
		printf("%d=%d are lagerest and %d is smallest\n", n1, n3, n2);
	}

	if (n2 == n3 && n3 > n1)
	{
		printf("%d=%d are lagerest and %d is smallest\n", n3, n2, n1);
	}

	if (n1 == n2 && n2 == n3)
	{
		printf("all ingerests are same\n");
	}

	system("pause");
	return 0;
}