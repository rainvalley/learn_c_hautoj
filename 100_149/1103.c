#include<stdio.h>
int grade(int n);
int main()
{
    int m,n,i,i0,x;
    double sum,sum1;
    scanf("%d",&i0);
    sum = sum1 = 0.0;
    for(i=0;i<i0;i++)
    {
        scanf("%d %d",&x,&n);
        m=grade(n);
        sum=sum+m*x;
        sum1=sum1+x;
    }
    printf("%.1f",1.0*sum/sum1);
    return 0;
}

int grade(int n)
{
    int m;
    if(n<60)
        return 0;
    else
        m=(n-50)/10;
        return m;
}
