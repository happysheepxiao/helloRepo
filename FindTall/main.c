#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,t,n,k,tall[100000];
    scanf("%d %d",&n,&k);
    for (i=0;i<n;i++){
        scanf("%d",&tall[i]);
    }
    for (i=0;i<n;i++)
      for (j=i;j<n;j++)
      {
          if (tall[i]<tall[j]) {
                t=tall[i];tall[i]=tall[j];tall[j]=t;
          }
      }
    printf("%d ",tall[k-1]);
}
