#include <stdio.h>
#include <string.h>

#define MAXLENS  30

int main(int argc , char *argv[])
{
    int n_nomi = argc-1;
    int temp=0 , min=argv[1][0], i ,n ;
    char *string[0];
    printf("sono stati inseriti : %d nomi\n" , n_nomi); // il numero di nomi inseriti in input


    for (i=1 ; i<argc  ; i++){

        if(argv[1][0]>=argv[i][0]){
            min=argv[i][0];
            string[0]= argv[i];
        }else
            ;
    }
 printf("il nome che viene prima è : %s\n" , *string);

   for (i=2 ; i<argc  ; i++){

        if(strlen(argv[i-1])<=strlen(argv[i])){
            n=strlen(argv[i]);
            string[0]= argv[i];
        }else
            ;
    }
 printf("il nome piu lungo è : %s , con %d lettere \n" , *string , n );
    return 0;
}
