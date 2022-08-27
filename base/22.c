#include<stdio.h>
#include<stdlib.h>
// grzie alla funzione atoi riesco a smmare tutti in numeri che voglio
int main(int argc , char *argv[])
{
    int sum=0;
    int i=0;
    while(i<argc){
        sum+=atoi(argv[i]);
        i++;
    }
    if(sum == 0)
        printf("inserisci dei numeri validi \n ");
    else
        printf("%d", sum);
    return 0;
}
