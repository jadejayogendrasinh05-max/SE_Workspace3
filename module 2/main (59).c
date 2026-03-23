#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    int rev=0;
    printf("enter number:");
    scanf("%d",&num);
    
    while(num>0)
    {
        int rem=num%10;
        rev= (rev*10)+rem;
        num=num/10;
        
    }
    printf("reverse number is %d",rev);
    
    return 0;
    
}