#include<stdio.h>
#include<limits.h>
int main()
{
    int i,n,m,max;
    scanf("%d",&n);
    m = INT_MIN;
    max = m;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&m);
        if (m>max)
        {
            max=m;
        }
        
    }
    printf("%d",max);
    return 0;
}