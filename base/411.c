#include <stdio.h>
#include <string.h>
#include <math.h>


int main(int argc , char *argv[])
{
    int N,i=0,j=0,result=0,value;
    for(N=strlen(argv[1])-1;N>=0;N--){
        value=argv[1][N]-'0';
        if(value!=0){
            result += pow(2,j);
            j++;
        }
        else
            j++;
    }
printf("il numero e : %d\n", result);
return 0;
}


// versione 2 riscritto l if in maniera contratta

int main(int argc , char *argv[])
{
    int N,i=0,j=0,result=0,value;

    for(N=strlen(argv[1])-1;N>=0;N--){
        value=argv[1][N]-'0';
        (value!=0) ? result+=pow(2,j) : ' ' ;
        j++;
    }
printf("il numero e : %d\n", result);
return 0;
}
