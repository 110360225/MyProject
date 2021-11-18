#include <stdio.h>
#include <stdlib.h>

char changeCase(char Alphabet){
    if (Alphabet >= 97)
        Alphabet -= 32;
    else
        Alphabet += 32;
    return Alphabet;
}

int main(void){
    char input;
    printf("Please input an Alphabet: ");
    scanf_s("%c",&input);

    printf("%c\n",changeCase(input));

    system("pause");
    return 0;
}