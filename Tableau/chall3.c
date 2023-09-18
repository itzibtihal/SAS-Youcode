#include <stdio.h>

int main() {
    int T[10];
    int i, j, temp;

    printf("Veuillez saisir 10 nombres entiers :\n");

    // Saisie des nombres 
    for (i = 0; i < 10; i++) {
        printf("T[%d] : ", i + 1);
        scanf("%d", &T[i]);
    }

    // Tri à bulles 
    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (T[j] < T[j + 1]) {
                // Échanger les éléments s'ils sont dans le mauvais ordre
                temp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = temp;
            }
        }
    }

    // Affichage du tableau du plus grand au plus petit
    printf("Les nombres triés (du plus grand au plus petit) :\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", T[i]);
    }

    return 0;
}
