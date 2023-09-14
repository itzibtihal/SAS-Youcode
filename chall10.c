#include <stdio.h>
#include <stdlib.h>

int main()
{
 char charac;
 printf("saisir un  caractere : ");
 scanf("%c", &charac);
 switch(charac){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      printf(" %c est une voyelle", charac);
      break;

    default:
      printf(" %c n'est pas un voyelle", charac);
    }
    return 0;
}
