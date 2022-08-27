#include <stdio.h>
int massimo(int MAX , int X);
int minimo(int min, int X);
int main()
{
    int X=1,min=10000,MAX=0;
    while(X!=0)
    {
        scanf("%d", &X);
        MAX = massimo(MAX,X);
        min = minimo(min,X);
    }
printf("il numero massimo fra quelli inseriti: %d\n", MAX );
printf("il numero minimo fra quelli inseriti: %d\n", min );
return 0;
}
int massimo(int MAX, int X)
{
    if(X>MAX)
        return X;
    else
        return MAX;
}
int minimo(int min, int X)
{
    if(X<min && X!=0)
        return X;
    else
        return min;
}




