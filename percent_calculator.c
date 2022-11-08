#include <stdio.h>
int main()
{
    int tsub=0;
    float sub1 , sub2 , sub3 , sub4 , sub5 , sub6;
    float total=0;
    float percent=0;

    printf("it is a program to calculate the percentage \n");
    printf("how many subject do you have : ");
    scanf("%d" , &tsub);
    
    if (tsub==6)
    {
        printf("please enter numbers only from 0 to 100 \n");

        printf("enter the numbers you get in subject 1 : ");
        scanf("%f" , &sub1);

        printf("enter the numbers you get in subject 2 : ");
        scanf("%f" , &sub2);

        printf("enter the numbers you get in subject 3 : ");
        scanf("%f" , &sub3);

        printf("enter the numbers you get in subject 4 : ");
        scanf("%f" , &sub4);

        printf("enter the numbers you get in subject 5 : ");
        scanf("%f" , &sub5);

        printf("enter the numbers you get in subject 6 : ");
        scanf("%f" , &sub6);

        // formula
        total = sub1 + sub2 + sub3 + sub4 + sub5 + sub6;
        percent = (total/600)*100;
        printf("you got %.3f percent" , percent);
    }
    else if (tsub==5)
    {
        printf("please enter numbers only from 0 to 100 \n");

        printf("enter the numbers you get in subject 1 : ");
        scanf("%f" , &sub1);

        printf("enter the numbers you get in subject 2 : ");
        scanf("%f" , &sub2);

        printf("enter the numbers you get in subject 3 : ");
        scanf("%f" , &sub3);

        printf("enter the numbers you get in subject 4 : ");
        scanf("%f" , &sub4);

        printf("enter the numbers you get in subject 5 : ");
        scanf("%f" , &sub5);

        //formula
        total = sub1 + sub2 + sub3 + sub4 + sub5;
        percent = (total/500)*100;

        printf("you got %.3f percent" , percent);
    }
    else if (tsub==4)
    {
        printf("please enter numbers only from 0 to 100 \n");

        printf("enter the numbers you get in subject 1 : ");
        scanf("%f" , &sub1);

        printf("enter the numbers you get in subject 2 : ");
        scanf("%f" , &sub2);

        printf("enter the numbers you get in subject 3 : ");
        scanf("%f" , &sub3);

        printf("enter the numbers you get in subject 4 : ");
        scanf("%f" , &sub4);

        //formula
        total = sub1 + sub2 + sub3 + sub4;
        percent = (total/400)*100; 

        printf("you got %.3f percent" , percent);
    }
    else if (tsub==3)
    {
        printf("please enter numbers only from 0 to 100 \n");
        
        printf("enter the numbers you get in subject 1 : ");
        scanf("%f" , &sub1);

        printf("enter the numbers you get in subject 2 : ");
        scanf("%f" , &sub2);

        printf("enter the numbers you get in subject 3 : ");
        scanf("%f" , &sub3);

        //formula
        total = sub1 + sub2 + sub3;
        percent = (total/300)*100;
        printf("you got %.3f percent" , percent);
    }
    else
    {
        printf("you must have 3 subjects to calculate the percentage...");
    }
    getch();
    return 0;
}