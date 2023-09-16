#include <stdio.h>

int main() {
    int numb, i, Prem = 1;

    printf("Entrez un entier positif : ");
    scanf("%d", &numb);

    for (i = 2; i <= numb / 2; ++i) {
        if (numb % i == 0) {
            Prem = 0;
            break;
        }
    }

    if (Prem)
        printf("%d est un nombre premier.", numb);
    else
        printf("%d n'est pas un nombre premier.", numb);
    return 0;
}