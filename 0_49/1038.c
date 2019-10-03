#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,a0,b0,c0,max;
    scanf("%d %d %d",&a,&b,&c);
    a0 = fabs(a);
    b0 = fabs(b);
    c0 = fabs(c);
    if (a0>=b0)
    {
        max = a0;
       if (max>=c0)
       {
           printf("%d",a);/* code */
       }
       else
       {
           printf("%d",c);
       }
       
    }
    else
    {
        max = b0;
        if (max >= c0)
        {
            printf("%d",b);/* code */
        }
        else
        {
            printf("%d",c);
        }
        
    }
    
    return 0;
}