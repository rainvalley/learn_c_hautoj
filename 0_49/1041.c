#include <stdio.h>
int main()
{
    int i,n,d;
    double sum=0.0;
    double f=1.0;
    d=1;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        sum = sum + f/d;
        d = d+2;
        f=-f;
    }
    printf("%.2lf",sum);
    return 0;
}