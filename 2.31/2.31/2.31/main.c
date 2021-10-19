#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b = 0, c = 0, d = 0;
	printf("number\tsquare\tcube\t\n");
	for (a = 0; a <= 10; a++)
	{
		printf("%d\t%d\t%d\n", b, c * c, d * d * d);
		b = b + 1;
		c = c + 1;
		d = d + 1;
	}
	system("pause");
	return 0;
}
