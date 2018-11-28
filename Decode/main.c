#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c,dc;
    char i;
    while ((c=getchar())!='\n')
    {
      if (((c>='a')&&(c<='z'))||((c>='A')&&(c<='Z')))
      {
          if  (c>='a') { i=c-'a';dc='a'+26-i-1;}
          else {i=c-'A';dc='A'+26-i-1;};
          putchar(dc);
      }
      else putchar(c);
    }
    putchar('\n');
    return 0;
}
