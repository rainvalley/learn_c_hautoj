/*#include<stdio.h>
#include<math.h>
double fact(int a);//输入值为a，阶乘值为b。
int main()
{
    int i;
    double x,sum;
    scanf("%lf",&x);
    sum=0;
    for ( i = 1; i <= 10; i++)
    {
        if (i%2==0)
        {
            sum = sum - (pow(x,i)/fact(2*i-1));
        }
        else
        {
            sum = sum + (pow(x,i)/fact(2*i-1));
        }
        
        
    }
    printf("%.3lf",sum);
    return 0;
}

double fact(int a)
{
    scanf("%d",&a);
    int i,b;
    for ( i = 1; i <= a; i++)
    {
        b=i*b;
    }
    return b;
}*/
#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,sum,m,n;
    int i,p;//m为分母，n为分子，p为符号。
    m=1.0;
    p=1.0;
    sum=0.0;
    scanf("%lf",&x);
    n=x;
    for ( i = 1; i <= 10; i++)
    {
        y=p*(n/m);
        sum=sum+y;
        m=m*(2*i)*(2*i+1);
        n=n*x*x;
        p=-p;
    }
    printf("%.3lf",sum);
    return 0;
}