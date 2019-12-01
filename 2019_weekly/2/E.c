#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        if (i%2!=0)
        {
            printf("I hate");
        }
        else
        {
            printf("I love");
        }
        if (n-i>0)
        {
            printf(" that ");
        }
    }
    printf(" it");
}