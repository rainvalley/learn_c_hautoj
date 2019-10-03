#include <stdio.h>
int main()
{
    int a,n,i,b;
    i = 0;
    b = 0;
    scanf("%d",&n);
    while (i<n)
    {
        scanf("%d",&a);
        b = b + a;
        i++;
    }
    printf("%d",b);
    return 0;
    
}