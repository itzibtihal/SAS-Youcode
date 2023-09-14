#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a;
 int b;
 int s;
 int tSom;
 printf("a= ");
 scanf("%d", &a);
 printf("b= ");
 scanf("%d", &b);
 s=a+b;

 if(a!=b){
    printf("la somme de a et b est : %d ", s);
 }else{
     tSom=s*3;
     printf("triple de la somme : %d", tSom);
 }

    return 0;
}
