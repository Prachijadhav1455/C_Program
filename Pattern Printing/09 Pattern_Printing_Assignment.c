///Program to print left lower pattern using Fibonaccie series. 

#include<stdio.h>
#include<conio.h>
int main()
{
  int  Cnt =0,R =0,X=0,C=0,No1=1,No2=0,No3=0, i=0;
  
  printf("\n Enter for pattern size : ");
  scanf("%d",&X);
   
   printf("\n==================Pattern==============\n\n");
  
  for (R=1; R<=X; R++)
  {
    for(C=1 ; C<=X; C++)
    {
       if(R>=C) 
      {
          printf(" %5d ",No3);
          No3 = No1+No2;
          No1=No2;
          No2=No3;    
      }
      else
      {
        printf("    ");
      }
    }
    printf ("\n");
  }
  
  printf("\n==================Thanks==============");
  
getch ();
return 0;

}