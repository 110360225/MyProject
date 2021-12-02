#include <stdio.h>
#include <stdlib.h>

int max_array(const int val[], int size);
int max(int n1, int n2);

int main() {
	int a[] = {33,27,54,123,68};

	printf("%d", max_array(a,5));

	system("pause");
	return 0;
}

int max_array(const int val[],int size) {
	if (size == 1)
		return val[size];
	return (max(val[size-1],max_array(val,size-1)));
}

int max(int n1, int n2) {
	if (n1 > n2) return n1;
	else return n2;

}