#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float n1, n2, n3, n4, n5, n6;
	printf("Enter five recorders of how much you pay per day\n");
	printf("(1) total miles driven per day\n(2)cost per gallon of gasoline\n(3)average miles per gallon\n(4)parking fees per day\n(5)tolls per day\n");
	scanf_s("%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5);
	n6 = (n1 * n2) / n3 + n4 + n5;
	printf("your pay per day is %f\n", n6);
	system("pause");
	return 0;
}