#include<stdio.h>
int main()
{
    int i,m,n,s;
    scanf("%d",&n);
    s=1;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&m);
        if (m%2!=0)
        {
            s=s*m;
        }
        
    }
    printf("%d",s);
}