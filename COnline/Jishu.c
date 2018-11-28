#include <stdio.h>
#include <math.h>

int main()
{
    int Num;
    int i,n;
    double x1,x,sum,xn;
    scanf("%d",&Num);
    for (i=1;i<=Num;i++)
    {
        scanf("%lf",&x);
        sum=1.0;
        n=0;xn=1.0;

        x1=1.0/(1.0-x);
        while (fabs(x1-sum)>1e-6)
        {   xn=xn*x;
            n++;
            sum=sum+xn;
        }
        printf("%d\n",n);
    }
    return 0;
}
