#include <stdio.h>
int main()
{
    int m,n,x,y;
    scanf("%d %d",&m,&n);
    x = (4*m-n)/2;
    y = (-m + n/2);
    printf("%d %d",x,y);
    return 0;
}