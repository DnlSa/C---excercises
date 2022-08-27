#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
    int N;
    double res=1 ;
    N= atoi(argv[1]);
     printf("il numero passato è : %d\n", N);
    for (N; N>0 ;N--)
        res*=N;

    printf("il riasultato del fattoriale : %.0lf\n",res);
return 0 ;
}
