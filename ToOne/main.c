#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    while (n!=1) {
        if (n%2==1) n=3*n+1;
        else n=n/2;
        j++;
    }
    printf("%d\n",j);
    return 0;
}
