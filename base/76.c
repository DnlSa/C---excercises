#include <stdio.h>
#include <string.h>

#define MAXNAME  40
#define MAXNUMBER 20
#define MAXVOICE 100

// inserisce nome e numero in rubrica
void newvoice(int count);

// stampa tutte le voci
void printall(int count);

//cerca un nome in particolare
int search_name(char *str,int count,int len);

int search_car(char car,int count);

struct rubrica{
    char nomi[MAXNAME];
    char number[MAXNUMBER];
}voice[MAXVOICE];



int main()
{
    int N,count=0,j,len;
    char s_name[MAXNAME];
    char *str,car;

    printf("1-aggiungi in rubrica\n2-ricerca esatta per nome\n3-ricerca approsimata in rubbrica\n4-stampa la rubrica completa\n0-esci dal programma\n");
    while (1){

    printf("inserisci il numero : ");
    scanf("%d",&N);
    switch(N){

        case 0:
            return 0 ;

        case 1:
            newvoice(count);
            count++;
            printf("voce inserita in rubbrica\n");
            break;

        case 2:
            printf("inserisci un nome da cercare in rubrica: ");
            scanf("%s",s_name);
            len=strlen(s_name);
            str=s_name;
            search_name(str,count,len);
            break;

        case 3:
            printf("inserisci un carattere da cercare: ");
            scanf("%c", &car); // salta sempre quest istruzione
            search_car(car,count);
            break;


        case 4:
            printall(count);
            break;


        default:
            printf("inserisci un numero valido\n");
        }
    }
return 0;
}


void newvoice(int count)
{
    printf("inserisci il nome che vuoi inserire: ");
    scanf("%s",voice[count].nomi);

    printf("inserisci il suo numero: ");
    scanf("%s",voice[count].number);

}


void printall(int count)
{
    for(int i=0; i<count ; i++)
        printf("%s , %s \n",voice[i].nomi , voice[i].number );

}

int search_name(char *str,int count,int len)
{
     int k=0;
     for(int i=0; i<count ; i++){
         char *string=voice[i].nomi;
         for(int j=0 ; j<len ; j++){
            if(string[j]==str[j])
                k++;
            else
                ;
         }
         if(k==len){
                printf("%s , %s \n",voice[i].nomi , voice[i].number );
                return 0;
         }else
             ;
     }
printf("nome non presente in lista\n");
return -1 ;
}

int search_car(char car,int count)
{
    int k=0;
     for(int i=0; i<count ; i++){
         char *string=voice[i].nomi;
            if(string[0]==car)
                printf("%s , %s \n",voice[i].nomi , voice[i].number );
            else
                ;
         }
         if(k!=0)
            return 0;

printf("carattere non presente in lista\n");
return -1 ;
}
