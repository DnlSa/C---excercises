#include <stdio.h>

int main()
{
    int vector1[]={1,2,3,4,5,6,7,8,9,0,11,12,13,1,4,15,16,17,18,19,20}, vector2[]={1,12,13,1,4,15,16,17};
    int n1=sizeof(vector1)/sizeof(int),n2=sizeof(vector2)/sizeof(int);
    int vector3[n1+n2],i,k=0,j;

    for(i=0; i<n1;i++){

        if(vector1[i]%2==0){
            vector3[k]=vector1[i];
            k++;
        }
        else
            continue;

    }
    for(i=0; i<n2;i++){

        if(vector2[i]%2==0){
            vector3[k]=vector2[i];
            k++;
        }
        else
            continue;
    }

printf("il vettore3  è : " );

for(i=0;i<k;i++)
        printf("%d ", vector3[i] );

printf("\n" );

return 0;

}
