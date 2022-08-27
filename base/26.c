#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    float A,B ;
    int i=1;

    A=atoi(argv[i]);
    B=atoi(argv[++i]);

    printf("la somma e = %.0f\n", A+B);
    printf("la sottrazione e = %.0f\n", A-B);
    printf("la moltiplicazione e = %.2f\n", A*B);
    if(B<=0)
           printf("NON POSSO ESEGUIRE L OPERAZIONE RICHIESTA\n ");
    else
        printf("la divisione e = %.2f\n", A/B);
return 0;
}
