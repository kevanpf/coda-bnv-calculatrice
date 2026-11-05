
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
        int resultat = number1 + number2;
        printf("%d %c %d = %d\n", number1, operateur, number2, resultat);
    }
    else if (operateur == '-')
    {
        printf("soustraction\n");
        int resultat2 = number1 - number2;
        printf("%d %c %d = %d\n", number1, operateur, number2, resultat2);
    }
    else if (operateur == '*')
    {
        printf("multiplication\n");
        int resultat3 = number1 * number2;
        printf("%d %c %d = %d\n", number1, operateur, number2, resultat3);
    }
    else if (operateur == '/')
    {
        printf("division\n");

        if (number2 != 0)
        {
            double resultat4 = (double)number1 / number2;
            printf("%d %c %d = %.2f\n", number1, operateur, number2, resultat4);
        }
        else
        {
            printf("Impossible de diviser par 0\n");
        }
    }
    else if (operateur == '%')
    {
        printf("modulo\n");

        if (number2 != 0)
        {
            int resultat5 = number1 % number2;
            printf("%d %c %d = %d\n", number1, operateur, number2, resultat5);
        }
        else
        {
            printf("Impossible de diviser par 0\n");
        }
    }
    else
    {
        printf("Operateur non reconnu\n");
    }

    return 0;
}







