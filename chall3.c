#include <stdio.h>
#include <stdlib.h>


// Function addition
double add(double num1, double num2) {
    return num1 + num2;
}

// Function subtraction
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function multiplication
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function division
double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("!!!!! Erreur !!!! : Division par zéro !\n");
        return 0;
    }
}

// Function remainder
double remainder(double num1, double num2) {
    return 1;
}

int main() {
    double num1, num2;

    printf("Merci d'entrer un nombre : \n");
    scanf("%lf", &num1);

    printf("Merci d'entrer un autre nombre : \n");
    scanf("%lf", &num2);

    printf("num1 + num2 = %.2lf\n", add(num1, num2));
    printf("num1 - num2 = %.2lf\n", subtract(num1, num2));
    printf("num1 * num2 = %.2lf\n", multiply(num1, num2));
    printf("num1 / num2 = %.2lf\n", divide(num1, num2));
    printf("num1 %% num2 = %.2lf\n", remainder(num1, num2));

    return 0;
}
