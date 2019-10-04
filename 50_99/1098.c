#include<stdio.h>
#include<math.h>
double funF(double x);
double funG(double x);

int main()
{
    double x,y,z;
    scanf("%lf",&x);
    y=funG(x);
    z=funF(y);
    printf("%.2lf",z);
    return 0;
}

double funF(double x)
{
    double x0;
    x0=fabs(x-3)+fabs(x+1);
    return x0;
}

double funG(double x)
{
    double x1;
    x1=x*x-3*x;
    return x1;
}