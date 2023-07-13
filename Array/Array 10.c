#include<stdio.h>
#include<conio.h>
int main ()
{
    int iNum[5] ={10,55,33,15,3};
    
    printf("\n Value Of 101 Element = %d.",iNum[0]);
    printf("\n Value Of 102 Element = %d.",iNum[1]);
    printf("\n Value Of 103 Element = %d.",iNum[2]);
    printf("\n Value Of 104 Element = %d.",iNum[3]);
    printf("\n Value Of 105 Element = %d.",iNum[4]);
    
    getch();
    
    iNum[3] = 105;
    
    iNum[4] =iNum[0];
    
    iNum[0]++;
    
    iNum[2] = 5;
    
    
    printf("\n====================================\n");
    
    printf("\n Value Of 401 = %d.",iNum[0]); //11
    printf("\n Value Of 501 = %d.",iNum[1]);  //55
    printf("\n Value Of 601 = %d.",iNum[2]);  //93
    printf("\n Value Of 701 = %d.",iNum[3]);  //105
    printf("\n Value Of 801 = %d.",iNum[4]);  //10
    
    
    printf("\n\n press Any key To Continue....");
    getch ();
    return 0;    
}