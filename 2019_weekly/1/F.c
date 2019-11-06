#include<stdio.h>
int main()
{
    int i;
    long n;
    scanf("%ld",&n);
    i=0;
    while (n!=1)
    {
        if (n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=3*n+1;
        }
        i=i+1;
    }
    printf("%d",i);
}