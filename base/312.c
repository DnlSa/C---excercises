#include <stdio.h>

int main()
{
    float A , B=0.15, min=5.00;

    printf("inserisci il prezzo del biglietto: ");
    scanf("%f",&A);

    if(A*B < 5)
        printf("la provvigione è : %.2f €\n", min );
    else
        printf("la provvigione è : %.2f €\n", A*B);
return 0;
}
