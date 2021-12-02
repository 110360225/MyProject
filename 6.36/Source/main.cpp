#include <stdio.h>
#include <stdlib.h>

void backword(char str[],int ,int);

int main() {
	
	char a[] = "string";
	printf("Enter a string to backword : ");
	scanf("%s",a);
	backword(a,0,0);
	printf("\n");
	system("pause");
	return 0;
}

void backword(char str[],int j,int state) {
	if (state == 0) {
		if (str[j] != '\0')
			backword(str, j+1, 0);
		else if (str[j] == '\0') 
			backword(str, j, 1);
	}
	else if (state == 1 && j >= 0) {
		printf("%c", str[j]);
		backword(str, j - 1, 1);
	}
}

