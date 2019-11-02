#include<stdio.h>

int inverse(int n);
int main()
{
    int m,n;
    scanf("%d",&n);
    m=inverse(n);
    printf("%d",m+n);
    return 0;
}

int inverse(int n)
{
    int m=0;
    while (n!=0)
    {
        m=m*10+n%10;
        n=n/10;
    }
    return m;
}
