#include<stdio.h>
#include<conio.h>
int main()
{
  int No = 0, cnt = 0 ;
  
  printf("\n Enter a No To Print Its Table = ");
  scanf("%d",& No);
  
  printf("\n===========*******=============\n");
  
  for(cnt = 1 ; cnt <= 10 ; cnt++)
  {
    printf( "\n\t %3d *%3d = %3d",No , cnt,(No * cnt));
  }
 
 printf("\n\n=============*******=============\n");
 
  getch ();
  return 0; 
} 