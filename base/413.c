#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
    int INIZIO= atoi(argv[1]), LUN = atoi(argv[2]),i;
    printf("la serie e: ");
    for(i=0; i<=LUN ; i++)
        printf("%d ", INIZIO++);

return 0 ;
}
