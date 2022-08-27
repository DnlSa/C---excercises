#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
    float k,rect , circle , triangle,pi;
    k=atoi(argv[1]);
    pi=3.14;

    printf("l'area del quadrato e = %.2f \n ",k*k );
    printf("l'area del triangolo e  = %.2f \n",(k*k)/2);
    printf("l'area del cerchio e = %.2f \n",(k*k)*pi);
return 0 ;
}
