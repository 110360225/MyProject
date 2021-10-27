#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, i, j;
	printf("Please enter length and width \n");
	scanf_s("%d%d", &a, &b);
	for (i = 0; i < b; i++)
	{
		for (j = 0; j < a; j++)
		{
			if (i == 0 || i == b - 1 || j == 0 || j == a - 1)
				printf("+ ");
			else
				printf("  ");
		}
		printf("\n");
	}
	return 0;
}