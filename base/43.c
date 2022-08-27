#include <stdio.h>
int main()
{
    int sum=0,c;
    do{
        printf("inserisci un numero : ");
        scanf("%d",&c);
        sum+=c;
    }while(c!=0);
printf("la somma è = %d\n", sum);
return 0;
}
