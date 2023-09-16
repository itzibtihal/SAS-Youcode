#include <stdio.h>

int main (){
     // declarer les variables  (moyenne)
    int  moy ;
      // LES NOTES 
    float nt1, nt2, nt3, nt4, nt5, nt6 ;
   printf("entrer vos note :\n");
   scanf("%f", &nt1);
   scanf("%f", &nt2);
   scanf("%f", &nt3);
   scanf("%f", &nt4);
   scanf("%f", &nt5);
   scanf("%f", &nt6);
   
   // CALC DU MOYENNE 
   moy=(nt1+nt2+nt3+nt4+nt5+nt6)/6;
   printf("la moyenne est: %f \n ", moy);

   if(moy>= 16){
    printf("montion tres bien");
   }else if(14<=moy && moy<16){
   printf("montion bien");
   }else if(12<=moy && moy<14){
       printf("montion assez bien");
   }else if(10<=moy && moy<12){
   printf("montion passable");
   }else{
   printf("recale");
   }
    return 0;
    
    return 0 ;

}