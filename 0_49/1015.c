#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,delt,x1,x2;
    scanf("%lf %lf %lf",&a,&b,&c);
    delt = b*b - 4*a*c;
    x1 = ((-b)+sqrt(delt))/(2.0*a);
    x2 = ((-b)-sqrt(delt))/(2.0*a);
    if (x2>x1)
    {
        printf("%7.2lf %6.2lf",x2,x1);
    }
    else
    {
         printf("%7.2lf %6.2lf",x1,x2);
    }
    getchar();
    return 0;
}
