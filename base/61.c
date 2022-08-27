#include<stdio.h>
#include<string.h>

#define DIM 100

//ciao_mi_chiamo_danilo_e_vengo_da_alatri  stringa prova


void countchar(char stringa[],int n);

int main(int argc , char *argv[])
{
    char vocali[]="aeiou";
    char stringa[DIM]="ciaoatutti"; // essendo non dichiarata subito mi serve definirgli per forza una grandezza
   // printf("inserisci la stringa: ");
   // scanf("%s",stringa);
    int n=strlen(stringa);
    int voc=strlen(vocali);
    int k=0,i,j;


    for(i=0;i<n;i++){
           for(j=0;j<voc;j++){
                if(stringa[i]==vocali[j]){
                    k++;
                }else
                    ;
           }
       }
        printf("la stringa e lunga: %d\n",n);
        printf("le consonanti sono: %d\n",n-k);
        printf("le vocali sono: %d\n",k);

    //ricorrenze delle lettere nella stringa facciamo come abbiamo fatto con i numeri
      countchar(&stringa[0],n);

return 0 ;
}

void countchar(char stringa[],int n)
{
    int i=0,count,j=0;
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n; ++j){
            if(stringa[i]==stringa[j] && stringa[i] != '0'){
                count++;
                stringa[j]='0';
            }else
                ;
        }
        if(stringa[i] != '0')
            printf("la lettera occorre : %c , %d\n",stringa[i] , count);
        else
           ;
    }
}
