#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

printf("\n press 1 for english \n press 2 for hindi \n press 3 for gujarati");
scanf("%d",&num);//1

if(num==1)
{
    printf("your language is english");
}
else if(num==2)
{
    printf("your language is hindi");
}
else if(num==3)
{
    printf("your language is gujarati");
}
else
{
    printf("your number is not valid");
}

return 0;
}