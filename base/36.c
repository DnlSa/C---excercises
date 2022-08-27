#include <stdio.h>
#include <stdlib.h>

int main(int argc , char*argv[])
{
    float A=atoi(argv[1]),B=atoi(argv[2]),C=atoi(argv[3]);

        if (A==B && A==C)
            printf("triangolo equilatero\n");

        else if(A==B && A!=C || B==C && B!=A || A==C){
            if ((A*A+B*B)==C*C ||(A*A+C*C)==B*B || (B*B+C*C)==A*A) // pitagora per vedere se il l ipotenusa coincide con il valore passato
                printf("triangolo e rettangolo\n");
            else
            printf("triangolo e isoscele\n");
        }

        else
            printf("triangolo e scaleno\n");


return 0;
}


