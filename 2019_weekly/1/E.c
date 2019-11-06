#include <stdio.h>
#include <math.h>
 
long long chan(long n,int m);
 
int main()
{
    int m;
    long n;
    scanf("%ld%d", &n,&m);
    printf("%lld",chan(n,m));
    return 0;
}
 
long long chan(long n,int m)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;
 
    while (n!=0)
    {
        remainder = n%m;
        n /= m;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}