#include<stdio.h>
#include<conio.h>
void main()
{
    int pri;
    float roi;
    int year;
    
    printf("enter principle amount");
    scanf("%d",&pri);
    
    printf("enter ROI");
    scanf("%f",&roi);
    
    printf("enter years");
    scanf("%d",&year);
    
    float intrest = pri*roi*year/100;
    
    float total = pri+intrest;
    
    printf("your final amount is : %f", total);
    
    
    getch();
    
}