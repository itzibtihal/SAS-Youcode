#include <stdio.h>

int main() {
    int annee, choix;
    int jours, heures, minutes, secondes;

    printf("Programme de conversion d'annee\n");
    printf("Entrez une annee : ");
    scanf("%d", &annee);

    printf("Menu de conversion : \n");
    printf("1. Convertir en mois\n");
    printf("2. Convertir en jours\n");
    printf("3. Convertir en heures\n");
    printf("4. Convertir en minutes\n");
    printf("5. Convertir en secondes\n");
    printf("Entrez votre choix (1-5) : ");
    scanf("%d", &choix);
     
    

    switch (choix) {
        case 1:
            jours = annee * 365;
            printf("%d annees equivalent a environ %d mois.\n", annee, jours / 30);
            break;
        case 2:
            jours = annee * 365;
            printf("%d annees equivalent a environ %d jours.\n", annee, jours);
            break;
        case 3:
            jours = annee * 365;
            heures = jours * 24;
            printf("%d annees equivalent a environ %d heures.\n", annee, heures);
            break;
        case 4:
            jours = annee * 365;
            heures = jours * 24;
            minutes = heures * 60;
            printf("%d annees equivalent a environ %d minutes.\n", annee, minutes);
            break;
        case 5:
            jours = annee * 365;
            heures = jours * 24;
            minutes = heures * 60;
            secondes = minutes * 60;
            printf("%d annees equivalent a environ %d secondes.\n", annee, secondes);
            break;
        default:
            printf("Choix invalide.\n");
            break;
    }

    return 0;
}
