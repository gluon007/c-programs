#include <stdio.h>
#include <math.h>

int decimal(long long);
int binary(long long);

int main()
{
    long long number = 0;
    int n = 0;
    printf("what do you want to do?\n");
    printf("1. convert BINARY to DECIMAL\n2. convert DECIMAL to BINARY\n");
    printf("choose by entering respective number__");
    scanf("%d" , &n);

    if (n == 1)
    {
        printf("you selected %d. BINARY to DECIMAL\n" , n);
        printf("enter a BINARY NUMBER :- ");
        scanf("%lld" , &number);
        printf("%lld in decimal = %d" , number , decimal(number));
        return 0;
    }
    else if (n == 2)
    {
        printf("you selected %d. DECIMAL to BINARY\n" , n);
        printf("enter a INTEGER :- ");
        scanf("%lld" , &number);
        printf("%lld in binary = " , number);
        binary(number);
        return 0;
    }
}
int decimal(long long number)
{
    int decimal = 0 , i = 0;
    int remainder;

    while (number != 0)
    {
        remainder = number % 10;
        number /= 10;
        decimal += remainder * pow(2,i);
        ++i; 
    }
    return decimal;
}
int binary(long long number)
{
    int remain[100];
    int i = 0;
    for(i = 0 ; number > 0 ; i++)
    {
        remain[i] = number % 2;
        number /= 2;
    }
    for (i = i-1; i >= 0 ; i--)
    {
        printf("%d" , remain[i]);
    }   
}