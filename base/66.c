#include <stdio.h>
#include <string.h>
#define MAXLENS 30

char  *minus(char str[],int n); //mi deve tornare il puntatore alla  stringa modificata
int palindrome(char *string [],int n); // mi deve tornare 1 se palindroma 0 se non

int main(int argc,char *argv[])
{
    int n=strlen(argv[1]);
    char *string[0]; // dichiarato 1 array che contiene solamente 1 elemento

    if(n>MAXLENS){   // controllo se la parola immessa e piu lunga di 30 caratteri
        printf("parola troppo lunga");
        return -1;
    }
    printf("la parola inserita è: %s\n", argv[1]);  //  stampa la parola inserita da tastiera

    // qua sta il problema devo far restituire una stringa da memorizzare

    string[0]= minus(argv[1],n);// passo la stringa in input e mi deve tornare il l indirizzo DI ARGV[1] con la stringa modificata
    printf("la parola minuscola è: %s\n",*string); // stampo la stringa da indirizzo che mi e tornato

    if(palindrome(&string[0],n)) // verifica del palindromo
        printf("la parola e palindroma\n");
    else
        printf("la parola non e palindroma\n");

return 0;
}
char  *minus(char str[],int n)  // dentro e dichiarato argv passato come stringa classica che viene modificata  con return str mi ritorna argv[1] essendo la fuznuone dichiarata come puntatore allora mi torna l indirizzo del primo alemento di ARGV
{
    for(int i=0; i<n ; i++){
        if(str[i]>=65 && str[i]<90)
            str[i]+=32;
        else
            ;
    }
return str;
}

// VERIFICA SE PALINDROMA  passo il puntatore a stringa con il classico metodo ed essendo che string[0] punta la parola non posso iterare li allora aumento la profondita dichiarando anche l altra dimensione del vettore
int palindrome(char *string[], int n)
{
// classica condizione di merda per trovarti le palindrome
     int k=0,i,q=(n-1)/2;
    for(i=n-1; i>=q;i--){
        if(i==k || k==i+1){
            return 1;
        }else if(string[0][k] == string[0][i])
            k++;
        else
            ;
    }
return 0 ;
}
