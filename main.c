#include <stdio.h>
#include <stdlib.h>

int main()
{
    char car;
    int num=0,lmay=0,lmin=0,otc=0,letras=0;

    printf("Ingrese un caracter: ");
    scanf("%c",&car);
    fflush(stdin);

    while(car!='*')
    {
        if(car>='0'&&car<='9')
        {
            num++;
        }
        else if(car>='a'&&car<='z')
        {
            lmin++;
            letras++;
        }
        else if(car>='A'&&car<='Z')
        {
            lmay++;
            letras++;
        }
        else
        {
            otc++;
        }
        printf("Ingrese el caracter: ");
        scanf("%c",&car);
        fflush(stdin);
    }
    printf("Numericos: %d\n",num);
    printf("Letras: %d\n",letras);
    printf("Mayusculas: %d\n",lmay);
    printf("Minusculas: %d\n",lmin);
    printf("Otro caracter: %d\n",otc);

    return 0;
}
