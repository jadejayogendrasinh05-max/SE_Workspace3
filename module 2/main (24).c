#include<stdio.h>
#include<conio.h>

int main()

{
    int marks;
    
    printf("enter your marks");
    scanf("%d",&marks);//48
    
    if (marks>=70)
    {
        printf("a grade");
        
      }
      
      else if(marks>=60)
      {
          printf("B grade");

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
