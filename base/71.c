#include <stdio.h>

 int negrow(int row , int column ,int matrix[row][column]);
 int columneg(int row , int column ,int matrix[row][column]);




int matrix[4][4]={{1,2,3,4},{-4,-6,-5,-3},{9,7,5,6},{1,2,4,6}}; // matrix [righe] [colonne]

int main(int argc , char *argv[])
{
    int row=4;
    int column=4;





    if( negrow(row , column ,matrix)) // torna 1 se esiste 0 altrimenti
        printf("esite una riga negativa\n");
    else
        printf("NON esite una riga negativa\n");



    if(columneg(row , column ,matrix))
         printf("esite una colonna negativa\n");
    else
        printf("NON esite una colonna negativa\n");



return 0 ;
}


int negrow( int row , int column ,int matrix[row][column])
{
    int count=0;
    for(int i=0 ; i<row ; i++){
        count=0;
        for(int j=0 ; j<column ; j++){
            if(matrix[i][j]<0)
                count++;
            else
                ;
        }
        if(count==row)
            return 1 ;
        else
            ;
    }
return 0 ;
}



int columneg(int row , int column ,int matrix[row][column])
{
    int count=0;
    for(int i=0 ; i<column ; i++){
        count=0;
        for(int j=0 ; j<row ; j++){
            if(matrix[j][i]<0)
                count++;
            else
                ;
        }
        if(count==column)
            return 1 ;
        else
            ;
    }
return 0 ;
}

