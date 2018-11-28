#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,T,num,max,min,n,sum;
    double avg;
    char ch;
    scanf("%d",&T);
    for (i=0;i<T;i++){
       scanf("%d\n",&n);
       max=0; avg=0.0;
       num=0; sum=0;
       j=0;
       while((ch = getchar()) != '\n')
       {
           if(ch >= '0' && ch <= '9') num = 10 * num + ch - '0';
           if (ch==' ') {
                sum+=num;
                j++;
                if (j==1) {max=num;min=num;}
                else {
                  if (num>max) max=num;
                  if (num<min) min=num;
                }
                num=0;
           }
       }
       if ((j<n)&&(num>0)) { //if last number without space
            sum+=num;
            if (num>max) max=num;
            if (num<min) min=num;
       }
       if (n>2){
          sum=sum-max-min;
          avg=(double) 1.0*sum/(n-2);
       }
       else avg=(double) 1.0*sum/n;
       printf("%.2f\n",avg);
    }
    return 0;
}
