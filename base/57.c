#include <stdio.h>


int main()
{
    int vector[]={1,10,15,18};
    int n=sizeof(vector)/sizeof(int);
    int i;

    // stampa del vettore inserito
    printf("il vettore inserito è: ");
    for(i=0;i<n;i++)
        printf("%d ",vector[i]);
    printf("\n");
    //shift sinistro
    for(i=0;i<n;i++)
        vector[i]=vector[i+1];
    vector[n-1]=0;
    printf("il vettore shiftato a SX è: ");
    //stampa la merdaccia fatta 10/15/18/0
    for(i=0;i<n;i++)
        printf("%d ",vector[i]);
    printf("\n");

     //shift destro
     for(i=n-1;i>=1;i--)
        vector[i]=vector[i-1];
    vector[0]=0;

    //stampa la merdaccia fatta
    printf("il vettore shiftato a DX è: ");
    for(i=0;i<n;i++)
        printf("%d ",vector[i]);
    printf("\n");
return 0 ;
}
