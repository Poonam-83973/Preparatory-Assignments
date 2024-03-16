#include<stdio.h>
   int main()
   {
       int i;
       printf("The obtained marks are : ");
       scanf("%d",&i);
       printf("The grade of student is as follows : ");
       if(i>=90)
           printf("Excellent");
       else if(i<90 && i>=80)
          printf("A grade");
      else if(i>=70 && i<80)
          printf("B grade");
      else if(i>=60 && i<70)
          printf("C grade");
      else
          printf("F grade");
  
      return 0;
 }          
