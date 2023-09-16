#include <stdio.h>

int main() {
    int numb, reversNum = 0;

    printf("Entrez un entier : ");
    scanf("%d", &numb);

    while (numb != 0) {
        int digit = numb % 10;
        reversNum = reversNum * 10 + digit;
        numb /= 10;
    }

    printf("L'entier inversé est : %d\n", reversNum);
    return 0;
}