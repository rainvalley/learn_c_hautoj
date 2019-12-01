#include<stdio.h>
int main()
{
    int years=0;
    int a,b;
    scanf("%d%d",&a,&b);
    while (a<=b)
    {
        a=a*3;
        b=b*2;
        years++;
    }
    printf("%d",years);
}