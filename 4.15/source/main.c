#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float x,y,z;
	printf("Enter your capital:");
	scanf_s("%f", &x);
	for (z = 5; z <=10 ; z++)
	{
		y = x * (1 + z/100);
		printf("Your Annual compound interest(%f) is:%f\n ",z/100,y);
	}
	system("pause");
	return 0;
}