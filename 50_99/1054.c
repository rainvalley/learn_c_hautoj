#include<stdio.h>
int main()
{
    int i,n,sum;
    scanf("%d",&n);
    sum=1;
    for ( i = 2; i <= n; i++)
    {
        sum = (sum+1)*2;
    }
    printf("%d",sum);
    return 0;
}