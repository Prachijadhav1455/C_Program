///Program to print Hollow pattern using alphabet .
#include<stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j =0; 
 char ch ='\0';
  
  for(i =1; i<= 5; i++)
  {
     for(j=1,ch='A';j<=5;j++,ch++)
   {
     if(i==1 || j==1 || i==5 || j==5)
     
     {
         printf(" %c ",ch);
     }
     else printf("   ");
   }
   printf("\n");
   }
   printf("\n Thanks!!!");
  getch ();
  return 0 ;
}