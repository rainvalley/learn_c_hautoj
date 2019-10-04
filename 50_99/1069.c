#include<stdio.h>
int main()
{
    int m,k,n;
    n=0;
    scanf("%d %d",&m,&k);
    while (m--)
    {
        n++;
        if (n%k==0)
            m++;
    }
    
    printf("%d",n);
    return 0;
}