#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, m1=4, m2=6,m3=9,m4=1;
	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b > m1 && b < m2)
			{
				printf("%s", "*");
			}
			else
			{
				printf("%s", " ");
			}
		}
		printf("\n");
		m1 = m1 - 1;
		m2 = m2 + 1;
	}
	for (a = 0; a < 4; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b > m4 && b < m3)
			{
				printf("%s", "*");
			}
			else
			{
				printf("%s", " ");
			}
		}
		printf("\n");
		m3 = m3 - 1;
		m4 = m4 + 1;
	}
	system("pause");
	return 0;
}