#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c, d;
	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b < a; b++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10 - a; b++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < a; b++)
		{
			printf(" ");
		}
		for (b = 0; b < 10 - a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 10 - a; b++)
		{
			printf("%s", " ");
		}
		for (b = 0; b <= a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}