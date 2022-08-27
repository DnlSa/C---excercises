#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAXLENS 100
int  convert(char str[],int q);
int main(int argc, char *argv[])
{
    int n=strlen(argv[1]);
    char str[MAXLENS];
    printf("il numero binario inserito è : %s\n", argv[1]);
    if(n>24)
        printf("Errore stringa piu lunga di 24 bit");
    else
        printf("il valore convertito è: %d\n",  convert(argv[1],n) );
return 0 ;
}
int  convert(char str[],int q)
{
   int  x=0,i,j=0;
    for(i=q-1; i>=0; i-- ){
       if(str[i]-'0'){
            x+=pow(2, j  );
            j++;
      }else
        j++;
    }
return x;
}
