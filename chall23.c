#include <stdio.h>

int main() {
    int number, sum = 0, max = 0;

    do {
        printf("Entrez un entier positif (inférieur à 100) ou 0 pour terminer : ");
        scanf("%d", &number);

        if (number > 0 && number < 100) {
            sum += number;

            if (number > max)
                max = number;
        } else if (number != 0) {
            printf("Valeur invalide. Seules les valeurs comprises entre 1 et 99 sont acceptées.\n");
        }
    } while (number != 0);

    printf("La somme des entiers est : %d\n", sum);
    printf("Le maximum des entiers est : %d\n", max);

    return 0;
}