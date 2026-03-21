#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

printf("\n press 1 for english \n press 2 for hindi \n press 3 for gujarati");
scanf("%d",&num);//1

switch(num)
{
    case 1:printf("your language is english");
    break;
    
    case 2:printf("your language is hindi");
    break;
    
    case 3:printf("your language is gujarati");
    break;
    
    default:printf("your number is not valid");
    break;
    
}



return 0;
}