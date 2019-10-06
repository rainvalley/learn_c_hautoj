#include<stdio.h>
int main()
{
    int n,i;
    int a,b,c;
    double m;
    a=b=c=0;
    while (scanf("%d",&n)!=EOF&&n!=0)
    {
        for ( i = 0; i < n; i++)
        {
            scanf("%lf",&m);
            {
                if(m<0)
                {
                    a++;
                }
                else if (m==0)
                {
                    b++;
                }
                else if (m>0)
                {
                    c++;
                }
            }    
        }       
        printf("%d %d %d\n",a,b,c);
        a=b=c=0;
        
    }
    return 0;
    
}