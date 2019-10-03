#include<stdio.h>
int main()
{

    int n,i;
    double sum;
    sum = 0.00;
    scanf("%d",&n);
    for (i=1;i<=2*n-1;i=i+2)
       {
         sum = sum + 1.0/i;
       }
    printf("%.2lf",sum);
    return 0;
}
