// Convert Given String TO TOggle Case
// Convert Lower Case Letters To Upper Case & COnvert UoperCase Letter TO Lower Case

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50] ={'\0'};
    int i =0;

    printf("\n Enter a String");
    gets("cSrc");

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 'A' && cSrc[i] <= 'Z')
        {
            cSrc[i] = cSrc[i] + 32;
        }
        else if(cSrc[i] >= 'a' && cSrc[i] <="z")
        {
            cSrc[i] = cSrc[i] -32;
        }
        i++;
        }

        printf("/n Given tring is After Toggled Case=%s.", cSrc);

        getch();
        return 0;
}


