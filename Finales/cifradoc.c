#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void en(char cad[200],int num)
{
    int i=0;
    char letra;
    while(cad[i]!='\0')
    {
        cad[i]=cad[i]+num;
        i++;
    }
    printf("\nLa cadena encriptada es:\n%s",cad);
}


int main()
{
    int x;
    char cad[200];

    printf("Introduce una cadena:");
    scanf("%200[^\n]", &cad);
    printf("Introduce un numero : ");
    scanf("%d",&x);
    en(cad, x);

    return 0;
}
