#include <stdio.h>
#include <math.h>
int main()
{
    int select = 0;
    printf("what do you want to perform?\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Square Root\n6.Quadratic Root\n7.Highest Common Factor\n8.Calculate Result Percentage\n9.Calculate Factorial Value");

again:
    printf("\nchoose by typing the number of respected operator:\n");
    scanf("%d", &select);

    if (select == 1)
    {
        addition();
    }
    else if (select == 2)
    {
        subtraction();
    }
    else if (select == 3)
    {
        multiplication();
    }
    else if (select == 4)
    {
        division();
    }
    else if (select == 5)
    {
        squareroot();
    }
    else if (select == 6)
    {
        quadraticroot();
    }
    else if (select == 7)
    {
        hcf();
    }
    else if (select == 8)
    {
        percent();
    }
    else if (select == 9)
    {
        factorial();
    }

    else
    {
        printf("please type the correct number\n\n");
        getch();
    }
    printf("\nPress E for exit\npress N to continue...");
    char e;
    scanf(" %c",&e);
    if(e == 'E' || e == 'e')
    {
        exit(0);
    }
    else
    {
        goto again;
    }
    
    return 0;
}
int addition()
{
    float num1, num2 = 0;
    printf("enter the numbers\n");
    printf("number1 : ");
    scanf("%f", &num1);
    printf("number2 : ");
    scanf("%f", &num2);
    float ans = num1 + num2;
    printf("%.2f + %.2f = %.3f", num1, num2, ans);
    return 0;
}
int multiplication()
{
    float num1, num2 = 0;
    printf("enter the numbers\n");
    printf("number1 : ");
    scanf("%f", &num1);
    printf("number2 : ");
    scanf("%f", &num2);
    float ans = num1 * num2;
    printf("%.2f * %.2f = %.3f", num1, num2, ans);
    return 0;
}
int division()
{
    float num1, num2 ,ans= 0;
    printf("enter the numbers\n");
    printf("number1 : ");
    scanf("%f", &num1);
    printf("number2 : ");
    scanf("%f", &num2);
    ans = num1 / num2;
    printf("%.2f / %.2f = %.3f", num1, num2, ans);
    return 0;
}
int subtraction()
{
    float num1, num2 = 0;
    printf("enter the numbers\n");
    printf("number1 : ");
    scanf("%f", &num1);
    printf("number2 : ");
    scanf("%f", &num2);
    float ans = num1 - num2;
    printf("%.2f - %.2f = %.3f", num1, num2, ans);
    return 0;
}
int squareroot()
{
    float a = 0;
    float root = 0;
    printf("this is a program to find square root of any number\n");
    printf("enter a number : ");
    scanf("%f", &a);
    printf("your number is %.2f \n", a);
    root = sqrt(a);
    printf("square root = %.3f ", root);
    return 0;
}
int quadraticroot()
{
    printf("this is a program to find quadratic root\n");
    char more;
    int a, b, c, din, discriminant;
    float root1, root2;

    root1, root2 = 0;
    printf("enter the value of a = ");
    scanf("%d", &a);
    printf("enter the value of b = ");
    scanf("%d", &b);
    printf("enter the value of c = ");
    scanf("%d", &c);

    printf("your equation is : %dx^2 + %dx + %d = 0 \n", a, b, c);

    discriminant = b * b - 4 * a * c;
    printf("\ndiscriminant = %d \n", discriminant);
    din = 2 * a;
    if (discriminant > 0)
    {
        printf("D > 0 , which means this equation has roots real and unequal \n");
        root1 = (-b + sqrt(discriminant)) / din;
        root2 = (-b - sqrt(discriminant)) / din;
        printf("ROOTS are , x = %.3f , %.3f", root1, root2);
    }
    else if (discriminant < 0)
    {
        printf("D < o , which means this equation has imagionary roots \n");
        discriminant = -discriminant;
        root1 = (-b + sqrt(discriminant)) / 2 * a;
        root2 = (-b - sqrt(discriminant)) / 2 * a;
        printf("ROOTS are , x = (-%d + sqrt(%d)i/%d)  , (-%d - sqrt(%d)i/%d) \n", b, discriminant, din, b, discriminant, din);
    }
    else
    {
        printf("D = 0 , which means this equation has only one root of x \n");
        root1 = -b / din;
        printf("ROOT of x = %.2f", root1);
    }
    return 0;
}
int hcf()
{
    int n1, n2, i, hcf = 0;
    char ans;
    printf("program to find HCf \n");
    printf("enter two integers with a space b/w them : ");
    scanf("%d %d", &n1, &n2);
    // scanf("%d" , &n2);
    printf("\n HCF for %d , %d", n1, n2);
    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }
    printf(" = %d \n", hcf);
    return 0;
}
    
int percent()
{
    int tsub = 0;
    float sub[6];
    float total = 0;
    float percent = 0;
    int number = 1;
    int i, j, k, l = 0;

    printf("it is a program to calculate the percentage \n");

    printf("how many subject do you have : ");
    scanf("%d", &tsub);

    if (tsub == 6)
    {
        printf("please enter numbers only from 0 to 100 \n");
        for (i = 0; i < 6; i++)
        {
            printf("enter the numbers you get in subject %d : ", number++);
            scanf("%f", &sub[i]);
        }
        // formula
        for (i = 0; i < 6; i++)
        {
            total += sub[i];
            percent = (total / 600) * 100;
        }
        printf("you got %.3f percent", percent);
    }
    else if (tsub == 5)
    {
        number = 1;
        printf("please enter numbers only from 0 to 100 \n");
        for (j = 0; j < 5; j++)
        {
            printf("enter the numbers you get in subject %d : ", number++);
            scanf("%f", &sub[j]);
        }
        //formula
        for (j = 0; j < 5; j++)
        {
            total += sub[j];
        }
        percent = (total / 500) * 100;
        printf("you got %.3f percent", percent);
    }
    else if (tsub == 4)
    {
        number = 1;
        printf("please enter numbers only from 0 to 100 \n");
        for (k = 0; k < 4; k++)
        {
            printf("enter the numbers you get in subject %d : ", number++);
            scanf("%f", &sub[k]);
        }
        //formula
        for (k = 0; k < 4; k++)
        {
            total += sub[k];
        }
        percent = (total / 400) * 100;
        printf("you got %.3f percent", percent);
    }
    else if (tsub == 3)
    {
        number = 1;
        printf("please enter numbers only from 0 to 100 \n");
        for (l = 0; l < 3; l++)
        {
            printf("enter the numbers you get in subject %d : ", number++);
            scanf("%f", &sub[l]);
        }
        //formula
        for (l = 0; l < 3; l++)
        {
            total += sub[l];
        }
        percent = (total / 300) * 100;
        printf("you got %.3f percent \n", percent);
    }
    else
    {
        printf("you must have 3 subjects to calculate the percentage...");
    }
    return 0;
}
int factorial()
{
    int n = 0;
    int factorial = 1;

    printf("This is a program to find factorial of any integer upto 16 \n");
repeat:
    n = 0;
    factorial = 1;
    printf("enter any integer value to find it's factorial : ");
    scanf("%d", &n);
    //formula
    if (n < 17)
    {
        for (int i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        printf("%d! = %d \n\n", n, factorial);
    }
    else
    {
        printf("maximum number 16 is allowed \n");
    }
    return 0;
}   