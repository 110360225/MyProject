#include <stdio.h>
#include <stdlib.h>

int doubledice(void);

int main() {
	int percent[11] = {0};

	for (int i = 0; i < 36000; i++)
		percent[(doubledice() - 2)] += 1;

	printf("Probability of dice \n");

	for (int i = 0; i < 11; i++)
		printf("%-2d : %3.2f%% \n", i+2, (float)percent[i] / 360);
	printf("\n");

	system("pause");
	return 0;
}

int doubledice(void) {
	int amount = 0;
	amount = (1 + (rand() % 6))+ (1 + (rand() % 6));
	return amount;
}
