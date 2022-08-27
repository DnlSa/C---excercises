#include <stdio.h>
#include <stdlib.h>
int main(int argc , char *argv[])
{
    int c, prec , suc;
    if(argc>2)
        printf("passa un solo valore");
    else{
        c= atoi(argv[1]);
        suc= c+1;
        prec = c-1;
        printf("successivo = %d attuale = %d precedente = %d \n", suc , c , prec);
    }
return 0;
}
