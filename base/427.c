#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
    int N=atoi(argv[1]),i=0,j;
    int vector1[N],vector2[N],vector3[N];

    printf("inserisci i bit dal meno significativo del primo numero : \n");
    for (j=N-1; j>=0 ; j--)
            scanf("%d", &vector1[j]);


    printf("inserisci i bit dal meno significativo del secondo numero : \n");
    for (j=N-1; j>=0 ; j--)
            scanf("%d", &vector2[j]);

    // somma dei numeri binari
    for (j=N-1; j>=0 ; j--){


        if(vector1[j]+vector2[j]+i==2){
            vector3[j]=0+i;
            i=1;
        }

        else if (vector1[j]+vector2[j]+i==3){
                vector3[j]=1;
                i=1;
        }

        else if (vector1[j]+vector2[j]+i==1 ){
            vector3[j]=1;
            i=0;
        }
        else
            vector3[j]=0;
    }

    if(i==1)
        printf("c'e overflow\n");

printf("il risultato è: ");

for (j=0; j<=N-1 ; j++)
        printf("%d", vector3[j]);

printf("\n");

return 0;
}
