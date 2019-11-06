#include <stdio.h>
#include <math.h>
 
long long change(long n,int m);
 
int main()
{
    int m;
    long n;
    scanf("%ld%d", &n,&m);
    printf("%lld",change(n,m));
    return 0;
}
 
long long change(long n,int m)
{
    long long end = 0;
    int remainder, i = 1, step = 1;
 
    while (n!=0)
    {
        remainder = n%m;
        n /= m;
        end += remainder*i;
        i *= 10;
    }
    return end;
}
