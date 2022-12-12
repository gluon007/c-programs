#include <stdio.h>
int check(int);
int convert(int);
int cityname();

int a , b , farenheit , nocity , nodays , cn , number= 0;
int i = 0;
char city1[20] , city2[20] , city3[20] , city4[20] , city5[20];

int main()
{
    // const int city = 2;
    // const int day = 7;
    cityname();
    printf("enter the number of days : ");
    scanf("%d" , &nodays);

    int temperature[nocity][nodays];
    int highcount[nocity][nodays];
    int lowcount[nocity][nodays];
    int conFaran[nocity][nodays];

    printf("enter temperature in degree celcius ; not more than 80 degree celcius\n");

    for (int i = 0; i < nocity; i++)
    {
        printf("city %d" , i+1);
        for (int j = 0; j < nodays; j++)
        {
            printf("\tday %d : ", j+1);
            scanf("%d" , &temperature[i][j]);

            check(temperature[i][j]);
            farenheit = convert(temperature[i][j]);
            conFaran[i][j] = farenheit;
            highcount[i][j] = temperature[i][j];
            if (highcount[0][0]<highcount[i][j])
            {
                highcount[0][0] = highcount[i][j];   
            }
            lowcount[i][j] = temperature[i][j];
            if (lowcount[0][0]>lowcount[i][j])
            {
                lowcount[0][0] = lowcount[i][j];   
            }
        }
    }
    printf("\n\n");
    number = nocity;
    if (number == 1)
    {
        for (i = 0; i < 1; i++)
        {
            printf("city\t\t[%s]\n", city1);   
            printf("Temperature\t");
            printf("In Celcius\t");   
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dC |" , j+1 , temperature[i][j]);
            }
            printf("\n\t");
            printf("\tIn Farenheit\t");
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dF |" , j+1 , conFaran[i][j]);
            }
            printf("\n");
        } 
    }
    else if (number == 2)
    {
        for (i = 0; i < 1; i++)
        {
            printf("city\t\t[%s]\n", city1);   
            printf("Temperature\t");
            printf("In Celcius\t");   
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dC |" , j+1 , temperature[i][j]);
            }
            printf("\n\t");
            printf("\tIn Farenheit\t");
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dF |" , j+1 , conFaran[i][j]);
            }
            printf("\n");
        } 
        printf("\n");
        for (i = 1; i < 2; i++)
        {
            printf("city\t\t[%s]\n", city2);   
            printf("Temperature\t");
            printf("In Celcius\t");   
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dC |" , j+1 , temperature[i][j]);
            }
            printf("\n\t");
            printf("\tIn Farenheit\t");
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dF |" , j+1 , conFaran[i][j]);
            }
            printf("\n");
        } 
    }
    else if(number == 3)
    {
        for (i = 0; i < 1; i++)
        {
            printf("city\t\t[%s]\n", city1);   
            printf("Temperature\t");
            printf("In Celcius\t");   
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dC |" , j+1 , temperature[i][j]);
            }
            printf("\n\t");
            printf("\tIn Farenheit\t");
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dF |" , j+1 , conFaran[i][j]);
            }
            printf("\n");
        } 
        printf("\n");
        for (i = 1; i < 2; i++)
        {
            printf("city\t\t[%s]\n", city2);   
            printf("Temperature\t");
            printf("In Celcius\t");   
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dC |" , j+1 , temperature[i][j]);
            }
            printf("\n\t");
            printf("\tIn Farenheit\t");
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dF |" , j+1 , conFaran[i][j]);
            }
            printf("\n");
        } 
        printf("\n");
        for (int i = 2; i < 3; i++)
        {
            printf("city\t\t[%s]\n", city3);   
            printf("Temperature\t");
            printf("In Celcius\t");   
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dC |" , j+1 , temperature[i][j]);
            }
            printf("\n\t");
            printf("\tIn Farenheit\t");
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dF |" , j+1 , conFaran[i][j]);
            }
            printf("\n");
        } 
    }
    else if (number == 4)
    {
        for (int i = 0; i < 1; i++)
        {
            printf("city\t\t[%s]\n", city1);   
            printf("Temperature\t");
            printf("In Celcius\t");   
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dC |" , j+1 , temperature[i][j]);
            }
            printf("\n\t");
            printf("\tIn Farenheit\t");
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dF |" , j+1 , conFaran[i][j]);
            }
            printf("\n");
        } 
        printf("\n");
        for (int i = 1; i < 2; i++)
        {
            printf("city\t\t[%s]\n", city2);   
            printf("Temperature\t");
            printf("In Celcius\t");   
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dC |" , j+1 , temperature[i][j]);
            }
            printf("\n\t");
            printf("\tIn Farenheit\t");
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dF |" , j+1 , conFaran[i][j]);
            }
            printf("\n");
        } 
        printf("\n");
        for (int i = 2; i < 3; i++)
        {
            printf("city\t\t[%s]\n", city3);   
            printf("Temperature\t");
            printf("In Celcius\t");   
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dC |" , j+1 , temperature[i][j]);
            }
            printf("\n\t");
            printf("\tIn Farenheit\t");
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dF |" , j+1 , conFaran[i][j]);
            }
            printf("\n");
        } 
        printf("\n");
        for (int i = 3; i < 4; i++)
        {
            printf("city\t\t[%s]\n", city4);   
            printf("Temperature\t");
            printf("In Celcius\t");   
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dC |" , j+1 , temperature[i][j]);
            }
            printf("\n\t");
            printf("\tIn Farenheit\t");
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dF |" , j+1 , conFaran[i][j]);
            }
            printf("\n");
        } 
    }
    else if (number == 5)
    {
        for (int i = 0; i < 1; i++)
        {
            printf("city\t\t[%s]\n", city1);   
            printf("Temperature\t");
            printf("In Celcius\t");   
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dC |" , j+1 , temperature[i][j]);
            }
            printf("\n\t");
            printf("\tIn Farenheit\t");
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dF |" , j+1 , conFaran[i][j]);
            }
            printf("\n");
        } 
        printf("\n");
        for (int i = 1; i < 2; i++)
        {
            printf("city\t\t[%s]\n", city2);   
            printf("Temperature\t");
            printf("In Celcius\t");   
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dC |" , j+1 , temperature[i][j]);
            }
            printf("\n\t");
            printf("\tIn Farenheit\t");
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dF |" , j+1 , conFaran[i][j]);
            }
            printf("\n");
        } 
        printf("\n");
        for (int i = 2; i < 3; i++)
        {
            printf("city\t\t[%s]\n", city3);   
            printf("Temperature\t");
            printf("In Celcius\t");   
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dC |" , j+1 , temperature[i][j]);
            }
            printf("\n\t");
            printf("\tIn Farenheit\t");
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dF |" , j+1 , conFaran[i][j]);
            }
            printf("\n");
        } 
        printf("\n");
        for (int i = 3; i < 4; i++)
        {
            printf("city\t\t[%s]\n", city4);   
            printf("Temperature\t");
            printf("In Celcius\t");   
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dC |" , j+1 , temperature[i][j]);
            }
            printf("\n\t");
            printf("\tIn Farenheit\t");
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dF |" , j+1 , conFaran[i][j]);
            }
            printf("\n");
        } 
        printf("\n");
        for (int i = 4; i < 5; i++)
        {
            printf("city\t\t[%s]\n", city5);   
            printf("Temperature\t");
            printf("In Celcius\t");   
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dC |" , j+1 , temperature[i][j]);
            }
            printf("\n\t");
            printf("\tIn Farenheit\t");
            for (int j = 0; j < nodays; j++)
            {
                printf("|day %d : %dF |" , j+1 , conFaran[i][j]);
            }
            printf("\n");
        } 
    }

    printf("\nHighest temprature recorded is - ");
    printf("%d" , highcount[0][0]);

    printf("\nLowest temprature recorded is - ");
    printf("%d" , lowcount[0][0]);

    getch();
    return 0;
}
int check(int temp)
{
    if (temp >= 80)
    {
        printf("temperature can not be more than 80 degree celcius\n");
        scanf("%d" , &temp);
        check(temp);
    }
    else
    {
        return 0;
    }
}
int convert(int celcius)
{
    int faren = (celcius*1.8)+32;
    return faren;
}
int cityname()
{
    again:
    printf("enter the number of cities : ");
    scanf("%d" , &nocity);
    if (nocity == 1)
    {
        printf("enter the name of city %d : ", cn+1);
        scanf("%s" , &city1);
    }
    else if (nocity == 2)
    {
        printf("enter the name of city %d : ", cn+1);
        scanf("%s" , &city1);
        printf("enter the name of city %d : ", cn+2);
        scanf("%s" , &city2);
    }
    else if (nocity == 3)
    {
        
        printf("enter the name of city %d : " , cn+1);
        scanf("%s" , &city1);
        printf("enter the name of city %d : ", cn+2);
        scanf("%s" , &city2);
        printf("enter the name of city %d : ", cn+3);
        scanf("%s" , &city3);
    }
    else if (nocity == 4)
    {
        printf("enter the name of city %d : ", cn+1);
        scanf("%s" , &city1);
        printf("enter the name of city %d : ", cn+2);
        scanf("%s" , &city2);
        printf("enter the name of city %d : ", cn+3);
        scanf("%s" , &city3);
        printf("enter the name of city %d : ", cn+4);
        scanf("%s" , &city4);
    }
    else if (nocity == 5)
    {
        printf("enter the name of city %d : ", cn+1);
        scanf("%s" , &city1);
        printf("enter the name of city %d : ", cn+2);
        scanf("%s" , &city2);
        printf("enter the name of city %d : ", cn+3);
        scanf("%s" , &city3);
        printf("enter the name of city %d : ", cn+4);
        scanf("%s" , &city4);
        printf("enter the name of city %d : ", cn+5);
        scanf("%s" , &city5);
    }
    else
    {
        printf("this program supports data of upto 5 cities\n\n");
        goto again;
    }
}
