#include <stdio.h>
#include <string.h>

// parole prova dinamo domani
int main(int argc, char *argv[])
{
    int n1=strlen(argv[1]) , n2=strlen(argv[2]),count=0;
    if(n1!=n2){
        printf("%d ,%d ", n1 ,n2);
        printf("inserisci 2 parole con lo stesso numero di lettere\n");
        return 0;
    }
        for(int i=0 ; i<n1 ; i++){
             for(int j=0 ; j<n1 ; j++){
                if(argv[1][j]==argv[2][i])
                    count++;
                else
                    ;
             }
        }
        if(count == n1)
            printf("la parole sono anagrammi\n");
        else
            printf("la parole non sono anagrammi\n");
return 0 ;
}
