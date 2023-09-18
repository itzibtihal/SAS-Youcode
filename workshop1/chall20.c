#include <stdio.h>
#include <stdlib.h>

int main()
{
     int num ,i ;
    printf("table de muptiplication programme : \n");
    printf("enter le nombre que vous souhaitez : \n");
    scanf("%d",&num);

    printf("************************************ \n");
      printf("table de multiplication de %d : \n",num);
      for ( i = 1 ; i < 11; i++)
      {
        printf(" %d * %d = %d \n",num,i,num*i);
      }
      
    printf("************************************ \n");


    return 0;
}
