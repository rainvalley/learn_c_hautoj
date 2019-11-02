#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("(");
    }
    printf(" ");
    for ( i = 0; i < n; i++)
    {
        printf(")");
    }
    return 0;
    
}