#include <stdio.h>
#include <string.h>


#define MAXNAME 20
#define MAXCAPACITA 100



int main()
{

    char prodotti[MAXCAPACITA][MAXNAME]; // array di prodotti inseriti
    char string[MAXNAME];//  lettera di comando da passare
    int n,count=0;
    // ciclo di inserimenti

        scanf("%s", string);
        n=strlen(string);
        prodotti[count][n] = *string;


        printf("%s\n",prodotti[0]);
        count++;
return 0 ;
}
