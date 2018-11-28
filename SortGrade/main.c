#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,g,T,grade[100000];
    scanf("%d",&T);
    for (i=0;i<T;i++){
        scanf("%d",&grade[i]);
    }
    for (i=0;i<T;i++)
      for (j=i;j<T;j++)
      {
          if (grade[i]<grade[j]) {
                g=grade[i];grade[i]=grade[j];grade[j]=g;
          }
      }

    for (i=0;i<T;i++) printf("%d ",grade[i]);
}
