#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
    int i=1;
    float pf,pr , sc;

    pr =atoi(argv[i]);
    ++i;
    sc =atoi(argv[i]);

    printf("il prezzo e = %.0f \n", pr );
    printf("lo sconto e = %.0f \n", sc);

    printf("\ncartellino \n");
    printf("il prezzo e = %.2f \n", pr);
    printf("lo sconto e = %.0f%% \n", sc);

    pf= pr-(pr*((sc)/100));
    printf("il prezzo e = %.2f \n", pf);

    return 0;
}
