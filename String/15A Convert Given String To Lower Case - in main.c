// Convert Given String To Lower Case

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] ={'\0'};
    int i = 0;

    printf("\n Enter a Sring :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 'A' && cSrc[i] <= "Z")
        {
            cSrc[i] += 32;         //// cSrc[i] =cSrc[i] + 32;
        }
        i++;
    }
    printf("\n Given String is After Capitalization = %s.",cSrc);

    getch();
    return 0;
}
