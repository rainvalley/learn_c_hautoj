#include <stdio.h>
int main()
{
    int n,m,h;
    scanf("%d %d",&m,&n);
    while(m%n!=0)
    {
        h=m%n;
        m=n;
        n=h;
    }
    printf("%d",n);
    return 0;
}
