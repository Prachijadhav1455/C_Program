///Program To Accept And Disply  Element Using Loop  Macro Find Count Of Even No2
#include <stdio.h>
#include<stdio.h>
#define size 5

int main()
{
  int i=0 ,Max=0, Min=0 ,Arr[size];
   for (i=0 ; i<size;i++)
   {
     printf("\n Enter a Element %d =>",i+1);
     scanf("%d",&Arr[i]);
   }
   getch ();
  
        for(i=0;i<size;i++)
        {
             if (Arr[i]>Max)
               {
                 Max=Arr[i];
                } 
         }
         
         for(i=0;i<size;i++)
        {
             if(Arr[i]>Min)
               {
                 Min=Arr[i];
                } 
         }
         
    printf("\n Maximum  no given in give is array is : %d.",Max);
    
    printf("\n Maximum  no given in give is array is : %d.",Min);
    
    getch ();
    return 0;
}