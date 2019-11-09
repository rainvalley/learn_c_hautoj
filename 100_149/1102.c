#include<stdio.h>
double CancelFee(double price);
int main()
{
    double n,m;
    scanf("%lf",&n);
    m=CancelFee(n);
    printf("%.1lf",m);
    return 0;
}
double CancelFee(double price)
{
    double n;
    n=0.05*price;
    if ((n-(int)n)>=0.0&&(n-(int)n)<0.25)
    {
        n=(int)n;
    }
    if ((n-(int)n)>=0.25&&(n-(int)n)<0.75)
    {
        n=(int)n+0.5;
    }
    if ((n-(int)n)>=0.75&&(n-(int)n)<1.0)
    {
        n=(int)n+1;
    }
    return n;
    
}