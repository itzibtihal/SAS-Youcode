#include <stdio.h>

int main() {
    double num1, num2, num3;
    
    printf("Merci d'entrer le premier nombre : ");
    scanf("%lf", &num1);
    
    printf("Merci d'entrer le deuxième nombre : ");
    scanf("%lf", &num2);
    
    printf("Merci d'entrer le troisième nombre : ");
    scanf("%lf", &num3);
    
    double somme = num1 + num2 + num3;
    double moyenne = somme / 3; 
    
    printf("La somme des trois nombres est : %.2lf\n", somme);
    printf("La moyenne des trois nombres est : %.2lf\n", moyenne);
    
    return 0;
}
