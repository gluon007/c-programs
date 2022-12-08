//program to print different types of StaR patterns
#include <stdio.h>
int main()
{
    int number = 0;
    char repeat;
    again:
    number = 0;
    printf("\n\t\t\t\twhat type of star pattern do you want\n");
    printf("\n\t\t\t\t1. Triangle\n\t\t\t\t2. Inverted Triangle\n\t\t\t\t3. Square\n\t\t\t\t4. Rectangle\n\t\t\t\t5. Right Hand Triangle\n");
    printf("\n\t\t\tenter the respected number for pattern : ");
    scanf(" %d" , &number);

    if (number == 1)
    {
        triangle();
    }
    else if (number == 2)
    {
        invertedtriangle();
    }
    else if (number == 3)
    {
        square();
    }
    else if (number == 4)
    {
        rectangle();
    }
    else if (number == 5)
    {
        RHT();
    }    
    printf("\t\t\tdo you want run this program again \n\t\t\t\ttype \"y\" for yes or \"n\" for no and exit..._");
    scanf(" %c" , &repeat);
    if (repeat == 'y' || repeat == 'Y')
    {
        goto again;
    }
    else
    {
        printf("thanks for coming see you soon :)");
        getch();
        return 0;
    }
}
int triangle()
{
    int rows , column = 0;
    printf("\nenter the number of rows :- ");
    scanf("%d" , &rows);
    column = rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= column-1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            printf("*");
        }
        column--;
        printf("\n");
    }
}
int invertedtriangle()
{
    int rows , column = 0;
    printf("\nenter the number of rows :- ");
    scanf("%d" , &rows);
    column = rows;
    for (int i = rows; i >= 1; i--)
    {
        for (int j = column-1; j >= 1; j--)
        {
            printf(" ");
        }
        for (int k = 2*i-1;  k >= 1;  k--)
        {
            printf("*");
        }
        column++;
        printf("\n");
    }
}
int square()
{
    int rows , column = 0;
    int number = 0;
    printf("\nenter the length of one side :- ");
    scanf("%d" , &rows);
    column = rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column-1; j++)
        {
            printf(" *");
        }
        printf(" *");
        printf("\n");
    }
}
int rectangle()
{
    int rows , column = 0;
    printf("\nenter the height :- ");
    scanf("%d" , &rows);
    printf("enter the width :- ");
    scanf("%d" , &column);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column-1; j++)
        {
            printf("* ");
        }
        printf("* ");
        printf("\n");
    }
}
int RHT()
{
    int rows , column , n = 0;
    printf("\nenter the number of rows :- ");
    scanf("%d" , &n);
    // printf("*\n* *\n* * *\n* * * *\n* * * * *");
    for (rows = 0; rows <= n ; ++rows)
    {
        for(column = 0; column < rows; ++column)
        {
            printf("* ");
        }
        printf("\n");
    }
}