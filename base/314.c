#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,x1,x2, det,d;

    printf("inserisci a: ");
    scanf("%f",&a);

    printf("inserisci b: ");
    scanf("%f",&b);

    printf("inserisci c: ");
    scanf("%f",&c);

    if((b*b)-(4*a*c)>0)
        d=(b*b)-(4*a*c);
    else{
        printf("determinante negativo\n");
        return 0;
    }

    det= sqrt(d);

    x1=(((-b)+det)/(2*a));
    x2=(((-b)-det)/(2*a));

    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);

    return 0;

}
