#include<stdio.h>
#include<time.h>

int main (){
    
    int T[10];
    
    int i ;
/*
// initialisation de rand 
      srand(time(NULL)) ;
      // remplissage du tableau automatiquement 
      for( i = 0 ; i < 10 ; i++){
            T[i] = rand ();
     }*/

     
      // saisie des données

    for ( i = 0; i < 10 ; i++)
    {
        
            printf("T[%d] : ", i+1 );
            scanf("%d",&T[i]);
        
        printf(" \n") ;
    
    }
       // affichage du tableau

   printf("le Tableau donné :\n");
  for ( i = 0; i < 10; i++)
   {
        printf("  %d  , \t",T[i]);
        printf(" \n");
     }
     
     printf("\n");


     return 0;
   
}