#include <stdio.h>

int main()
{
    int A ;
    float B,C;
    printf("inserisci l operazione che si vuole fare\n1 somma 2 differenza 3 molt. 4 divisione :");
    scanf("%d",&A);
    printf("inserisci l operando 1 : ");
    scanf("%f",&B);
    printf("inserisci l operando 2 : ");
    scanf("%f",&C);

    printf("operando 1 : %.2f \n", B);
    printf("operando 2 : %.2f \n", C);
    printf("operazione : %d \n", A);

    switch(A){
        case 1:
            printf("la somma è : %.2f\n",B+C);
            break;
        case 2:
            printf("la differenza è : %.2f\n",B-C);
            break;
        case 3:
            printf("la moltiplicazione è : %.2f\n",B*C);
            break;
        case 4:
            printf("la divisione è : %.2f\n",B/C);
            break;
        default:
            printf("inserisci 1 somma 2 differenza 3 molt. 4 divisione");
    }
return 0;
}
