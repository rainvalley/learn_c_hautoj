#include<stdio.h>
int main()
{
    int n,a,b,c,no;//公鸡，母鸡，小鸡。
    scanf("%d",&n);
    no=0;
    for ( a = 0; a <= n/5 ; a++)
    {
        for ( b = 0; b <=n/3; b++)
        {
                c=n-a-b;
                if (5*a+3*b+(c/3.0)==n)
                {
                    printf("%4d%4d%4d\n",a,b,c);
                    no=1;
                }
                
        }
        
    }
    if (no==0)
    {
        printf("No Answer\n");
    }
    return 0;
}