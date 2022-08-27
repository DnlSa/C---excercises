#include <stdio.h>
#include <stdlib.h>
int main(int argc , char *argv[])
{
    int tentativi = 10, c , N= atoi(argv[1]);
    printf("inserisci un numero : ");
    while(tentativi != 0)
    {
    scanf("%d" ,&c);
    if(c==N){
        printf("Hai vinto\n");
        return 0 ;
    }else if(c>N)
        printf("troppo alto ");
    else
        printf("troppo basso ");
    printf("riprova\n");
    tentativi--;
    }
printf("Hai perso\n");
return 0;
}
