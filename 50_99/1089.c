#include<stdio.h>
int main()
{
    int i,n,max;
    double s=1.0;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        s=s*i;
        while (s>=10)
        {
            s=s/10;
        }
        
    }
    printf("%.0f",s);
    return 0;
}