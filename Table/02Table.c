/// Program to print Table.
#include<stdio.h>
#include<conio.h>
int main()
{
  int r = 0, c = 0, s = 0,e = 0;
  
  printf("\nEnter 2 Numbers For Table");
  
  printf("\nstarts From :");
  scanf("%d",&s);
  
  printf("End From :");
  scanf("%d",&e);
  
  
 printf("\n===================*******===================\n");
   
   for(r=1;r<=10;r++)
     {
      for(c=s;c<=e;c++)
        {
           printf(" %2d ",c*r); 
        }
          printf("\n");
     }
     
 printf("\n===================*******===================");
  
  getch();
  return 0; 

}
