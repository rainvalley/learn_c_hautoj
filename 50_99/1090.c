#include<stdio.h>
int main()
{
    int i,i0,n;
    int a,b,c;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        c=1;
        scanf("%d%d",&a,&b);
        for ( i0 = 0; i0 < b; i0++)
        {
            c=c*a;
            c=c%1000;
        }
        
        printf("%d\n",c);
    }
    
    return 0;
    
}