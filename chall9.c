#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num;
 printf("entrer un nombre : ");
 scanf("%d", &num);
 if(num%2==0){
    printf("le nombre est pair");
 }else{
 printf("le nombre est impair");}
    return 0;
}