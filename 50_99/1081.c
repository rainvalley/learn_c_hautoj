#include<stdio.h>
int main()
{
    int t,n,m,i0,i1,sum;
    sum=0;
    scanf("%d",&t);
    for ( i0 = 0; i0 < t; i0++)
    {   
        scanf("%d",&n);
        for ( i1 = 0; i1 < n; i1++)
        {
            scanf("%d",&m);
            sum=sum+m;
        }
        printf("%d ",sum);
        sum=0;
    }
    
}