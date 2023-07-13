#include<stdio.h>
#include<conio.h>

int main()
{
   int Arr[5] = {};
   int i = 0;
   //Displying Array Elements
   for(i = 0; i < 5; i++)
   {
      printf("\n Value Of RollNo %d .",i+101,Arr[i]);
   }

getch();

system("cls");

printf("\n Enter Array Element => \n\n");

//Accepting Array Elements
for(i = 0; i < 5; i++)
{
     printf("\n Value Of RollNo %d=%d.",i+501,Arr[1]);
}
printf("\n\n press Any Key To Continue...");
getch();
return 0;
}