#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    
printf("\n enter 1 for english \n enter 2 for hindi \n enter for gujarati");
scanf("%d",&num);

if(num==1)
{
    printf("language is english");
}

else if(num==2)
{
    printf("language is hindi");
    
}
else if(num==3)
{
    printf("language is gujarati");
}
else
{
    printf("number is not valid");
}

return 0;
}