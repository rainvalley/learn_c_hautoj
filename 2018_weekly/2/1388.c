#include<stdio.h>
int main()
{
    long long m,n,x,y,a;
    long long and;
    scanf("%lld %lld %lld",&n,&m,&a);
    if (m%a==0)
    {
        x=m/a;
    }
    else if(m%a!=0)
    {
        x=m/a+1;
    }

    if (n%a==0)
    {
        y=n/a;
    }
    else if (n%a!=0)
    {
        y=n/a+1;
    }
    
    and=x*y;
    printf("%lld",and);
}