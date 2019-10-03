#include<stdio.h>
int main()
{
    double x,y;
    int i;
    scanf("%lf",&x);
    for ( i = 1; i <= 5; i++)
    {
        y=(y+1000.0)/(1+12*x);
        
    }
    printf("%.2lf",y);
    return 0;
}