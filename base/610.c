#include <stdio.h>
#include <string.h>

//vedere

int main(int argc , char *argv[])
{
    int n1=strlen(argv[1]);
      int n2=strlen(argv[2]);

    for(int i=0 ; i<n2 ; i++){
        for(int j=0 ; j<n1 ; j++){

            if(argv[2][i]==argv[1][j])
                argv[1][j]='*';
            else
                ;
        }
    }
     printf("%s\n",argv[1]);

    return 0 ;
}
