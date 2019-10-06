#include<stdio.h>
long fact(long n);
int main()
{
    long m,k;
    long s;
    scanf("%d%d",&m,&k);
    s=fact(m)/(fact(k)*(fact(m-k)));
    printf("%d",s);
    return 0;
}
long fact(long n)
{
    int i;
    long s=1;
    for ( i = 1; i <= n; i++)
    {
        s=s*i;
    }
    return s;
    
}