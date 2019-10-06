#include<stdio.h>
int main()
{
    int m,n,i;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%*6d%5d",&m);
        printf("6%05d\n",m);
    }
    
}