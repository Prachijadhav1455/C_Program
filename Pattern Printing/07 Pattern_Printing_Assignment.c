/// Program to print left lower pattern using table of 7.

#include<stdio.h>
#include<conio.h>
int main()
{
  int  C = 0,R = 0,X = 0, i = 0;
  
  printf("\n Enter for pattern size : ");
  scanf("%d",&X);
   
   printf("\n==================Pattern==============\n\n");
  
  for (R =1,i=7; R<=X; R++)
  {
    for(C=1 ; C<=X; C++)
    {
       if(R>=C || R==C) 
      {
        printf(" %3d ",i);
        i=i+7;
      }
      
    }
    printf ("\n");
  }
  printf("\n=================Thanks=================");
  
getch ();
return 0;

}