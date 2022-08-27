
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define LUN 30

int main(void)
{
    char prodotti[MAX][LUN] ;
    char prod[LUN] ;
    int quantita[MAX] ;
    int qta ;
    char dir ;
    int i ;
    int trovato ;
    int N ; /* dimensione dei vettori prodotti[] e quantita[] */
    N = 0 ;
do
{
    printf("Comando: ") ;
    scanf("%s", prod) ;
    if ( strcmp(prod, "FINE") != 0 ){
        scanf(" %c %d", &dir, &qta) ;
        if ( dir== 'E' ) /* entrata */
            {
                trovato = -1 ;
                for (i=0; i<N; i++)
                {
                    if ( strcmp(prodotti[i], prod) == 0 )
                        trovato = i ;
                        }

                    if ( trovato != -1 ) /* prodotto esiste già */
                        {
                                quantita[trovato] = quantita[trovato] + qta ;
                        }
                    else /* prodotto nuovo */
                        {
                            /* aggiungi il prodotto al magazzino in posizione nuova */
                            strcpy(prodotti[N], prod) ;
                            quantita[N] = qta ;
                            N++ ;
                        }
           }
        else /* uscita */
            {
                /* trova la posizione del prodotto nel vettore prodotti[] */
                trovato = -1 ;
                for (i=0; i<N; i++)
                {
                    if ( strcmp(prodotti[i], prod) == 0 )
                            trovato = i ;
                }
                    if ( trovato == -1 ){
                            printf("Prodotto %s non trovato in magazzino\n", prod);
                        }
                    else
                    {
                        quantita[trovato] = quantita[trovato] - qta ;
                        }
            }
        }
   }
    while ( strcmp(prod, "FINE") != 0 ) ;
        for (i=0; i<N; i++)
            {
                printf("%s %d\n", prodotti[i], quantita[i]) ;
        }
    exit(0) ;
    }
