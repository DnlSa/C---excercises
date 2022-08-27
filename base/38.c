#include <stdio.h>
#include <stdlib.h>
int main(int argc , char *argv[])
{
     if(argc<=1 || argc>2){
        printf("inserisci un solo argomento\n" );
        return 0 ;
     }else {
    int n=atoi(argv[1]);

    char *mesi[]={"inserisci un numero da 1 a 12","Gennaio", "Febbraio", "Marzo", "Aprile", "Maggio", "Giugno","Luglio","Agosto","Settembre","Ottobre" , "Novembre","Dicembre"};

    printf("%s\n",(n<1 || n>12) ? mesi[0] : mesi[n]);
     }
return 0;
}
