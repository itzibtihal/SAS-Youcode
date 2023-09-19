#include <stdio.h>

void Permuter(int a, int b) {
    int z = a;
    a = b;
    b = z;
}

int main() {
    int x , y ;
    printf("entrer le premier nombre : \n");
    scanf("%d",&x);
    printf("entrer le deuxiéme nombre : \n");
    scanf("%d",&y);
    
    printf("Avant la permutation : x = %d, y = %d \n", x, y);
    
     // Appel de la fonction Permuter 
      Permuter(&x, &y);
    
    printf("Après la permutation : x = %d, y = %d \n", x, y);
    
    return 0;
}