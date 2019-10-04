#include<stdio.h>
int main()
{
    int m,n,s,sum;
    int i0,i1;//两个循环变量。
    int f;
    double g0;
    double g=0.0;
    f=0;
    sum=0;
    scanf("%d",&n);
    for ( i0 = 0; i0 < n; i0++)
    {
        scanf("%d",&m);
        for ( i1 = 0; i1 < m; i1++)
        {
            scanf("%d",&s);
            if (s<60)
            {
                f++;
                break;
            }
            else if(s>=60)
            {
                g0=1.0+(s-60)/10.0;
            }
            sum=sum+g0;
        }
        g=1.0*sum/m;
        printf("%d %.2lf\n",f,g);
        f=0;
        sum=0;
        
    }
    return 0;
}