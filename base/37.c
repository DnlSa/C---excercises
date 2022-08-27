#include <stdio.h>

int main()
{
    int a,b;
    float x;
    printf("ax+b=0\n");

    printf("inserisci a : ");
    scanf("%d",&a);
    printf("inserisci b : ");
    scanf("%d",&b);

    if(a==0){
        printf("non si puo fare ");
        return 0;
    }
    else
        x=(float)(-b)/(float)a;
    printf("la x vale: %.3f\n", x);

    return 0 ;
}
