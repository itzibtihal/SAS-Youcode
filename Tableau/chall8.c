#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Lmax 10 
#define Cmax 10
int main (){
   

   int C, L ,i ,j , W ,k;
   int T[Lmax][Cmax];
   
   do
   {
      printf("Entrez le nombre de lignes (L) : ");
      scanf("%d", &L);
      printf("Entrez le nombre de colonnes (C) : ");
      scanf("%d", &C);

   } while ( L < 0 || C < 0 || C > Cmax || L > Lmax );
   
    
      // Remplir le tableau 
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("Entrez la valeur pour T[%d][%d] : ", i, j);
            scanf("%d", &T[i][j]);
           
        }
    }
     

     // AFFICHAGE DU TABLEAU T 
      
       // Afficher le tableau
    printf("Tableau T :\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    W = L * C ;

    int V [W] ;

     // echange de valeur
       
       i = 0 ;
       
         for ( j = 0; j< L; j++)
         {
            for ( k= 0; k < C; k++)
            {
               V[i]= T[j][k] ;
               i++ ;
            }
            
         }
         
      
       
     // AFFICHAGE  DU TABLEAU V 

     printf("Tableau V:\n");
    for (i = 0; i < W; i++) {
        
            printf("%d ", V[i] );
      
        
    }
     
    









    return 0;
}