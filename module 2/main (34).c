#include<stdio.h>
#include<conio.h>

int main()
{
    
int marks;

printf("enter your marks");
scanf("%d",&marks);//55

if(marks>=70)
{
    printf("A grade");
}
else if(marks>=60)
{
    printf("b grade");
}
else if(marks>=50)
{
    printf("c grade");
}
else if(marks>=40)
{
    printf("d grade");
}
else
{
    printf("fail");
}


return 0;
}