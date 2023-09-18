#include <stdio.h>
#include <stdlib.h>

int main()
{
   
   int r , circonference;
   const int pi = 3.14 ;
    
    printf("Merci d'entrer le rayon de cercle : \n");
    scanf("%d",&r);
     
     circonference = 2 * pi * r ;

    printf(" la circonférence de votre cercle du rayon r = %d est \n", r);
    printf(" %d  " , circonference);
    return 0;
}
