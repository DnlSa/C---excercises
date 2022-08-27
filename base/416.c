#include <stdio.h>
#include <stdlib.h>

#define MAXLENS 100

int main(int argc , char * argv[])
{
    int N=atoi(argv[1]);
    int i=0,div=1,j;
    int vector[MAXLENS];

    while(div<=N)
    {
        if(N % div)
            div++;
        else{
            vector[i] = div ;
            i++;
            div++;
        }
    }

    if(vector[0]==1 && vector[1]==N)
        printf("e un numero primo");
    else{
        printf("i divisori sono : ");
        for(j=0 ; j<i;j++)
            printf("%d ",vector[j]);

    }
printf("\n");
return 0 ;
}





