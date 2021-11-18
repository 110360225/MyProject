#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int n) {
    while(n != 0) { 
        int r = m % n; 
        m = n; 
        n = r; 
    } 
    return m;
}

int lcm(int m, int n) {
    return m * n / gcd(m, n);
}

int main(void){
    // 兩數相乘/最大公因數
    int input1,input2,max;
    
    printf("Please input two number: ");
    scanf_s("%d %d",&input1,&input2);

    printf("Lcm：%d\n", lcm(input1, input2)); 
    
    system("pause");
    return 0;
}