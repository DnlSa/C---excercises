#include <stdio.h>
#include <string.h>
#define MAXNAME 20
#define MAXCAPACITA 100
int main()
{
    char prodotti[MAXCAPACITA][MAXNAME]; // array di prodotti inseriti
    int  quantita[MAXCAPACITA],count=0,k,n,i; // array delle quantita inserite
    char lettera;
    char string[MAXNAME];//  lettera di comando da passare
    char s1[] = "fine" ;
    // ciclo di inserimenti
    while(1){
        scanf("%s", string);
        strcpy(prodotti[count],string);

         if(strcmp(string, s1) == 0 )
                break;
        else{
            scanf(" %c %d",&lettera,&k);
            quantita[count]=k;
        for(i=0 ; i<count ; i++){
            if(strcmp(prodotti[i],prodotti[count])==0){
                if(lettera == 'E' || lettera == 'e'){
                    quantita[i]+=quantita[count];
                    count--;
                }else if (lettera == 'U' || lettera == 'u'){
                    quantita[i]-=quantita[count];
                    count--;
                }else{
                    printf ("LETTERA SBAGLIATA");
                    count--;
            }
        }   else
               ;
          }
           count++;
        }
    }
for(int i=0 ; i<count ; i++)
    printf("%s %d\n",prodotti[i],quantita[i]);
return 0 ;
}
