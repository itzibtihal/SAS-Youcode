#include <stdio.h>
#include <stdlib.h>

int main()
{
  int jrs, anne, mois;
  printf("entrer une date comme 15/09/2023: ");
  scanf("%d/%d/%d", &jrs,&mois, &anne);
  switch(mois){
  case 1:
      printf("%d/janvier/%d", jrs, anne);
      
  case 2:
      printf("%d/fevrier/%d", jrs, anne);
      break;
  case 3:
      printf("%d/mars/%d", jrs, anne);
      break;
  case 4:
      printf("%d/avril/%d", jrs, anne);
      break;
  case 5:
      printf("%d/mai/%d", jrs, anne);
      break;
  case 6:
      printf("%d/juin/%d", jrs, anne);
      break;
  case 7:
      printf("%d/juiellet/%d", jrs, anne);
      break;
  case 8:
      printf("%d/oaut/%d", jrs, anne);
      break;
  case 9:
      printf("%d/septembre/%d", jrs, anne);
      break;
  case 10:
      printf("%d/octobre/%d", jrs, anne);
      break;
  case 11:
      printf("%d/novembre/%d", jrs, anne);
      break;
  case 12:
      printf("%d/decembre/%d", jrs, anne);
      break;
  }



    return 0;
}
