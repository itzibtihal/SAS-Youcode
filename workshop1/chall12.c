#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  float x, x1, x2, a, b, c,d ;

  printf("enter les parametre de l'equation : \n");
  printf("a =");
  scanf("%f", &a);

  printf("b =");
  scanf("%f", &b);

  printf("c =");
  scanf("%f", &c);

  d=(b*b)-(4*a*c);

  if(d>0){
        x1=(-b-(sqrt(d)))/(2*a);
        x2=(-b+(sqrt(d)))/(2*a);
    printf("il y a deux solutions qui sont: %f et %f", x1, x2);

  }else if(d==0){
        x=(-b)/(2*a);
        printf("il y a une seul solution a l'equation c'est : %.2f", x);
  }else{
    printf("il n'y a pas de solution");
  }
    return 0;
}
