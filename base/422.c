#include <stdio.h>

int main(void)
{
    int n,T=0,Q=0,P=0,i=0;
    printf("inserisci un intero n: ");
    scanf("%d",&n);

    while(i<=n)
        T+=i++;

    printf("il numero Triangolare : %d\n",T);

    for(i=1 ; i<=n ; i++)
        Q+=(2*i-1);

    printf("il numero quadrato : %d\n",Q);

     for(i=1 ; i<=n ; i++)
        P+=(3*i-2);

    printf("il numero Pentagonale : %d\n",P);
return 0 ;
}
