#include<stdio.h>
int inverse(n);
int main()
{
    int m,n;
    scanf("%d",&n);
    while (m=inverse(n),m!=n)
    {
        printf("%d ",n);
        n=m+n;
    }
    printf("%d",m);
    
}

int inverse(n)
{
    int t,p=0;
    t=n;
    while (n!=0)
    {
        p=n%10+p*10;
        n=n/10;
    }
    if (p==t)
    {
        return p;
    }
}