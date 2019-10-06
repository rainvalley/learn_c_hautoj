#include<stdio.h>
int main()
{
    int i,n,m,s;
    s=1;
    while (scanf("%d",&n),n!=EOF)
    {
        for ( i = 0; i < n; i++)
        {
            if (n%2!=0)
            {
                s=s*n;
            }
            
        }
        printf("%d ",s);
        s=1;
        
    }
    return 0;
}