#include <stdio.h>
#include <stdlib.h>

void comp(int vector[0],int vector2[0],int N);

int main(int argc, char *argv[])
{
    int N= atoi(argv[1]),i;
    int vector[N];
    int vector2[N];

    // inserisco il numero binario da piu significativo
    for(i=0;i<N;i++)
        scanf("%d",&vector[i]);

    //stampa il numero bianario prossima sringa stampata deve iniziare con \n
    printf("il numero complementato a 2 inserito è: " );
    for(i=0;i<N;i++)
        printf("%d ",vector[i]);

    // calcolo dell opposto del numero compplementato funzione che modifica il vettore stesso
    comp(&vector[0],&vector2[0],N);


    //stampa il numero bianario complementato prossima sringa stampata deve iniziare con \n
    printf("\nil numero opposto è: " );
    for(i=0;i<N;i++)
        printf("%d ",vector2[i]);

printf("\n");
return 0;
}


void comp(int vector[], int vector2[],int N)
{
    int i,k=0,j;
    for(i=N-1;i>=0;i--){

        if(vector[i]==1 && k==0){
            vector2[i]=1;
            for(j=i-1;j>=0;j--){
                if(vector[j])
                    vector2[j]=0;
                else
                    vector2[j]=1;
            }
            k++;
        }
        else if (k)
            break;
        else
            vector2[i]=0;
        }
}
