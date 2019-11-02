#include<stdio.h>
int main()
{
    int i,n,m;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        int reg=0;
        int x=1;;
        scanf("%d",&m);
        if (m==0)
        {
            printf("0\n");
        }
        else
        {
            while (m>0)
            {
            int t = m%1000;
            int a,b,c;//个，十，百位。
            a=t%10;
            b=(t/10)%10;
            c=(t/100)%10;
            reg=reg+(a+b*2+c*4)*x;
            x=x*10;
            m=m/1000;
            }
            printf("%d\n",reg);
        }
        
        
    }
    
}