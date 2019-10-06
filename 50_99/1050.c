/*#include <stdio.h>
int main()
{
    int i0,i,n;
    double sum,s;
    scanf("%d",&n);
    sum=0;
    s=1;
    for ( i = 1; i <= n; i++)
    {
        
        for ( i0 = 1; i0 <= i; i0++)
        {   
            s=i0*s;
        }
        
        sum=sum+s;
    }
    printf("%.0lf",sum);
    return 0;
}*/
#include<stdio.h>
int main(void)
{
    int i,n;
    double s,y;
    scanf("%d",&n);
    s=1.0;
    for(i=1;i<=n;i++)
    {
        s*=i;
        y+=s;
    }
    printf("%.f",y);
    return 0;
}