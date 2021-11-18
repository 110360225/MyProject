#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h> //for scanf unsigned long long
#include <limits.h>


unsigned long long fibonacci(unsigned long long MAX,int visualMode) {
    unsigned long long x = 0,y = 1;
    if( visualMode == 1)
        printf("0, 1, ");
    
    for (unsigned long long i = 1; i <= MAX-2; i++) {
        unsigned long long f = x+y,beforeError;
        if (i == 92) {
            beforeError = f;
        }

        if (x+y < y) {
            printf("\nOverflow in %d\nMaximum value: %llu",i+2,beforeError);
            return beforeError;
        }
        x=y;y=f;
        if (visualMode == 1)
            printf("%llu, ",f);
    }
}

int main(void) {
    unsigned long long int input;

    printf("(a)\nTheoretically, the max value of\nunsigned long long is: %llu, so\n",ULLONG_MAX);
    printf("Please input how much you want to generate: ");
    
    // Microsoft's format specifier for 64-bit ints.
    // https://stackoverflow.com/questions/5997258/strange-unsigned-long-long-int-behaviour
    scanf_s("%"PRIu64,&input);
    fibonacci(input,1);

    printf("\n(b)\nThe Maximum value is: %llu",fibonacci(100,0));
    
    return 0;
}