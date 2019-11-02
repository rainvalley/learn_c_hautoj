#include<stdio.h>
int main()
{
    int n,m;
    int i,j,f;
    int sum;
    double s,g;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&m);
        f=sum=0;
        for ( j = 0; j < m; j++)
        {
            scanf("%lf",&s);
            if (s<60)
            {
                f++;
            }
            else if (s>=60)
            {
                sum=sum+(1+(s-60.0)/10.0);
            }
        }
        g=1.0*sum/m;
        printf("%d %.2lf\n",f,g);
        
    }
    
}