#include <stdio.h>
#include <stdlib.h>

int main()
{
  char c;
  printf("entrer un caractere :  ");
  scanf("%c", &c);
  if('a'<=c && c<='z'){
    printf("le caractere est un alphabet miniscule");
  }else if('A'<=c && c<='Z'){
    printf(" le caractere est un alphabet MAJUSCULE");
  }else{
   printf(" le caractere n'est pas un alphabet");
  }

    return 0;
}
