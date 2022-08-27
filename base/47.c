#include <stdio.h>
int main()
{
    int X=1,k=-1,sum=0;
    float med;
    while(X!=0)
    {
        scanf("%d",&X);
        k++;
        sum+=X;
    }
    printf("numeri inserirti sono: %d \n",k);
    printf("somma dei numeri inserirti sono: %d \n",sum);
    med=(float)sum/(float)k; // casto gli int
    printf("la media dei numeri inserirti sono: %.2f\n",med);
   return 0 ;
}
