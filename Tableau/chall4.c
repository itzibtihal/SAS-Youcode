#include <stdio.h>
#define Lmax 100

int main() {
    int T[Lmax];
    int L, i, som = 0, k = 0, Max, Min;
    double moy;

    do {
        printf("Donnez les dimensions du tableau (max lg. %d ) : \n", Lmax);
        scanf("%d", &L);
    } while (L <= 0 || L > Lmax);

    // Saisir les notes
    for (i = 0; i < L; i++) {
        do {
            printf("Donnez la note d'exam n° %d : \n", i + 1);
            scanf("%d", &T[i]);
        } while (T[i] < 0 || T[i] > 20);
    }

    // Calculer la somme
    for (i = 0; i < L; i++) {
        som += T[i];
    }

    // Calculer la moyenne
    moy = (double)som / L;
    printf("La moyenne : %.2lf \n", moy);

    // Comparer chaque note à la moyenne
    for (i = 0; i < L; i++) {
        if (T[i] < moy) {
            printf("La note %d est inférieure à la moyenne \n", i + 1);
        } else if (T[i] > moy) {
            printf("La note %d est supérieure à la moyenne \n", i + 1);
            k++; // Incrémenter le compteur des notes supérieures à la moyenne
        } else {
            printf("La note %d est égale à la moyenne \n", i + 1);
        }
    }

    // Afficher le nombre de notes supérieures à la moyenne
    printf("Vous avez %d notes supérieures à la moyenne \n", k);

    // Chercher la note la plus petite
    Min = T[0];
    for (i = 1; i < L; i++) {
        if (T[i] < Min) {
            Min = T[i];
        }
    }

    // Chercher le nombre le plus grand
    Max = T[0];
    for (i = 1; i < L; i++) {
        if (T[i] > Max) {
            Max = T[i];
        }
    }

    // AFFICHAGE DE MIN et MAX
    printf("Le nombre le plus petit dans votre tableau est : %d\n", Min);
    printf("Le nombre le plus grand dans votre tableau est : %d\n", Max);

    

    return 0;
}
