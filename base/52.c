#include <stdio.h>

int main()
{
  int vector[]={1,1,1,1,1,1},n=sizeof(vector)/sizeof(int),i,k=0;

  for(i=0 ; i<n ; i++)
        if(vector[0]==vector[i])
            k++;
        else
            continue;
if (k==n)
    printf("il vettore ha tutti elementi uguali\n");
else
     printf("il vettore non ha tutti elementi uguali\n");

return 0;
}
