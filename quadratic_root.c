#include <stdio.h>
#include <math.h>
int main()
{
    int a ,b ,c ,din ,discriminant = 0;
    float root1 , root2 = 0;
    printf("it is a program to find roots of quadratic equation i.e; ax^2 + bx + c = 0... \n");
    printf("enter the value of a = ");
    scanf("%d" , &a);
    printf("enter the value of b = ");
    scanf("%d" , &b);
    printf("enter the value of c = ");
    scanf("%d" , &c);

    printf("your equation is : %dx^2 + %dx + %d = 0 \n" , a , b , c);
    
    discriminant = b*b - 4*a*c;
    printf("\ndiscriminant = %d \n" , discriminant);
    din = 2*a;

    if (discriminant > 0)
    {
        printf("D > 0 , which means this equation has roots real and unequal \n");
        root1 = (-b + sqrt(discriminant))/din;
        root2 = (-b - sqrt(discriminant))/din;

        printf("ROOTS are , x = %.3f , %.3f" , root1 , root2);
        getch();


    }
    else if(discriminant < 0)
    {
        printf("D < o , which means this equation has imagionary roots \n");
        discriminant = -discriminant;
        root1 = (-b + sqrt(discriminant))/2*a;
        root2 = (-b - sqrt(discriminant))/2*a;
        printf("ROOTS are , x = (-%d + sqrt(%d)i/%d)  , (-%d - sqrt(%d)i/%d) \n" , b , discriminant , din , b , discriminant , din);
        
        getch();
        
    }
    else
    {
        printf("D = 0 , which means this equation has only one root of x \n");
        root1 = -b/din;
        printf("ROOT of x = %.2f" , root1);
        getch();

    }







    return 0;
}