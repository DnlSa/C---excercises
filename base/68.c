#include <stdio.h>
#include <string.h>


int main (int argc, char *argv[])
{
    int n1=strlen(argv[1]),n2=strlen(argv[2]);
    int count=0,k=0;
    // puntatore a stringa
    char *min[0];
    char *MAX[0];

    // sistemazione delle strighe piu lunghe e piu corte
    if(n1<n2){
            min[0]=argv[1];
             MAX[0]=argv[2];
    }else{
         min[0]=argv[2];
         MAX[0]=argv[1];
    }

// CONTROLLO DELLA STRINGA NON SUPERIORE AI 30 CARATTERI
    if(n1>30 || n2>30){
        printf("parola inserita troppo lunga");
        return 0;
        }

    int i = strlen(MAX[0]);
    printf("la parola piu lunga : %d , %s\n", i, MAX[0]);
    i = strlen(min[0]);
    printf("la parola piu corta : %d , %s\n", i, min[0]);

    for(int j=0 ; j<strlen(MAX[0]); j++){
        if(min[0][k]==MAX[0][j]){
            count++;
            k++;
            if(count==strlen(min[0])){
                printf("esiste la sottostringa\n" );
                return 0;
            }
        }else{
            count=0;
            k=0;
        }
    }
printf(" NON esiste la sottostringa\n" );
return 0 ;
}
