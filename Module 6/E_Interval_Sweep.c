#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

   if(a==0 && b==0)printf("NO\n");
   else if(abs(a-b)==1 || abs(a-b)==0)printf("YES");
   else printf("NO\n");

    return 0;
}