#include <stdio.h>

int main()
{
    int n,k=1,j=0,count=1;
    printf("inserisci un numero : ");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        printf("\n");
        while(j<k){
            printf("%d ",count);
            count++;
            j++;
        }
        k++;
        j=0;
    }
printf("\n");
return 0 ;
}
