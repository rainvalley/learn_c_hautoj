#include<stdio.h>
#include<math.h>
int main()
{
    int i,m,n;
    double l;
    scanf("%d %d",&m,&n);
    for ( i = m; i <= n; i++)
    {
        l = 1.0*log(i);
        printf("%4d%8.4lf\n",i,l);
    }
    return 0;
    
}