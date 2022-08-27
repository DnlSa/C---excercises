#include <stdio.h>

int main()
{
    int n ;
    double result = 0 ;
    printf("inserisci un numero per la serie: ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++)
        result += (double)1/i;

    printf("il risultato della serie e : %.2lf\n", result);
    return 0 ;
}
