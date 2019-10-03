#include<stdio.h>
int main()
{
    int n,m,p;
    scanf("%d",&n);
    m=n;
    p=1;
    while (m>9)
    {
        m=m/10;
        p=p*10;
    }

    while (p>0)
    {
        printf("%d ",n/p);
        n=n%p;
        p=p/10;
    }
    return 0;
}