#include <stdio.h>
#include <stdlib.h>

void cubeReference(int &);

int main() {
	int number = 5;
	printf("The original value of number is %d ", number);

	cubeReference(number);
	printf("\nThe new value of number is %d \n", number);

	system("pause");
	return 0;
}
void cubeReference(int &n) {
	n = n * n * n;
}

