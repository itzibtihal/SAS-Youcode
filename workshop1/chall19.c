#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    

     // initialisation de rand 
      srand (time(NULL)) ;

      // CHOISIR un nombrebautomatiquement 
        
        int jour = (rand() % 8 ) ;

        printf(" %d \n" ,jour);
       
     // affiche  un des jours de la semaine
         switch (jour
         )
         {
         case 1:
            printf("lundi ");
            break;

        case 2:
            printf("mardi");
            break;
        case 3:
            printf(" mercredi");
            break;
        case 4:
            printf("jeudi");
            break;
        case 5:
            printf("vendredi");
            break;
        case 6:
            printf("samedi");
            break;
         
         default:
             printf("dimanche");
            break;
         }
      

    return 0;
}