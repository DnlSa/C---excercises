#include <stdio.h>

int main()
{
    int pair=0, total=0, c;
    do {
        printf("inserisci un numero: ");
        scanf("%d", &c);
        total++;

        if (c%2)
            continue;
        else
            pair++;
    }while(c != -1);

    printf("i numeri inseriti sono : %d \n", total);
    printf("i numeri pari inseriti sono : %d \n", pair);
    return 0;
}
