#include <stdio.h>
#include <stdlib.h>

int main()
{
  char charac;
  printf("entrer un caractere :  ");
  scanf("%c", &charac);
  if('a'<=charac && charac<='z'){
    printf("le caractere est un alphabet miniscule");
  }else if('A'<=charac && charac<='Z'){
    printf(" le caractere est un alphabet MAJUSCULE");
  }else{
   printf(" le caractere n'est pas un alphabet");
  }
    return 0;
}
