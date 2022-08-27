#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
    if(argc<2 || argc >3)
        printf("inserisci 2 valori\n");
    else{
       int A = atoi(argv[1]) , B = atoi(argv[2]), temp ;
       printf("il  numero massimo è : %d\n" ,(A>B)? A : B);
        }
return 0 ;
}
