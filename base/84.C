#include<string.h>
#include<stdio.h>


void alltuopper(char *str);

int main(int argc , char *argv[])
{
    char *str=argv[1];
    alltuopper(str);
    printf("%s\n",argv[1]);

return 0 ;
}

void alltuopper(char *str)
{
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if('A'<=str[i]<='Z')
            str[i]+=32;
        else
            ;
    }
}
