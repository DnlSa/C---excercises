#include <stdio.h>
#include <stdlib.h>

#define MAXLENS 100

int main (int argc  , char *argv[])
{
    int j,N= atoi(argv[1]),rest,i=0;
    int vector[MAXLENS];

    while(1)
    {
        if(N==0)
            break;

        else{
            rest=N%2;
            vector[i]=rest;
            i++;
            N=N/2;
        }
    }
printf("il numero in decimale è: ");
for(j=i-1 ; j>=0; j--)
    printf("%d",vector[j]);

printf("\n");
return 0 ;
}
