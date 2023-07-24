#include <stdio.h>
#include<conio.h>
int main()
{
  int Day = 0;
  printf("Enter A Day Number (1 - 7):");
  scanf("%d",&Day);                 
  switch(Day)
  {   
    case 1:printf("\n Monday");
    break;                                         break;
    case 2:printf("\n Tuesday");
    break;
    case 3:printf("\nWednesday");
    break;
    case 4:printf("\nThursday");
    break;
    case 5:printf("\nFriday");
    break;
    case 6:printf("\nSaturday");
    break;
    case 7:printf ("\nSunday");
    break;
    default:
    printf("\n Invalid Input");
    break ;
   }
  return 0;  
} 