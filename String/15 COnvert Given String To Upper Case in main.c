//Convert Given String To Uppper Case

#include<stdio.h>
#include<conio.h>


 int main()
 {
     char cSrc[20] ={'\0'};
     int i =0;

     printf("\n Enter a String =");
     gets(cSrc);

     while(cSrc[i] != '\0')
     {
         if(cSrc[i] >= 'a' && cSrc[i] <= 'z')
         {
             cSrc[i] -=32;                //cSrc[i] = cSrc[i] - 32;
         }
         i++;
     }

     printf("\n Given String is After Capiralization = %s.",cSrc);

     getch();
     return 0;
 }
