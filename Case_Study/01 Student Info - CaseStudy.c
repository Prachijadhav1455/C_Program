#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct Stud
{
    int Roll_No;      //4
    char Name[40];    //4
    int Phy;          //4
    int Chem;         //4
    int Maths;        //4
    float Total;      //4
    float Per;        //4
};
int main()
{
   struct Stud Std;

   Std.Roll_No  = 15;
   strcpy(Std.Name,"Raj Patil");
   Std.Phy = 83;
   Std.Chem = 78;
   Std.Maths = 89;

   Std.Total = Std.Phy + Std.Chem + Std.Maths;

   Std.Per = (Std.Total/300)*100;

   printf("\n Roll Number = %d",Std.Roll_No);
   printf("\n Name = %s",Std.Name);
   printf("\n Total Marks = %0.0f",Std.Total);
   printf("\n Percentage = %0.3f",Std.Per);

   printf("\n\n Thanks FOr Using Our Application!!!!!!!!");

   getch();
   return 0;
}

