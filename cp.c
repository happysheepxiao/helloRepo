#include <stdio.h>

main()
{
    int Num;
    int i,n;
    double e,x,sum,xn;
    scanf("%d",&Num);
    for (i=1;i<=Num;i++)
    {
        scanf("$d",&x);
        sum=1.0;
        n=0;xn=1.0;
        while (abs(1.0/(1.0-x)-sum)<1e-6)
        {   xn=xn*x;
            n++;
            sum=sum+xn;
        }
        printf("%d\n",xn)

    }
    return 0;
}
