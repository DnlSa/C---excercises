#include <stdio.h>
int main()
{
    double n,i=0; //primi n numeri da stampare
    double n1=0  ,n2=1 , n3=1;
    printf("inserisci un numero: ");
    scanf("%lf",&n);
    while(i<n){ // mi serve per stampare i primi n numeri della serie
        printf("%.0lf ",n3);
        n3=n2+n1; // calcolo fibbonacci
        n1=n2;
        n2=n3;
        i++;
    }
    printf("\n");
    return 0 ;
}
