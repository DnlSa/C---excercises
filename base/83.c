#include<stdio.h>

#include <string.h>



int iniziali(char *str[]);



int main(int argc , char *argv[])
{

    char *str[2];
    str[0]=argv[1];
    str[1]=argv[2];
    printf("i caratteri iniziali in comune sono : %d\n", iniziali(str));
    return 0 ;

}
int iniziali(char *str[])
{
   int n=strlen(str[0]),j=0,i=0;
    for(i=0 ; i<n ; i++){
        if(str[0][j]==str[1][j])
            j++;
        else
            ;
    }
return j;
}
