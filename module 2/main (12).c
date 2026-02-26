#include<stdio.h>
#include<conio.h>
void main()
{
    
    //data_type variable = value;
    int pri = 50000;
    float roi = 6.7;
    int year = 2;
    
    float interest = pri*roi*year/100;
    float total = pri + interest;
    printf("your final amount is : %f",total);
    
    getch();
    
    
}