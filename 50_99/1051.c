#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    double item,sum;
    sum=0.00;
    scanf("%lf %d",&item,&n);
    for ( i = 0; i < n; i++)
    {
        sum=item+sum;
        item=sqrt(item);
    }
    printf("%.2lf",sum);
    return 0;
}