#include <stdio.h>

int main() {
    int n, i, j;

    printf("Entrez le nombre de lignes de la pyramide : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Affiche des espaces pour l'alignement
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Affiche des étoiles pour la pyramide
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        // Passe à la ligne suivante
        printf("\n");
    }

    return 0;
}
