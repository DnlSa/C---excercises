#include <stdio.h>
#include <math.h>
int main()
{
    float X=1,Y;
    printf("inserisci il numero Y: ");
    scanf("%f", &Y);

    while(1)
    {
        if((pow(X,X))<=Y)
        X++;
        else{
            X-=1;
            printf("il numero massimo e: %.2f\n", X);
            return 0;
        }
    }
}
