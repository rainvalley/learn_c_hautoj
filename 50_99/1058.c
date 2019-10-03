#include<stdio.h>
int main()
{
    int n,i,m;
    double sum,x;
    x=1;
    sum=0;
    scanf("%d",&n);
    for ( i = 1;; i++)
    {
        x=x*i;
        sum=sum+x;
        if (sum>=n)
        {
           printf("m<=%d",i-1) ;
           break;
        }
        
    }
    return 0;

}