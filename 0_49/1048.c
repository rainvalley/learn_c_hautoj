#include<stdio.h>
int main()
{
    int i,n;
    long s;
    s=1;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {   
        s=i*s;
        printf("%-4d%-20ld\n",i,s);
    }
    return 0;
}