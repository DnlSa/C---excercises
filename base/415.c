#include <stdio.h>
#include <stdlib.h>
int positive(int argc,char *argv[]);
int negative(int argc,char *argv[]);
int typesequence(int argc,char *argv[]);

int main(int argc,char *argv[])
// quando passo il l indirizzo del puntatore lo ridefinisco da 1 perche l elemento 0 e proprio il nome del programma
{
    printf("i positivi sono : %d \n" , positive(argc,&argv[1]));
    printf("i negativi sono : %d \n" , negative(argc,&argv[1]));

    int A=typesequence(argc,&argv[1]);
    switch(A){
        case 1:
            printf("la sequenza e crescente\n");
            break;
        case 2:
            printf("la sequenza e decrescente\n");
            break;
        case 3:
            printf("la sequenza e mista\n");
            break;
    }

return 0 ;
}
// importante che dopo aver passato l indirizzo del puntatore al primo carattere faccio partire il ciclo da 0 e non da 1
int positive(int argc,char *argv[])
{
    int k=0,i,N;
    for(i=0 ; i<argc-1 ; i++){

       N=atoi(argv[i]);
       (N>0) ? k++ : ' ' ;
    }
return k;
}

int negative(int argc,char *argv[])
{
    int k=0,i,N;
    for(i=0 ; i<argc-1 ; i++){
       N=atoi(argv[i]);
       (N<0) ? k++ : ' ' ;
    }
return k;
}


int typesequence(int argc,char *argv[])
{
    int k,N,Q,i;
        printf("argc: %d\n" , argc);
      for(i=0 ; i<argc-2 ; i++){
       N=atoi(argv[i]);
       Q=atoi(argv[i+1]);
        (Q>N)? k++ : ' ' ;
      }
      printf("k: %d\n" , k);
        if(k==argc-2)
            return 1;
        else if (k==0)
            return 2;
        else
            return 3;

}

/* argc non parte da 0 ma da 1 quindi se passo 9 argomenti conta esattamente 10 compreso il titolo

in un vettore invece parto sempre da 0 a contare quindi per riquadrare i conti e non mandare tutot in overflow devo togliere 2 unità ad argc 1 perche tolgo il titolo ridichiarando l indirizzo del vettore di puntatori e 1 per la discrepanza fra il conteggio di argomenti e i l indicazione del i esimo elemento del vettore di puntatori .
*/

