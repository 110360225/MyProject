#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j;
	int bobobo[100];
	printf("�п�Jj�ӼƦr���Ƨ�:\n");
		scanf_s("%d", &j);
		printf("�п�J%d�ӼƦr����:", j);
	for (i = 0; i < j; i++)
	{
		scanf_s("%d", &bobobo[i]);
	}
	int a, b, change, count=j,c;
	for (a = 0; a < j; a++)
	{
		for (b = 0; b < count-1; b++)
		{
			if (bobobo[b] > bobobo[b + 1])
			{
				change = bobobo[b+1];
				bobobo[b + 1] = bobobo[b];
				bobobo[b] = change;
				for (c = 0; c < j; c++)
				{
					printf("%d   ", bobobo[c]);
				}
				printf("\n");
			} 
		}
		count = count - 1;
	}
	return 0;
}