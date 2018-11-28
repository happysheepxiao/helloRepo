#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,k,l,T,r;
    char c[32];
    scanf("%d",&T);
    for (i=0;i<T;i++) {
        scanf("%s",c);
        l=strlen(c);
        r=0;
        k=1;
        for (j=l-1;j>=0;j--) {
            r+=(c[j]-'0')*k;
            k*=2;
        }
        printf("%d\n",r);
    }
    return 0;
}
