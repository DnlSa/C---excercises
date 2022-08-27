#include <stdio.h>
#include <stdlib.h>

int positive(int c);
int pair (int d);
int maxsum( int c , int d);



int main(int argc , char *argv[])
{
    int i=1 , A = atoi(argv[i]) ,   B = atoi(argv[++i]);

    // ritorna 1 se positivo 0 se negativo

    (positive(B))? printf("B è positivo\n") : printf ("B è negativo\n");

    // pari o dispari
    (pair(A))? printf("A è pari\n") : printf ("A è dispari\n");

    // somma tra A+B
    printf("la somma è : %d\n", A+B);
    //
    printf("la somma massima è : %d\n" , maxsum(A,B));

}



int positive(int c)
{
    if(c>0)
        return 1;
    else
        return 0;
}

int pair(int d)
{
    if(d%2)
        return 0;
    else
        return 1;
}

int maxsum( int d , int c)
{

    int temp = d+c;
    if (temp < (-d+c) || temp < (d-c)){
        temp = (-d+c);
        if(temp < (d-c))
            temp = (d-c);
    }
 return temp;
}
