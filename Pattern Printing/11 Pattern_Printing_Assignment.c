/// Program to print left lower pattern  using ketter Q.
#include<stdio.h>
#include<conio.h>
int main()
{
  int R = 0, C = 0, X = 0; 
  printf("\n Enter size for pattern :");
  scanf("%d",&X);

printf("\n=================Pattern====================");
 
  
  for(R=1; R<=X; R++)
   {
       for(C=1; C <= X; C++)
       {
              if(R>=C)
              {
                printf(" Q ");
              }
       }
       printf("\n");
            
    }    
 printf("\n==================Pattern==================");  
    
  getch ();
  return 0;

}