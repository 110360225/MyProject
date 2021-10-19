#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int word1 = 4, word2 = 4, a = 0, b = 0;
	for (b = 0; b <= 4; b++)
	{
		for (a = 0; a <= 8; a++)
		{
			if (word1 <= a && a <= word2)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		word1 = word1 - 1;
		word2 = word2 + 1;
	}
	system("pause");
	return 0;
}