#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int bin_search(const int *val,int number,int size);

int main() {
	int integer[SIZE] = {13,27,34,41,52,68,73,80,93,102};
	int a = 0;
	printf("Enter the number : ");
	scanf_s("%d",&a);
	printf("Search result (-1 represent not have this number) : %d \n", bin_search(integer,a,SIZE));

}

int bin_search(const int val[],int number,int size) {

	if (val[(size/2)+1] < number && val[(size / 2) - 1] > number)
		return -1;
	else if (val[size/2] == number)
		return size/2;
	else if (size == 1)
		return -1;
	else if (val[size / 2] < number) {
		if (val[size] == 0)
			return -1;
		bin_search(val, number, size+size/2);
	}
	else if (val[size / 2] > number)
		bin_search(val, number,size-size/2);
	
}
