#include<stdio.h>
int main ()
{
    int a;
    double b;
    scanf("%d",&a);
    if (a<=10000)
    {
        b=1500+a*0.05;/* code */
    }
    if (a>10000&&a<=50000)
    {
        b=2000+(a-10000)*0.03;
    }
    if (a>50000)
    {
        b=3200+(a-50000)*0.02;/* code */
    }
    printf("%.2lf",b);
    return 0;
}