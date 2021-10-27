#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c;
	for (c = 1; c <= 500; c++)
	{
		for (a = 1; a <= 500; a++)
		{
			for (b = 1; b <= 500; b++)
			{
				if (a * a + b * b == c * c)
				{
					printf("side1:%dside2:%d\n", a, b);
				}
			}
		}
	}
	system("pause");
	return 0;
}