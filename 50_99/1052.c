#include<stdio.h>
int main()
{
    int i,n,a,sum,item;
    scanf("%d %d",&n,&a);
    sum = 0;
    item =0;
    for ( i = 0; i < n; i++)
    {
        item=item*10 + a;
        sum = sum +item;
    }
    printf("%d",sum);
    return 0;
}