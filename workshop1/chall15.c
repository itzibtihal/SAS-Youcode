#include<stdio.h>
int main (){

    char charac[1];
    


    printf(" merci d'entrer un caractère  : \n ");
     scanf("%c",charac);
     // convert the character en ascii 
     // condition 
     if(65<=charac && charac<=90){
        printf("le caractere est un alphabet MAJUSCULE");
    }else{
    printf("le caractere n'est pas en majuscule");
    }
     
    return 0 ;
}