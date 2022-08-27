#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
    int N=atoi(argv[1]),j=0;
    int vector[N];

    for(int i=0; i<N; i++)
        scanf("%d",&vector[i]);


    for(int i=0; i<N; i++){
        printf("Elemento %d : %d ", i , vector[i]);
        for(j=0; j<vector[i]; j++)
            printf("*");
        printf("\n");
    }
return 0;
}
