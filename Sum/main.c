#include <stdio.h>
#include <stdlib.h>


int main() {
    int j,n,num = 0,sumOdd=0,sumEven = 0;
    char ch;
    scanf("%d\n",&n);
    j=0;
    while((ch = getchar()) != '\n') {
        if(ch >= '0' && ch <= '9') num = 10 * num + ch - '0';
        if(ch == ' ') {
            j++;
            if (j%2==1) sumOdd +=num;
            else sumEven += num;
            num = 0;
        }
    }
    if (num>0) {
        j++;
        if (j%2==1) sumOdd +=num;
        else sumEven += num;
    }
    printf("%d\n",sumOdd);
    printf("%d\n",sumEven);
    return 0;
}
