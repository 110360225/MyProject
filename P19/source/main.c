#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char stringl[20];
	char string2[] ="string literal";
	int i;

	printf("Enter a string: ");
	scanf("%s",stringl);
	printf("stringl is: %s\nstring2 is: %s\n"
		"stringl with spaces between characters is: \n",
		stringl, string2);
	for (i = 0; stringl[i] != '\0'; i ++ )
		printf("%c ", stringl[i]);
	printf("\n");
	system("pause");
	return 0;
}