#include <stdbool.h>
#include <stdio.h>


bool Premier(int nombre) {
    if (nombre <= 1) {
        return false; 
    }

    for (int diviseur = 2; diviseur * diviseur <= nombre; diviseur++) {
        if (nombre % diviseur == 0) {
            return false; 
        }
    }

    return true; 

int main() {
    int nombre;
    printf("Entrez un entier positif : ");
    scanf("%d", &nombre);

    if (Premier(nombre)) {
        printf("%d est un nombre premier.\n", nombre);
    } else {
        printf("%d n'est pas un nombre premier.\n", nombre);
    }

    return 0;
}
