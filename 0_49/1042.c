#include<stdio.h>
int main()
{
    int i,n,b,c;//a为分子，b为分母,c为变号系数。
    double a,sum;
    sum = 0.0;
    c=1;
    a=1.0,b=1;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        sum = sum + c*(a/b);
        a=a+1.0;
        b=b+2;
        c=-c;
    }
    printf("%.3lf",sum);
    return 0;
}