#include <stdio.h>
int main(){
    //code to find leap year
    unsigned int year=0;
    printf("write down the year to check whether it was/is a leap year or not \n");
    scanf("%d" , &year);
//if(isdigit(year)!= 0)
//{
    if (year%4==0)
    {
        printf("%d is a leap year \n" , year);   
        getch();
    }
    else
    {
        printf("%d is NOT a leap year \n" , year);
        getch(); 
    }
//}
//2else{
  //  printf("Please provide the correct year");
//}

}