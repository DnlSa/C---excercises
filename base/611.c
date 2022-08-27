#include <stdio.h>
#include <string.h>

int main(int argc , char *argv[])
{

   char string1[]="ACCIDENTI AL TRAFFICO";
   int n=strlen(string1),k=0,flag;
   char string2[n];
        for(int i=0; i<n ; i++){
            flag=0;
             for(int j=0  ; j<k+1 ; j++){
                if(string1[i]==string2[j])
                    flag=1;
                else
                    ;
             }
        if (flag)
            ;
        else{
          string2[k]=string1[i];
          k++;

        }
   }
printf("%s\n",string2);
return 0 ;
}

// il flag mi trova il doppione se  1 lo ha trovato se 0 no
