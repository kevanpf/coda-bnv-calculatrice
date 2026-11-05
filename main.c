#include <stdlib.h>
#include <stdio.h>

int main()
{
    int number1 = 13;
    int number2 = 15;
    char operateur = '+';

    printf("Bonjour, choisissez un operateur : +, -, *, /, %%\n");
    scanf(" %c", &operateur);

    printf("Choisissez un premier nombre : ");
    scanf("%d", &number1);

    printf("Choisissez un deuxieme nombre : ");
    scanf("%d", &number2);

    if (operateur == '+')
    {
        printf("addition\n");
    }
    else if (operateur == '-')
    {
        printf("soustraction\n");
    }
    else if (operateur == '*')
    {
        printf("multiplication\n");
    }
    else if (operateur == '/')
    {
        printf("division\n");
    }
    else if (operateur == '%')
    {
        printf("modulo\n");
    }
    else
    {
        printf("Operateur non reconnu\n");
    }

    return(0);
}
