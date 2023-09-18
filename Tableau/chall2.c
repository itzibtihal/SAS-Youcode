#include<stdio.h>


int main (){
    int T[10];
    int i , j , Max , Min ;
     printf("MERCI DE REMPLIRE LE TABLEAU : \n");


// remplissage
     for ( i = 0; i < 10; i++)
     {
        printf("T[%d] : \n", i+1);
        scanf("%d",&T[i]);
     }
// affichage du tableau 
   printf(" votre tableau : \n");
   for ( i = 0; i < 10; i++)
     {
        printf("T[%d] : %d \n", i+1, T[i]);
     }




// le nombre le plus petit 
 for ( i = 0; i < 10; i++)
 {
     Min =i ;
     if (T[i] < T[Min])
     {
        Min = i ;
     }  
 }
// AFFICHAGE DE MIN
printf("le nombre le plus petit dans votre tableau est : \n");
printf("%d",T[Min]);
 printf("\n");

// LE NOMBRE LE PLUS GRAND 
Max = 0 ;
for ( j = 0; j < 10; j++)
 {
     if (  T[j] > T[Max])
     {
        Max = j ;
     }  
 }
// AFFICHAGE DE MAX
printf("le nombre le plus grand dans votre tableau est : \n");
printf("%d",T[Max]);
    
 return 0;
}