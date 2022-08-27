#include <stdio.h>
#include <stdlib.h>

double fatt(int n);

int main(int argc , char *argv[])
{
    int n = atoi(argv[1]);
    printf("il fattoriale e: %.0lf\n",fatt(n));
    return 0;
}

double fatt(int n)
{
    double k=1;
    for (int i=n ; i>0 ;i-- )
        k*=i;
return k;
}
