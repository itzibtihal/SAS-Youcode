#include <stdio.h>
#include <math.h>

int a , b , c , d ;

int Max_2 (a , b){
    int maxN ;
     if (a > b)
     {
        maxN = a ;
     }
      return maxN ;
}
 
int Max_4 (int a , int b , int c , int d){
     int res1 ;
     int res2 ,Max;

     res1 = Max_2(a,b);
     res2 = Max_2 (c,d);
     Max = Max_2(res1 , res2);
    
    return Max ;

}
int main (){

    printf("entrer le premier nombre : \n");
    scanf("%d",&a);
    printf("entrer le deuxiéme nombre : \n");
    scanf("%d",&b);
    printf("entrer le troisiéme nombre : \n");
    scanf("%d",&c);
    printf("entrer le quatriéme nombre : \n");
    scanf("%d",&d);
    
  

     printf("le max est  %d" , Max_4(a,b,c,d));

}