#include <stdio.h>

int main(int argc, char *argv[])
{
    int vector1[]={1,6,15,20,25};
    int vector2[]={2,20,18,6};
    int n1=sizeof(vector1)/sizeof(int), n2=sizeof(vector2)/sizeof(int);
    int vector3[n2];
    int i,j,k=0;

    for(i=0;i<n2;i++){
        for(j=0;j<n1;j++){
            if(vector2[i]==vector1[j]){
                vector3[k]=vector2[i];
                k++;
            }else
                continue;
        }
    }
printf("il vettore risultante è: ");
for(i=0; i<k;i++)
    printf("%d  ", vector3[i]);

printf("\n");
return 0;
}
