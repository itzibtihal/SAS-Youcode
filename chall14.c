#include<stdio.h>

int main(){
    
     // declaration des entier 
     int a ;
     printf("programme qui verifier si le nomber est positif / negatif ou nul \n");
     printf("  merci d'enter un entier : \n");
     scanf("%d",&a);

     if (a > 0)
     {
         printf("le nombre %d que vous avez enter est un nomber positif  \n",a);
     } else if (a < 0)
     {
         printf("le nombre %d que vous avez enter est un nomber négatif \n",a);
     } else
     {
        printf("le nombre %d que vous avez enter est un nomber null \n",a);
     }
     
     

    return 0 ;
}