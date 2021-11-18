#include <stdio.h>
#include <stdlib.h>

float recursivePower(float base,int exponent){
    if(exponent == 1)
        return base;
    else
        return base*recursivePower(base,exponent-1); 
}

int main(void){
    float base;
    int exponent;
    printf("Please enter base: ");
    scanf_s("%f",&base);
    printf("Please enter exponent: ");
    scanf_s("%d",&exponent);
    printf("The answer is %.3f\n",recursivePower(base,exponent));

    system("pause");
    return 0;
}