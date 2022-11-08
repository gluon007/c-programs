#include <stdio.h>

int main(){
    char character;
    printf("enter a character to know its ASCII value : ");
    scanf("%C" , &character);
    printf("ASCII value of %c = %d" , character , character);

    getch();
}


