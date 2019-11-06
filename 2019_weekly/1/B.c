#include<stdio.h>
int main()
{
    int i,n;
    long long ai,sum;
    scanf("%d",&n);
    sum=0;
    for ( i = 0; i < n; i++)
    {
        scanf("%lld",&ai);
        sum=sum+ai;
    }
    printf("%lld",sum);
    
}