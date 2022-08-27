#include <stdio.h>

int main()
{
 int n,k=1,q=0,A,j=0;
 printf("inserisci un numero : ");
 scanf("%d", &n);

 printf("inserisci cosa vuoi stampare : ");
 scanf("%d", &A);


    while(1){

    switch(A){
        case 1:
            for(int i=0 ; i<n ; i++){
                printf("\n");
                for(int j=0 ; j<n ; j++)
                        printf("*");
            }
            printf("\n");
            return 0 ;

        case 2:
            for(int i=0 ; i<n ; i++){
                 printf("\n");
                    for(int j=0 ; j<n ; j++){
                        if(i==0 || i==n-1)
                            printf("*");
                        else{
                            if(j==0 || j==n-1)
                                printf("*");
                            else
                                printf(" ");
                        }
                    }
            }
            printf("\n");
            return 0 ;

        case 3:
            for(int i=0 ; i<n ; i++){
                printf("\n");
                while(j<k){
                    printf("*");
                    j++;
                }
                k++;
                j=0;
            }
            printf("\n");
            return 0 ;

        case 4:
            for(int i=0 ; i<n ; i++){
                printf("\n");
                    for(int j=0 ; j<n ; j++){
                        if(j<k)
                            printf("*");
                        else
                            printf("+");
                }
                k++;
            }
            printf("\n");
            return 0 ;

        default:
            printf("inserisci un numero ");
    }
    }
return 0 ;
}
