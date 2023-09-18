#include <stdio.h>
#include <stdlib.h>
// remplissage auto 
#include <time.h>

// definir le max 
#define Lmax 20
#define Cmax 20

int main()
{
   
   int T [Lmax][Cmax], L ,C,i,j ,k;

   int TMIN ,AIDE ,TMAX;
   
   int pairs[Lmax * Cmax], impairs[Lmax * Cmax];
    int num_pairs = 0, num_impairs = 0; 


   do
   {
    
    printf("donnez les dimensions du tableau (max lg .%d et max col .%d) \n " , Lmax ,Cmax);
    scanf("  %d %d",&L ,&C);
    

   } while ( L <= 0 || C <= 0 || L > Lmax || C> Cmax );
   
   
    // saisie des données

    for ( i = 0; i < L ; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("T[%d][%d] : ", i+1 ,j+1 );
            scanf("%d",&T[i][j]);
        }
        printf(" \n") ;
    }
    

   // affichage du tableau

   printf("le Tableau donné :\n");
  for ( i = 0; i < L; i++)
   {
     for ( j = 0; j < C; j++)
     {
        printf("  %d \t",T[i][j]);
     }
     
     printf("\n");
   }
   printf(" \n");



   
       // remplissage automatique du tableau 

   /*
   
      

      // initialisation de rand 
      srand (time(NULL)) ;

      // remplissage du tableau automatiquement 

      for( i = 0 ; i < L ; i++){
        for( j = 0 ; j < C ; j++){
            T[i][j] = rand ();
        }
      }
   
   
   */



// tri des éléments dans un ordre
for (i = 0; i < L; i++) {
    for (j = 0; j < C - 1; j++) {
        // RECHERCHE DU MINIMUM A DROITE DE T[i][j]
        TMIN = j;
        for (k = j + 1; k < C; k++) {
            if (T[i][k] < T[i][TMIN]) {
                TMIN = k;
            }
        }

        // ECHANGE DE T[i][j] AVEC T[i][TMIN] SI i != TMIN
        if (TMIN != j) {
            AIDE = T[i][j];
            T[i][j] = T[i][TMIN];
            T[i][TMIN] = AIDE;
        }
    }
}



   printf("le Tableau trié par ordre croissant: \n");
   for ( i = 0; i < L; i++)
   {
     for ( j = 0; j < C; j++)
     {
        printf("  %d \t",T[i][j]);
     }
     
     printf("\n");
   }
   
printf("\n");

// Tri par ordre décroissant
    for (i = 0; i < L; i++) {
        for (j = 0; j < C - 1; j++) {
            // RECHERCHE DU MAXIMUM A DROITE DE T[i][j]
            TMAX = j;
            for (k = j + 1; k < C; k++) {
                if (T[i][k] > T[i][TMAX]) { // Inversion de la condition ici
                    TMAX = k;
                }
            }

            // ECHANGE DE T[i][j] AVEC T[i][TMAX] SI i != TMAX
            if (TMAX != j) {
                AIDE = T[i][j];
                T[i][j] = T[i][TMAX];
                T[i][TMAX] = AIDE;
            }
        }
    }

    printf("le Tableau trié par ordre décroissant : \n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("  %d \t", T[i][j]);
        }

        printf("\n");
    }
    
    printf("\n");

    // TRIER LE TABLEAU SELON NUM PAIRE ET IMPAIRE 
      
       for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            if (T[i][j] % 2 == 0) {
                pairs[num_pairs++] = T[i][j];
            } else {
                impairs[num_impairs++] = T[i][j];
            }
        }
    }
   
      
        // Tri des nombres pairs et impairs
    for (i = 0; i < num_pairs - 1; i++) {
        for (j = i + 1; j < num_pairs; j++) {
            if (pairs[i] > pairs[j]) {
                int AIDE = pairs[i];
                pairs[i] = pairs[j];
                pairs[j] = AIDE;
            }
        }
    }

    for (i = 0; i < num_impairs - 1; i++) {
        for (j = i + 1; j < num_impairs; j++) {
            if (impairs[i] > impairs[j]) {
                int AIDE = impairs[i];
                impairs[i] = impairs[j];
                impairs[j] = AIDE;
            }
        }
    }

    // Affichage des nombres pairs triés
    printf("Nombres pairs triés : ");
    for (i = 0; i < num_pairs; i++) {
        printf("%d ", pairs[i]);
    }
    printf("\n");

    // Affichage des nombres impairs triés
   
    printf("Nombres impairs triés : ");
    for (i = 0; i < num_impairs; i++) {
        printf("%d ", impairs[i]);
    }
    printf("\n");


    
   
    // SUPPRIMER  les entiers  repétés
    
    // Removing duplicates from the array
    int unique_elements[Lmax * Cmax];
    int num_unique = 0;

    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            int is_duplicate = 0;
            for (k = 0; k < num_unique; k++)
            {
                if (T[i][j] == unique_elements[k])
                {
                    is_duplicate = 1;
                    break;
                }
            }
            if (!is_duplicate)
            {
                unique_elements[num_unique++] = T[i][j];
            }
        }
    }

    // Display unique elements
    printf("Les éléments uniques du tableau:\n");
    for (i = 0; i < num_unique; i++)
    {
        printf("%d\t", unique_elements[i]);
    }
    printf("\n");


    return 0 ;
}


