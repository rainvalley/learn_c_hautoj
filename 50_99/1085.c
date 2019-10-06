#include<stdio.h>
int main()
{
    int i,n,m,s;
    while (scanf("%d\n",&n)!=EOF)
    {
        s=1;
        for ( i = 1; i <= n; i++)
        {
            scanf("%d",&m);
            if (m%2!=0)
            {
                s=s*m;
            }
            
        }
        printf("%d\n",s);

    }
    return 0;
}