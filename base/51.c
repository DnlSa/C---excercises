#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
    int N=atoi(argv[1]),k=0,i;
    int vector[]={1,3,4,5,6,7,8,9,8,9,9,8};
    int q= sizeof(vector)/sizeof(int);

    for (i=0; i<q ; i++)
            (vector[i]==N) ? k=1 : ' ' ;

    if(k)
        printf("numero presente\n");
    else
        printf("numero non presente\n");

    return 0;

}
