#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
    if(argc<4 || argc >4)
        printf("inserisci 3 valori\n");
    else{
       int A = atoi(argv[1]) , B = atoi(argv[2]), C = atoi(argv[3]);
       printf("il  numero massimo è : %d\n" ,((A>B)? (A>C)? A:C  : (C>B)? C : B));
        }
return 0 ;
}
