#include <stdio.h>
#include <string.h>

int main()
{
    char stringa[]="che bElLA gIOrnaTa";
    printf("stringa attuale: %s\n",stringa);
    int n=strlen(stringa);
    for(int i=0 ; i<n ; i++){
        if(stringa[i]>=97 && stringa[i]<=122  && i==0 || stringa[i-1]==' ' && stringa[i]>=97 && stringa[i]<=122 )
            stringa[i]=stringa[i]-32;

        else if (stringa[i]>=65 && stringa[i]<=90)
                stringa[i]=stringa[i]+32;
        else
            ;
    }
printf("la nuova stringa e : %s\n", stringa);
return 0 ;
}
