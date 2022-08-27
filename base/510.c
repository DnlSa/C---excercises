#include<stdio.h>

int main()
{
     int i,j,count=0;
     int vector[]={1,0,4,5,0,7,8,0,4,4,2,3,1,0,7,8,9,0,1,2,0};
     int N=sizeof(vector)/sizeof(int);
    for(j=0;j<N;j++){   // valore di riferimento
        count=0;  // reset del contatore
        for(i=0;i<N;i++){ // scansione per trovare i doppioni
            if(vector[j]==vector[i] && vector[j] != -1)
                count++;
            else
                continue;
            }
        // if che mi serve per evitare di stampare il valore -1 nell array
        if(vector[j]!=-1)
            printf("numero %d occorrenze %d \n", vector[j] , count );

        // for selettivo per eliminare il valore che ho finito di vedere
         for(i=j+1;i<N;i++){
            if(vector[j]==vector[i])
                vector[i]=-1;
            else
                continue;
        }
    }
return 0 ;
}
