#include <stdio.h>
#include <stdbool.h>
int swap(int* , int*);
int avg(int* , int*);
// int arravg();
int reference(int*, int*);
int main()
{
    char select,sel;
    int num1 , num2 = 0 , *ptr1 , *ptr2;
    bool ans = 0;
    printf("enter first number : ");
    scanf("%d" , &num1);
    printf("enter second number : ");
    scanf("%d" , &num2);
    ptr1 = &num1;ptr2 = &num2;
    printf("address\t\tvalue\n"); 
    printf("%d\t\t%d\n%d\t\t%d\n",ptr1 ,*ptr1 ,ptr2 ,*ptr2);
    printf("do you want to change the values?\nenter 1 for yes");
    scanf("%d" , &ans);
    switch (ans)
    {
    case 1:
        reference(&num1,&num2);
        printf("first number = %d\nsecond number = %d\n" , num1 , num2);
        break;
    
    default:
        break;
    }
    selectagain:
    printf("enter   (*)-multiplication\n\t(+)addition\n\t(-)-subtraction\n\t(/)-division\n\t(s)-swap\n\t(a)-average\n\t(c)-to change numbers\nenter a character : ");
    scanf(" %c" , &select);
    printf("to proceed press \'y\' \nto change the operand press\'n\'_");
    scanf(" %c" , &sel);
    if (sel == 'y' || sel == 'Y')
    {
        if (select == '+')
        {
            printf("%d + %d = %d\n" ,*ptr1 , *ptr2 , *ptr1 + *ptr2);
        }
        else if (select == '-')
        {
            printf("%d - %d = %d\n" ,*ptr1 , *ptr2 , *ptr1 - *ptr2);
        }
        else if(select == '*')
        {
            printf("%d * %d = %d\n" ,*ptr1 , *ptr2 , *ptr1 * *ptr2);
        }
        else if (select == '/')
        {
            printf("%d * %d = %d\n" ,*ptr1 , *ptr2 , *ptr1 / *ptr2);
        }
        else if (select == 's' || select == 'S')
        {
            swap(ptr1 , ptr2);  
        }
        else if(select == 'a' || select == 'A')
        {
            avg(ptr1 , ptr2);
        }
        // else if(select == 'c' || select == 'C')
        // {
        //     reference(&num1);
        //     printf("\nvalue of num 1 after reference function = %d\n" , num1);
        // }
        else
        {
            printf("\t\ninvalid selection\n\n");
            goto selectagain;
        }
    }
    else
    {
        goto selectagain;
    }
    
    printf("do you want to perform another operation\n");
    scanf("%d" , &ans);
    switch (ans)
    {
    case 1:
        goto selectagain;
        break;
    default:
        break;
    }
    // arravg();
    return 0;
}
int swap(int *x , int *y)
{
    int *z = 0;
    z = x;
    x = y;
    y = z;
    printf("\nthis is swap function\n");
    printf("num1 = %d\nnum2 = %d\n" , *x , *y);
    return 0;
}
int avg(int *no1 , int *no2)
{
    int avg = 0;
    avg = (*no1 + *no2)/2;
    printf("\nthis is average function\n");
    printf("average of %d , %d = %d\n" , *no1 ,*no2, avg);
    return 0;
}
// int arravg()
// {
    // printf("\nfunction of finding average with array\n");
    // char *numbers[1000];
    // int i = 0;
    // int sum = 0;
    // printf("Enter the numbers \n");
    // do
    // {
    //     printf("number %d" , i+1);
    //     scanf("%c " , &numbers[i]);
    //     i++;
    // } 
    // while (*numbers[1000] != 'e' || *numbers[1000] != 'E');
    // for (int j = 0; j < 1000; j++)
    // {
    //     sum += *numbers[j];
    // }
    // int average = 0;
    // average = sum/i;
    // printf("average is = %d\n" , average);
// }
int reference(int* n1 , int* n2)//call by reference function
{
    int change1 = 0 , change2 = 0;
    printf("\nthis is call by reference function\n");
    printf("enter the value of first number you want to change : ");
    scanf("%d" , &change1);
    printf("enter the value of second number you want to change : ");
    scanf("%d" , &change2);
    (*n1) = change1;
    (*n2) = change2;
}