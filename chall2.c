#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int TF, TC;
    printf("Merci d'entrer la température en Fahrenheit : \n");
    scanf("%d", &TF);

    TC = (TF - 32) / 1.8;

    printf("La température en degrés Celsius est : %d°C\n", TC);

    if (TC < 0)
    {
        printf("Très froid\n");
    }
    else if (TC < 20)
    {
        printf("Froid\n");
    }
    else if (TC < 40)
    {
        printf("Chaud\n");
    }
    else
    {
        printf("Très chaud\n");
    }

    return 0;
}

