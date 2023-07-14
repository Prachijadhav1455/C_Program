///Create Array, Accepting & display element using loop with macro
///Find minimum element in that array.

#include <stdio.h>
#include<stdio.h>
#define size 5

int main()
{
  int i=0 , Min =0 ,Arr[size];
   for (i=0 ; i<size;i++)
   {
     printf("\n Enter a Element %d=>",i+1);
     scanf("%d",&Arr[i]);
   }
   getch();
  
      for(i=0; i<size ;i++)
      {
        if (Arr[i]<Min)
        {
          Min=Arr[i];
        }
      }
     printf("\n Minimum Number in given arry is: %d.",Min);
   getch ();
  return 0;
}