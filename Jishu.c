#include <stdio.h>
#include <math.h>

main()
{
    int Num;
    int i,n;
    double elap,x,sum,xn;
    scanf("%d",&Num);
    for (i=1;i<=Num;i++)
    {
        scanf("%lf",&x);
        sum=1.0;
        n=0;xn=1.0;

        elap=abs(1.0/(1.0-x)-sum);
        while (elap<=1e-6)
        {   xn=xn*x;
            n++;
            sum=sum+xn;
            elap=fabs(1.0/(1.0-x)-sum);
        }
        printf("%d\n",xn);
    }
    return 0;
}
