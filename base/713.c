#include <stdio.h>
#define N 4

void stampagioco();
int printmosse();
void mossa(int );
int finegioco();
int matrix[N][N]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,0,15}};

int main()
{
    int num,w;
    while(1){

        stampagioco(); // stampa la matrice ad ogni mossa ;
        num = printmosse();
        mossa(num);
        w=finegioco();
        if(w==1)
            return 0;
    }
return 0 ;

}

void stampagioco()
{
     for(int i=0 ; i<N ; i++){
            printf("\n");
             for(int j=0 ; j<N; j++){
                 if(matrix[i][j]==0)
                     printf(" X ");
                else
                 printf(" %d ", matrix[i][j]);
             }
        }
}
// mi serve il puntatore per modificare la matrice senza copiarla
int printmosse()
{
    int q,i,j,r=0,mossa;
    int a,b,c,d; // memorizza mosse
        for(i=0 ; i<N ; i++){
             for(j=0 ; j<N; j++){
                    if(matrix[i][j]== r)
                        break;
                    else
                       ;
             }
        if(matrix[i][j]==r)
                break;
        }

if(i==1 && j==2 || i==1 && j==1 || i==2 && j==2 || i==2 && j==1 ){ //1<=i<=2 && 1<=j<=2 perche non funziona cosi ????????????
        printf("\nle mosse possibili sono : %d,%d,%d,%d\n",matrix[i-1][j] , matrix[i+1][j],matrix[i][j-1],matrix[i][j+1]);
        a=matrix[i-1][j];
        b=matrix[i+1][j];
        c=matrix[i][j-1];
        d=matrix[i][j+1];
}else{
    q=i+j;
     switch(q){
           case 0 :
            printf("\nle mosse possibili sono : %d,%d\n",matrix[i+1][j],matrix[i][j+1]);
            a=matrix[i][j+1];
            b=matrix[i+1][j];
            break;

            case 1: // caso j=0 COLONNA 0
                if(j==0 && i==1){
                    printf("\nle mosse possibili sono : %d,%d,%d\n",matrix[i-1][j] , matrix[i+1][j],matrix[i][j+1]);
                    a=matrix[i-1][j];
                    b= matrix[i+1][j];
                    c=matrix[i][j+1];
                }else{
                    printf("\nle mosse possibili sono : %d,%d,%d\n",matrix[i][j-1] , matrix[i+1][j],matrix[i][j+1]);
                    a=matrix[i][j+1];
                    b=matrix[i+1][j];
                    c=matrix[i][j-1];

                }break;

            case 2:
                if(j==0 && i==2){
                    printf("\nle mosse possibili sono : %d,%d,%d\n",matrix[i-1][j] , matrix[i+1][j],matrix[i][j+1]);
                    a=matrix[i-1][j];
                    b=matrix[i+1][j];
                    c=matrix[i][j+1];
                }else{
                    printf("\nle mosse possibili sono : %d,%d,%d\n",matrix[i][j-1] , matrix[i+1][j],matrix[i][j+1]);
                    a=matrix[i][j-1];
                    b=matrix[i+1][j];
                    c=matrix[i][j+1];
                }break;

            case N-1:
                if(j==N-1){
                    printf("\nle mosse possibili sono : %d,%d\n",matrix[i+1][j],matrix[i][j-1]);
                    a=matrix[i][j-1];
                    b=matrix[i+1][j];
                }else{
                    printf("\nle mosse possibili sono : %d,%d\n",matrix[i-1][j],matrix[i][j+1]);
                    a=matrix[i-1][j];
                    b=matrix[i][j+1];
                }break;

            case N:
                if(j==N-1 && i==1){
                    printf("\nle mosse possibili sono : %d,%d,%d\n",matrix[i-1][j] , matrix[i+1][j],matrix[i][j-1]);
                    a=matrix[i-1][j];
                    b=matrix[i+1][j];
                    c=matrix[i][j-1];
                }else{
                    printf("\nle mosse possibili sono : %d,%d,%d\n",matrix[i][j-1] , matrix[i-1][j],matrix[i][j+1]);
                    a=matrix[i][j-1];
                    b=matrix[i-1][j];
                    c=matrix[i][j+1];
                }break;

            case N+1:
                  if(j==N-1 && i==2){
                    printf("\nle mosse possibili sono : %d,%d,%d\n",matrix[i-1][j] , matrix[i+1][j],matrix[i][j-1]);
                    a=matrix[i+1][j];
                    b=matrix[i-1][j];
                    c=matrix[i][j-1];
                  }else{
                    printf("\nle mosse possibili sono : %d,%d,%d\n",matrix[i][j-1] , matrix[i-1][j],matrix[i][j+1]);
                    a=matrix[i][j-1];
                    b=matrix[i-1][j];
                    c=matrix[i][j+1];
                  }break;

        case 2*(N-1):
            printf("\nle mosse possibili sono : %d,%d\n",matrix[i-1][j],matrix[i][j-1]);
            a=matrix[i][j-1];
            b=matrix[i-1][j];
            break;
     }
}
while(1){
printf("inserisci la mossa che vuoi fare : ");
scanf("%d",&mossa);

if(mossa == a || mossa ==b || mossa==c || mossa==d && mossa != 0 ){
    a=b=c=d=0;
    return mossa;
}else
    printf("INSERISCI LA MOSSA GIUSTA\n");
}

}

void mossa(int n)
{
    // implementazione della mossa
    // idea di puntare il numero che gli ho dato poi cerca nelle vicinanze lo 0 e  ne fa lo s
     int i,j,r=0,temp;
       for(i=0 ; i<N ; i++){
             for(j=0 ; j<N; j++){
                    if(matrix[i][j]== r)
                        break;
             }
        if(matrix[i][j]== r)
            break;
       }
    // torna la posizione di 0
    if(matrix[i+1][j]==n){
        temp=matrix[i][j];
        matrix[i][j]=matrix[i+1][j];
        matrix[i+1][j]=temp;

    }else if( matrix[i][j+1]==n){
        temp=matrix[i][j];
        matrix[i][j]=matrix[i][j+1];
        matrix[i][j+1]=temp;

    }else if (matrix[i-1][j]==n){
        temp=matrix[i][j];
        matrix[i][j]=matrix[i-1][j];
        matrix[i-1][j]=temp;
    }
    else if (matrix[i][j-1]=n){
        temp=matrix[i][j];
        matrix[i][j]=matrix[i][j-1];
        matrix[i][j-1]=temp;
    }
    else
        ;
}
int  finegioco()
{   int count = 1;
       for(int i=0 ; i<N ; i++){
             for(int j=0 ; j<N; j++){
                 if(matrix[i][j]==count)
                     count++;
                else
                  ;
             }
        }
if(count==(N*N)){
    printf("HAI VINTO\n");
    return 1 ;
}else
    return 0;
}





