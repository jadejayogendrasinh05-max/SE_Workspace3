#include<stdio.h>
#include<conio.h>

int main()
{
    int age;
    
printf("enter your age");
scanf("%d",&age);

if(age>=18)
{
    printf("\n eligible to vote");
    
if(age>=60)
{
    printf("\n senior citizen");
    
}
else
{
    printf("\n young age");
}


}
else
{
    printf("not eligible to vote");
}


return 0;

}