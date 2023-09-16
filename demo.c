#include <stdio.h>
#include <stdlib.h>

int main (){

        int numb , result;
          
       do
        {
            printf(" donnez un nombre entre 0 et 10  \n");
            scanf("%d",&numb);

        } while (numb < 0  || numb >10);
        
        
        for (int i = 0; i < 10; i++)
        {
            result = numb * i ;
            printf("%d * %d = %d \n",numb,i,result);
        }
        
}