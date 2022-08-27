#include <stdio.h>
#include <stdlib.h>

//media su qualsiasi numero passato in input

int main(int argc , char *argv[])
{
    int i=1;
    float res,sum;
        while(i<argc){
            sum += atoi(argv[i]);
            i++;
        }

    res= sum / (argc-1);
    printf("argomenti passati sono = %d\n", argc-1);
    printf("la media e = %.2f\n", res);
    return 0 ;

}
