#include <stdio.h>
#define PI 3.14159
int main ()
{
    double r,c,s;
    scanf("%lf",&r);
    c = 2*PI*r;
    s = PI*r*r;
    printf("%.2lf %.2lf",c,s);
    return 0;
}