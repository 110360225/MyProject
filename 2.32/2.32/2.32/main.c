#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float n1, n2, n3;
	printf("Enter your weight(kg) and your height(meter) and I will tell you your BMI\n");
	scanf_s("%f%f", &n1, &n2);
	n3 = n1 / (n2 * n2);
	printf("your BMI is %f\n", n3);
	if (n3 <= 18.5)
	{
		printf("you are Underweight\n");
	}
	if (n3 >= 18.5 && n3<=24.9)
	{
		printf("you are Normal\n");
	}
	if (n3 <= 29.9 && n3>=25)
	{
		printf("you are Overweight\n");
	}
	if (n3 >= 30)
	{
		printf("you are Obese\n");
	}
	system("pause");
	return 0;
}