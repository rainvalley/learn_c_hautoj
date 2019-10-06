#include<stdio.h>
int main()
{
    int i0,i,t,n;
    scanf("%d",&t);
    for ( i0 = 0; i0 < t; i0++)
    {
        scanf("%d",&n);
        for ( i = 1; i <= n; i++)
        {
            if (i==7||i%7==0||i%10==7||(i/10)%10==7||(i/100)%10==7||(i/1000)%10==7||(i/10000)%10==7)
            {
                printf("%d ",i);
            }
            
        }
        printf("\n");
    }
    return 0;
}