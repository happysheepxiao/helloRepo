#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,b,i,ord,book[100000];
    scanf("%d %d",&T,&b);
    ord=-1;
    for (i=0;i<T;i++){
        scanf("%d",&book[i]);
        if ((book[i]==b)&&(ord<0)) ord=i+1;
    }
    if (ord>0) printf("%d\n",ord);
    else printf("Error!\n");
    return 0;
}
