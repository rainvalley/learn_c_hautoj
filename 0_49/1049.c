#include<stdio.h>
int main()
{
    int i,m,n,x,y;
    scanf("%d %d",&m,&n);
    x=0,y=0;
    for ( i = m; i <= n; i++)
    {
        if (i%2==0)
        {
            x=i*i+x;
        }
        else
        {
            y=i*i*i+y;
        }
        
    }
    printf("%d %d",x,y);
    return 0;
}