#include <stdio.h>
#include <string.h>

#define MAXLENS 100

int main()
{
    char stringa[]="VacAnze di natAle ";
    char vocali[]="AEIOU";
    int voc=strlen(vocali);
    printf("%s\n",stringa);
    int n=strlen(stringa);
    char stringa2[MAXLENS];
    int k=0;

    for(int i=0 ; i<n ; i++){
        stringa2[k]=stringa[i];
        k++;
        for(int j=0 ; j<voc ; j++){
             if(stringa[i]==vocali[j]){
                    stringa2[k]='F';
                    k++;
                    break;
            }else if (stringa[i]==vocali[j]+32){
                    stringa2[k]='f';
                    k++;
                    break;
            }else
                ;
        }
    }

printf("la nuova stringa e : %s\n", stringa2);
return 0 ;
}

