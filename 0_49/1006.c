#include <stdio.h>
int main()
{
    int a1,an,d,n;
    scanf("%d %d %d",&a1,&an,&d);
    n = (an-a1)/d + 1;
    printf("%d",n*(a1+an)/2);
    return 0;

}