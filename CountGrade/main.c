#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,g,T,Total=0,nice=0,eight=0,seven=0,six=0,under=0,grade[100000];
    float avg;
    scanf("%d",&T);
    for (i=0;i<T;i++){
        scanf("%d",&grade[i]);
        Total+=grade[i];
        g=grade[i]/10;
        switch(g)
        {
          case 10:
          case  9: nice++; break;
          case  8: eight++;break;
          case  7: seven++;break;
          case  6: six++;  break;
          default: under++;
        }
    }
    avg=1.0*Total/T*1.0;
    printf("%.1f %d %d %d %d %d\n",avg,nice,eight,seven,six,under);
    return 0;
}
