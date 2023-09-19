#include <stdio.h>
#define Lmax 50
#define Cmax 50

int main() {
    int L, C;
    int T[Lmax][Cmax];
    int i, j, somme = 0;

    do
   {
      printf("Entrez le nombre de lignes (L) : ");
      scanf("%d", &L);
      printf("Entrez le nombre de colonnes (C) : ");
      scanf("%d", &C);
   } while (L <= 0 || C <= 0 || L > Lmax || C> Cmax );
    

    if (L > 50 || C > 50) {
        printf("Les dimensions sont trop grandes. Les dimensions maximales sont de 50 lignes et 50 colonnes.\n");
        return 1;
    }

    // Remplir le tableau 
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("Entrez la valeur pour T[%d][%d] : ", i, j);
            scanf("%d", &T[i][j]);
            somme += T[i][j];
        }
    }

    // Afficher le tableau
    printf("Tableau T :\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    // Afficher la somme des éléments du tableau
    printf("La somme des éléments du tableau est : %d\n", somme);

    return 0;
} 