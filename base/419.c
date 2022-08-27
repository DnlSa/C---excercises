#include <stdio.h>

int main()
{
    int n1 ,n2 ,MCD,i,q,e;
    printf("inserisci il primo numero : ");
    scanf("%d",&n1);
    printf("inserisci il secondo numero : ");
    scanf("%d",&n2);
    for(i=2 ; i<=n1 ; i++){
        q= n1%i ;
        e = n2%i ;
        if(  q== 0 && e== 0){
            MCD = i;
            break;
        }else
            ;
    }
printf("il MCD è: %d\n", MCD);
return 0 ;
}
