#include<stdio.h>
#include<conio.h>

int main()
{ 
    int userid = 4689;
    int pass = 1234;
    
    int newuserid,newpass;
    
    printf("enter user id:");
    scanf("%d",&newuserid);
    
    printf("enter password:");
    scanf("%d",&newpass);
    
    if(userid==newuserid && pass==newpass)
    {
        printf("login success");
    }
    else
    {
        printf("login fail");
    }
    
    
    return 0;
}