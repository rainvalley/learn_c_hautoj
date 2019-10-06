#include<stdio.h>
int main()
{
    int i,n;
    int a,b,c;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%*6d%4d%2d%2d%*d",&a,&b,&c);
        printf("%d-%02d-%02d\n",a,b,c);
    }
    return 0;
}