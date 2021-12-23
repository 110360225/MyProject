#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ENTER 13
#define MAX 80

int main(void)
{
	FILE* fptr;
	char str[MAX], ch;
	int i = 0;
	fptr = fopen("C://Users/user/OneDrive/桌面/ch7/WH7/P15/output.txt", "a"); // 檔案
	printf("請輸入字串，按下ENTER鍵結束輸入:\n");
	while ((ch = getche()) != ENTER && i < MAX)
		str[i++] = ch;
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n檔案附加完成!\n");
	system("pause");
	return 0;

}