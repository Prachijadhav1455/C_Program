///Program to Print table 5 to 10.
#include<stdio.h>
#include<conio.h>
int main()
{
  int R = 0,C = 0;
 
  printf("\n================**********============\n\n");
  
  for(R = 1; R <= 10; R++)
  {
     for(C = 5; C<= 10; C++)
     {
       printf("%4d",R * C);
     }
     printf("\n");
     
  }   
    printf("\n===================*===================");  
      
   getch ();
   return 0;
}
  
  
 
  
  
  
