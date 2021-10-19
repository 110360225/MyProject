#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n1;
	printf("Enter a integer and I will tell you\n");
	printf("Whether a integer is even or odd\n");
	scanf_s("%d", &n1);
	if (n1 % 2 == 0)
	{
		printf("%d is even\n",n1);
	}
	if (n1 % 2 == 1)
	{
		printf("%d is odd",n1);
	}
	system("pause");
	return 0;
}