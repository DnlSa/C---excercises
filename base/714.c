#include <stdio.h>
#include <string.h>

#define MAXLEN 20
#define TENTATIVI 10

int main()
{
    char word[MAXLEN];
    char L='0';
    char string[MAXLEN];
    int count, j=0 ,flag=0,i;
    printf("Giocatore 1 ");
    printf("inserisci una parola: ");
    scanf("%s",word);

    int n=strlen(word); // conto le lettere inserite

    for(i=0;i<n ; i++){ // popolo la string con gli underscore
        string[i]='_';
    }
    // inizio a far giocare il secondo giocatore // while dove se raggiunge i 10 tentativi esce e hai perso il gioco
    printf(" Giocatore 2 TOCCA A TE\n");
    count=0;
    printf("inserisci le lettere :\n ");
    while (count < TENTATIVI)
    {
// non mi calcola la scanf


    scanf("%c", &L);
    if(L!='\n'){

    for(i=0;i<n ; i++){
        if(L == word[i] && L != string[i]){
            string[i]=word[i];
            j++;
        }else
            ;
    }
    if(j==n){
        printf("HAI VINTO\n");
        return 0 ;

    }else if(flag==j){ // flag mi segnala se ho inserito un carattere buono o no
        count++;
        printf("SBAGLIATO ti rimangono: %d\n", TENTATIVI-count);

    }else
       ;
    flag=j;
    printf("la parola : %s\n",string);
    }
    }
printf("la parola : %s\n",string);
printf("NON HAI VINTO \n");
return 0;
}
