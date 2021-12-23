#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *in,*out;
	int cnt;
	char str[100];
	in = fopen("C:/Users/user/Desktop/HW7/HW7/P18/welcome.txt", "r");
	out = fopen("C:/Users/user/Desktop/HW7/HW7/P18/output.txt", "w");
	while (!feof(in))
	{
		cnt = fscanf(in, "%s", str);
		if (cnt > 0)
			fprintf(out, "%s\n", str);
	}
	fclose(in);
	fclose(out);
	system("pause");
	return 0;
}