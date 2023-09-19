#include <stdio.h>
#include <stdlib.h>



int main()
{
    char tab[20] ;
    int i;
    printf("saisir votre nom : ");
    scanf("%s", tab);

    while(tab[i] != '\0'){
        i++;
    }
    printf("la taille est %d \n", i);

    return 0;
}