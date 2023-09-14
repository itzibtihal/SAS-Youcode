#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , y , z ,k ;
    printf(" merci d ' entrer  un entier a trois chiffres : \n");
     printf(" le 1er :  \n");
    scanf("%d",&x);
    printf(" le 2eme :  \n");
    scanf("%d",&y);
    printf(" le 3eme :  \n");
    scanf("%d",&z);

    printf(" vous avez enter %d%d%d \n",x,y,z);
   
    k = x ;
     x = z ;
     z = k ;
     printf("l'ordre inverse est : %d%d%d \n",x,y,z);
   
    return 0;
}