#include <stdio.h>
#include <string.h>

int main() {
    char texte[] = "Quel sinistre mot !";
    char lettre;
    int position, i;

    // Recherche de la lettre 'm'
    position = -1;
    for (i = 0; i < strlen(texte); i++) {
        if (texte[i] == 'm') {
            position = i;
            break;
        }
    }

    if (position != -1)
        printf("La lettre 'm' se trouve à la position : %d\n", position);
    else
        printf("La lettre 'm' n'a pas été trouvée dans le texte.\n");

    // Recherche de la première lettre 's'
    position = -1;
    for (i = 0; i < strlen(texte); i++) {
        if (texte[i] == 's') {
            position = i;
            break;
        }
    }

    if (position != -1)
        printf("La première lettre 's' se trouve à la position : %d\n", position);
    else
        printf("La lettre 's' n'a pas été trouvée dans le texte.\n");

    // Echanger la lettre 'm' et la lettre 's'
    for (i = 0; i < strlen(texte); i++) {
        if (texte[i] == 'm')
            texte[i] = 's';
        else if (texte[i] == 's')
            texte[i] = 'm';
    }

    printf("Le texte modifié est : %s\n", texte);

    // Demande à l'utilisateur de saisir une lettre
    printf("Entrez une lettre : ");
    scanf(" %c", &lettre);

    // Recherche de la lettre saisie dans le texte
    position = -1;
    for (i = 0; i < strlen(texte); i++) {
        if (texte[i] == lettre) {
            position = i;
            break;
        }
    }

    if (position != -1)
        printf("La lettre '%c' se trouve à la position : %d\n", lettre, position);
    else
        printf("La lettre '%c' n'a pas été trouvée dans le texte.\n", lettre);

    return 0;
}