#include <stdio.h>
#include <stdlib.h>

int cerca(int v[], int n , int x);



int main(int argc , char *argv[])
{
    int v[]={1,2,3,5,6,7,9,8,4,5,6,7,5};
    int n = sizeof(v)/sizeof(int);
    int x=atoi(argv[1]);

    printf("%d\n",cerca(v,n,x));
return 0  ;
}


int cerca(int v[], int n , int x)
{
    for(int i=0 ; i<n ; i++){
        if(v[i]==x)
            return i;
        else
        ;
    }
return -1;
}
