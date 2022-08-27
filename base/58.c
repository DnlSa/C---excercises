#include<stdio.h>
#include <stdlib.h>

// questa funzione torna 1 se l elemento che sto vedendo e gia presente nel vettore2
int occorrenze(int vector2[],int n,int N);

int main(int argc, char *argv[])
{
    // parte di gestione input esterno

/*  int N=atoi(argv[1]);
    int vector[N], vector2[N];

// operazione di inserimento del vettore

    for(i=0;i<N;i++)
        scanf("%d",&vector[i]);
*/
    int i,n,k=0;
     int vector[]={1,0,4,5,0,7,8,0,4,4,2,3,1,0,7,8,90,0,1,2,0};
     int N=sizeof(vector)/sizeof(int),vector2[N];
     for(i=0;i<N;i++){
         n=vector[i];
         if(n==0 || occorrenze(&vector2[0],n,k)==1)
            ;
         else {
             vector2[k]=vector[i];
            k++;
         }
     }

printf("il vettore risultante è: " );
for(i=0;i<k;i++)
    printf("%d ",vector2[i]);

printf("\n" );
return 0 ;
}

int occorrenze(int vector2[],int n,int k)
{   int i;
    for(i=0; i<k;i++)
        if(vector2[i]==n)
            return 1;
        else
            continue;
return 0 ;
}
