#include <stdio.h>

#define MAXLEN 100

int main()
{
    int n,count=0, j=0;
    int array[MAXLEN];
    while(1){
     scanf("%d",&n);
     if(n==0)
         break;
     else
        array[count++]=n;
    }
    for(int i=0 ; i<count ; i++){
        if(array[i]==array[i+1])
            j++;
        else
            ;
    }
    printf("ci sono esattamente  %d  numeri uguali\n",j );
    return 0 ;
}
