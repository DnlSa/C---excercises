#include<stdio.h>

// fusione dei vettori

int main()
{

     int vector1[]={1,6,15,20,25};
     int vector2[]={2,8,18,19};
     int n1=sizeof(vector1)/sizeof(int), n2=sizeof(vector2)/sizeof(int);
     int n3=n1+n2,i,k=0 ;
     int vector3[n3];

     for(i=0;i<n3 ; i++ ){
         if(i<=n2-1 && i<=n1-1){
             if(vector1[i]<vector2[i]){
                 vector3[k]=vector1[i];
                 vector3[k+1]=vector2[i];
                 k+=2;
             }else{
                 vector3[k]=vector2[i];
                 vector3[k+1]=vector1[i];
                 k+=2;
             }
         }
         else if(i>n2-1 && i<=n1-1){
             vector3[k]=vector1[i];
             k++;
         }else if(i<=n2-1 && i>n1-1){
             vector3[k]=vector2[i];
             k++;

         }else
             break;
     }

printf("il vettore è : ");

for(i=0;i<n3 ; i++ )
    printf("%d ", vector3[i]);


printf("\n");
return 0 ;
}
